//TASK 1
//#include <iostream>
//using namespace std;
//int main(){
//    int number;
//    cout << "Input a no: ";
//    cin >> number;
//    cout << "The factors of "<<num<<" are :"<<endl;
//    for(int i=1;i<=number;i++){
//   	 if (number % i == 0){
//   		 cout << i << "*" << num/i << endl;
//   	 }
//    }
//    return 0;
//}
//
//
//TASK 3
//#include <iostream>
//using namespace std;
//int main(){
//   	 int num;
//   	 bool flag;
//   	 cout << "Input no: ";
//   	 cin >> num;
//   	 if (num > 10 && num <= 20){
//   		 flag = true;
//   	 }
//   	 else{
//   		 flag =false;
//   	 }
//   	 cout << flag;
//   	 return 0;
//}
//
//
//TASK 4
//#include <iostream>
//using namespace std;
//int main(){
//	int num, i;
//	bool value;
//	cout<<"Input the number: ";
//	cin>>num;
//	while (num>=2){
//		i=2;
//		value=false;
//		while(i<num){
//			if(num%i==0){
//				value=true;
//				break;
//			}
//			i++;
//		}
//		if(value==false){
//			cout<<"Largest Prime is "<<num<<endl;
//			break;
//		}
//		num--;
//	}
//	return 0;
//}
//
//
//
//
//TASK 5
//
//#include <iostream>
//#include <limits>
//using namespace std;
//int main(){
//	char a[25], b[25];
//	cout<<"Input the first line of text: ";
//	cin.get(a, 25);
//	cin.ignore(numeric_limits<streamsize>::max(), '\n');
//	cout<<"Input the second line of text: ";
//	cin.get(b, 25);
//	cout<<"The first srting is: \n"<<a<<endl;
//	cout<<"The second string is: \n";
//	for (int i=24; i>=0; i--){
//		if (a[i]==b[i]){
//			cout<<b[i];
//		}
//	}
//	return 0;
//}
//
//
//TASK 6
//
//#include <iostream>
//using namespace std;
//int main(){
//	int num, divisor, ans;
//	cout<<"Input the number: ";
//	cin>>num;
//	cout<<"Input the divisor: ";
//	cin>>divisor;
//	for (ans=1; ans<=num; ans++){
//		if(divisor*ans==num){
//			cout<<num<<"/"<<divisor<<"="<<ans;
//			break;
//		}
//	}
//	return 0;
//}
//
//
//TASK 7
//
//#include <iostream>
//#include <string>
//using namespace std;
//int main(){
//	string a;
//	int l;
//	cout<<"Input the string text: ";
//	getline(cin, a);
//	l= a.length();
//	for (int i=0; i<=l; i++){
//		for (int j=0; j<=l; j++){
//			if (tolower(a[i])==tolower(a[j]) && i!=j){
//				a.erase(j, 1);
//				j--;
//				l=a.length();
//			}
//		}
//	}
//	cout<<a;
//	return 0;
//}
//
//
//TASK 8
//
//#include <iostream>
//using namespace std;
//int main(){
//	int a[50]={1,2,3,4,5};
//	cout<<"Input digits into the array. \n"
//		<<"Enter 0 to stop the input stream and display the array. \n";
//	for (int i=5; i<=49; i++){
//		cin>>a[i];
//		if (a[i]==0){
//			break;
//		}
//	}
//	cout<<"The current values stored in the array are: \n";
//	for (int j=0; j<=49; j++){
//		if (a[j]==0){
//		break;
//		}
//		cout<<a[j]<<endl;	
//	}
//	return 0;
//}
//
//
//TASK 9
//
//#include <iostream>
//using namespace std;
//int main(){
//	int length, a[length], num, j, k, l;
//	bool value=false;
//	cout<<"Input the length of the input array: ";
//	cin>>length;
//	cout<<"Input the values in the array: ";
//	for (int i=0; i<length; i++){
//		cin>> a[i];
//	}
//	cout<<"Input a number: ";
//	cin>>num;
//	for(j=0; j<length; j++){
//		for(k=j+1; k<length; k++){
//			for (l=k+1; l<length; l++){
//				if (a[j]+a[k]+a[l]==num){
//					value=true;
//					break;
//				}
//			}
//		if(value==true){
//			break;
//		}
//		}
//	if(value==true){
//		break;
//	}
//	}
//	cout<<num<<" is the sum of "<<a[j]<<"(Array."<<j+1<<") ,"
//							 <<a[k]<<"(Array."<<k+1<<") & "
//							 <<a[l]<<"(Array."<<l+1<<")";
//	return 0;
//}
//
//
//TASK 10
//
//#include <iostream>
//using namespace std;
//int main(){
//		int a[6];
//		cout<<"Input 6 integers in the array: \n";
//		for (int i=0; i<=5; i++){
//			cin>>a[i];
//		}
//		for(int j=0; j<=5; j++){
//			for (int k=0; k<=5; k++){
//				if (a[k]>a[k+1]){
//					swap(a[k], a[k+1]);
//				}
//			}
//		}
//		cout<<"The sorted values are: \n";
//		for (int l=0; l<=5; l++){
//			cout<<a[l]<<"\n";
//		}
//	return 0;
//}
