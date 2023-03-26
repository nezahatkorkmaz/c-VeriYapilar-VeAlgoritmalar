#include <iostream>
using namespace std; // cout fonksiyonun vs. �al��mas� i�in

struct node {

int data;

struct node * next;

}; // yap�m�z� olu�turduk

struct node * basaEkle ( struct node * head, int key)

{

	if (head ==NULL )
	{
		struct node * temp = new node();
		
		temp->data= key;
		
		temp->next=NULL;
		
		head = temp;
		
		cout << " Ilk dugum olu�turuldu." << endl;
	
	}
	
	else {
	
		struct node * temp = new node();
		
		temp->data= key;
		
		temp->next=head ; // head yerine NULL yazarsan da sona ekleme i�lemi yapm�� olursun.
		// Son d���m hep NULL'u g�sterir.  
		
		head = temp;
		
		cout << " Dugume ekleme islemi gerceklestirildi." << endl; // head ekleme yap�larak g�ncellendi.
	
	}
return head;
}

int main() {
	struct node * head = NULL;
	head = basaEkle (head, 11);
	head = basaEkle (head, 22);
	head = basaEkle (head, 33);
	
	cout << head -> data << " ";
	cout << head -> next -> data<< " ";
	cout << head -> next -> next -> data<< " ";
	//En son eklenen say� hep ba�a geliyor.
	
	struct node * temp = head;
	while ( temp!=NULL)
	{
		cout<< temp -> data << " ";
		temp = temp -> next; // d���mler aras�nda trevars i�lemi ger�ekle�tiriliyor. (gezinme)
	}
}
