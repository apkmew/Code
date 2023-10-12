#include<stdio.h>
#include<string.h>
char a[5050],b[5050];
int ans[2525000];
int tonum(char t){
	if(t == '\0' || t == '-') return 0;
	return t-48;
}
int main(){
	scanf(" %s %s",a,b);
	if(a[0] == '0' || b[0] == '0'){
		printf("0");
        return 0;
	}
	int i,j,tod=0,ch = 0;
	int opa = (a[0] == '-')?1:0;
	int opb = (b[0] == '-')?1:0;
	int lena = strlen(a),lenb = strlen(b);
	for(i=lena-1;i>=0+opa;i--){
		tod = 0;
		for(j=lenb-1;j>=0+opb;j--){
			int numa = tonum(a[i]);int numb = tonum(b[j]);
			int sum = numa*numb+tod;
			int j0 = lenb - j - 1,i0 = lena - i - 1;
			tod = 0;
			if(sum>=10 && j!=0+opb){
				tod = sum/10;
				sum = sum%10;
			}
			ans[j0+i0]+=sum;
		}
	}
	if((!opa && opb)||(!opb && opa)) printf("-");
	int tod2 = tod;
	tod = 0 ;
	for(i=0;i<=lena+lenb - (opa||opb)?1:0;i++){
		if(ans[i]>=10 && i!=(lena-opa)+(lenb-opb)){
			ans[i+1]+=ans[i]/10;
			ans[i] = ans[i]%10;
		}
		else if(ans[i]>=10){
			tod2+=ans[i]/10;
			ans[i] = ans[i]%10;
		}
	}
	if(tod2!=0) printf("%d ",tod2);

    int start_i = (lena-opa)+(lenb-opb)+ ((opa&&opb)?1:0);
	for(i=start_i;i>=0;i--){
		if(!ch && ans[i]!=0) ch = 1;
		if(ch) printf("%d",ans[i]);
	}
	return 0;
}