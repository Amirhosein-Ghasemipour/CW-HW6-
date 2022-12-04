#include<stdio.h>
#include<math.h>
double line_length(int x1,int y1,int x2,int y2) {
    double result=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    return result;

}
double area(double p,double a,double b,double c) {
    double result=sqrt(p*(p-a)*(p-b)*(p-c));
    return result;

}
double max(double x,double x2) {
    double result;
    if(x>=x2)
         result = x;
    else
         result = x2;

    return result;

}

int main() {
    int n,x1,x2,x3,x4,y1,y2,y3,y4;
    scanf("%d",&n);
    double a,b,c,d,p1,p2,p3,p4,s,x,area1,area2,areat,area3,area4,areat2,e,perimeter,maximum=0,x10=0,bd,result;
    for(int i=0;i<n;i++) {
        scanf("%d %d",&x1,&y1);
        scanf("%d %d",&x2,&y2);
        scanf("%d %d",&x3,&y3);
        scanf("%d %d",&x4,&y4);
        c=line_length(x1,y1,x2,y2);
        a=line_length(x2,y2,x3,y3);
        b=line_length(x3,y3,x1,y1);
        bd=line_length(x2,y2,x4,y4);
        d=line_length(x1,y1,x4,y4);
        e=line_length(x3,y3,x4,y4);
        p1=(a+b+c)/2;
        p2=(b+d+e)/2;
        p3=(d+c+bd)/2;
        p4=(a+e+bd)/2;
        area1=area(p1,a,b,c);
        area2=area(p2,b,d,e);
        area3=area(p3,d,c,bd);
        area4=area(p4,a,e,bd);
        areat=area1+area2;
        areat2=area3+area4;
        result=(areat+areat2)/2;
        if(area1+area3+area4<=area2+0.001 && area1+area3+area4>=area2-.001)
            result=area3+area4;
        else if(area2+area3+area4<=area1+0.001 && area2+area3+area4>=area1-0.001)
            result=area3+area4;
        else if(area2+area1+area4<=area3+0.001 && area2+area1+area4>=area3-0.001)
            result=area1+area2;
        perimeter=a+c+d+e;
        x=result/perimeter;
        maximum=max(x,maximum);
        printf("%.2lf\n",result);
        printf("%.2lf\n",perimeter);
    }
    printf("%.2lf\n",maximum);
    return 0;
}
