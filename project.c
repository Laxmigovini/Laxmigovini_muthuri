#include<stdio.h>
void display1();
void display2();
void display3();
void display4();
void display5();
void display6();
int main(){
	int c,choice,p,ch,a,rs,total,cost;
	printf("\n1.gopalpur");
	printf("\n2.hasanparthy");
	printf("\n3.naim nagar");
	printf("\n4.warangal");
	printf("\n5.KU-Xroad");
	printf("\n6.karimnagar");
	do{
	printf("\nenter your choice:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			display1();
			break;
			case 2:
				display2();
				break;
				case 3:
					display3();
					break;
					case 4:
						display4();
						break;
						case 5:
							display5();
							break;
							case 6:
								display6();
								break;
							    default:
								   {
								   	 printf("\nyour choice is invalid");
								   	 break;
								   }
							}
							   printf("\n\t_________________**______________**_______________\n\t");
							printf("\n");
								printf("\nDo you want to purchase this land..if yes press 1 else 0");
								scanf("%d",&p);
								if(p==1)
								{
									printf("\n1.purchase land");
									printf("\n2.construct house");
									printf("\n3.land for registration");
								   printf("\n\nEnter Your Choice : ");
								   scanf("%d",&ch);									
									switch(ch)
									{
										case 1:
											{
												printf("The cost of plot==>");
												scanf("%d",&a);
												break;
											}
										case 2:
											{
												printf("The cost of plot:");
												scanf("%d",&a);
												printf("The cost of 1 square foot land if we construct a house:");
												scanf("%d",&rs);
												total=a*rs;
												printf("The total cost after construction of house is==>%d/-",total);
												break;
											}
										case 3:
											{
												printf("\nThe cost for registration of the land:");
												scanf("%d",&cost);
											}
											break;
											default:
											printf("\nyour choice is invalid");
											break;
									}
									printf("\n\t____________**THANKYOU**____________\n\t");
							 }
							printf("\nif you want to contine press 1 else 0==>");
							scanf("%d",&c);	
}while(c==1);
}
struct gopalpur{
	int length;
	int breath;
	float yards;
	int amount;
	float totalamount;
	int houseno;
};
void displaya(struct gopalpur i1);
void display1(){
	struct gopalpur i;
	printf("\n*********GOPALPUR***********\n");
	printf("\nenter length of plot:");
	scanf("%d",&i.length);
	printf("\nenter breath of plot:");
	scanf("%d",&i.breath);
	printf("\nenter house number of plot==>");
	scanf("%d",&i.houseno);
	i.yards=((i.length*i.breath)/9);
	printf("\nenter cost of land per square yard:");
	scanf("%d",&i.amount);
	i.totalamount=(i.yards*i.amount);
	displaya(i);
}
void displaya(struct gopalpur i1){
	printf("\nyards=%f",i1.yards);
	printf("\ntotal cost of plot:%f/-",i1.totalamount);
}
	struct hasanparthy{
	int length;
	int breath;
	float yards;
	int amount;
	float totalamount;
	int houseno;
};
void displayb(struct hasanparthy j1);
void display2(){
	struct hasanparthy j;
	printf("\n*********HASANPARTHY***********\n");
	printf("\nenter length of plot:");
	scanf("%d",&j.length);
	printf("\nenter breath of plot:");
	scanf("%d",&j.breath);
	printf("\nenter house number of plot==>");
	scanf("%d",&j.houseno);
	j.yards=(j.length*j.breath)/9;
	printf("\nenter cost of land per square yard:");
	scanf("%d",&j.amount);
	j.totalamount=j.yards*j.amount;
	displayb(j);
}
void displayb(struct hasanparthy j1){
	printf("\nyards=%f",j1.yards);
	printf("\ntotal cost of plot:%f/-",j1.totalamount);
}
	struct naimnagar{
	int length;
	int breath;
	float yards;
	int amount;
	float totalamount;
	int houseno;
};
void displayc(struct naimnagar k1);
void display3(){
	struct naimnagar k;
	printf("\n*********NAIMNAGAR***********\n");
	printf("\nenter length of plot:");
	scanf("%d",&k.length);
	printf("\nenter breath of plot:");
	scanf("%d",&k.breath);
	printf("\nenter house number of plot==>");
	scanf("%d",&k.houseno);
	k.yards=((k.length*k.breath)/9);
	printf("\nenter cost of land per square yard:");
	scanf("%d",&k.amount);
	k.totalamount=(k.yards*k.amount);
	displayc(k);
}
void displayc(struct naimnagar k1){
	printf("\nyards=%f",k1.yards);
	printf("\ntotal cost of plot:%f/-",k1.totalamount);
}
	struct warangal{
	int length;
	int breath;
	float yards;
	int amount;
	float totalamount;
	int houseno;
};
void displayd(struct warangal l1);
void display4(){
	struct warangal l;
	printf("\n*********WARANGAL***********\n");
	printf("\nenter length of plot:");
	scanf("%d",&l.length);
	printf("\nenter breath of plot:");
	scanf("%d",&l.breath);
	printf("\nenter house number of plot==>");
	scanf("%d",&l.houseno);
	l.yards=((l.length*l.breath)/9);
	printf("\nenter cost of land per square yard:");
	scanf("%d",&l.amount);
	l.totalamount=l.yards*l.amount;
	displayd(l);
}
void displayd(struct warangal l1){
	printf("\nyards=%f",l1.yards);
	printf("\ntotal cost of plot:%f/-",l1.totalamount);
}
	struct kuxroad{
	int length;
	int breath;
	float yards;
	int amount;
	float totalamount;
	int houseno;
};
void displaye(struct kuxroad m1);
void display5(){
	struct kuxroad m;
	printf("\n*********KUX-ROAD***********\n");
	printf("\nenter length of plot:");
	scanf("%d",&m.length);
	printf("\nenter breath of plot:");
	scanf("%d",&m.breath);
	printf("\nenter house number of plot==>");
	scanf("%d",&m.houseno);
	m.yards=((m.length*m.breath)/9);
	printf("\nenter cost of land per square yard:");
	scanf("%d",&m.amount);
	m.totalamount=(m.yards*m.amount);
	displaye(m);
}
void displaye(struct kuxroad m1){
	printf("\nyards=%f",m1.yards);
	printf("\ntotal cost of plot:%f/-",m1.totalamount);
}
	struct karimnagar{
	int length;
	int breath;
	float yards;
	int amount;
	float totalamount;
	int houseno;
};
void displayf(struct karimnagar n1);
void display6(){
	struct karimnagar n;
	printf("\n*********KARIMNAGAR***********\n");
	printf("\nenter length of plot:");
	scanf("%d",&n.length);
	printf("\nenter breath of plot:");
	scanf("%d",&n.breath);
	printf("\nenter house number of plot==>");
	scanf("%d",&n.houseno);
	n.yards=(n.length*n.breath)/9;
	printf("\nenter cost of land per square yard:");
	scanf("%d",&n.amount);
	n.totalamount=n.yards*n.amount;
	displayf(n);
}
void displayf(struct karimnagar n1){
	printf("\nyards=%f",n1.yards);
	printf("\ntotal cost of plot:%f/-",n1.totalamount);
}
