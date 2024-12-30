int main()
{
	int b,c,f,d,e,loc=1;
	int a[10];
	system("color f2");
	label:
	cout<<"MENU\n1: ADD STUDENT\n2: DELETE STUDENT\n3: UPDATE STUDENT\n 4: SEARCH STUDENT\n5: DISPLAY STUDENTS\n9: EXIT PROGRAM"<<endl;
	cin>>b;
	if(b==1)
	cout<<"ENTER HOW many students you want to enter :";
			cin>>c;
	switch(b){
		case 1:{
			int a[c];
			for(int i=0;i<=c;i++){
		cout<<"Enter "<<i<<" roll number :";
		cin>>a[i];
		}
				goto label;
	}
	case 2:{
		again:
		cout<<"ENTER A ROLL NUMBER TO DELETE";
		cin>>d;
		for(int i=1;i<=10;i++){
		if(d==a[i]){
		a[i]==0;
		loc++;
		}
	}
	if(loc==1){
	cout<<"ROLL NUMBER DOES NOT FOUND\n";
	goto again;}
	goto label;
	}
case 3:{
		aga:
		cout<<"ENTER A ROLL NUMBER TO UPDATE";
		cin>>e;
		for(int i=1;i<=c;i++){
		if(d==a[i]){
		cout<<"ENTER NEW ROLL NUMBER";
		cin>>a[i];
		loc++;
		}
	}
	if(loc==1){
	cout<<"ROLL NUMBER DOES NOT FOUND\n";
	goto aga;}
	goto label;
	}
case 4:{
	agai:
	cout<<"ENTER A ROLL NUMBER TO SEARCH";
	cin>>f;
for(int i=1;i<=c;i++){
		if(f==a[i]){
		loc++;
		cout<<"Your roll number is found at index :'"<<i<<"'"<<endl;}
	}
	if(loc==1){
	cout<<"No ROLL NUMBER found"<<endl;
	goto agai;}
	goto label;
}
case 5:{
		for(int i=1;i<=c;i++){
		cout<<"ROLL NUMBERS :"<<a[i]<<endl;
}
goto label;
}
case 9:{
	break;
}
}
return 0;
}

	
	
