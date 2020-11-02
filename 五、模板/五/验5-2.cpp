#include <iostream> 
#include <string> 
using namespace std;

template<typename T>
class List;
template<typename T>
class Node
{
	T info;  //������ 
	Node<T> *link;   //ָ���� 
	public:
	Node();  //����ͷ���Ĺ��캯�� 
	Node(const T & data);//����һ����Ĺ��캯��  
	friend class List<T>;
};
template <typename T>
Node<T>::Node()
{
	link = NULL;
}
template <typename T>
Node<T>::Node(const T & data)
{
	info = data;
	link = NULL;
}
//����������  
template<typename T>
class List
{
	Node<T> *head;      //����ͷָ���βָ�� 
public:
	List();         //���캯��������ͷ���(������)  
	~List();        //��������   
	void MakeEmpty();     //���һ������ֻ���ͷ���  
	Node<T>* Find(T data);   //������������data��ͬ�Ľ�㣬���ظý��ĵ�ַ 
	void PrintList();          //��ӡ�����������  
	void InsertOrder(Node<T> *p);  //��������������    
	Node<T>* CreatNode(T data);     //����һ�����(�������)   
	Node<T>* DeleteNode(Node<T>* p); //ɾ��ָ�����
};
template<typename T>
List<T>::List()
{
	head = new Node<T>(-9999);//ͷ��㣬��С�����ݴ�С������� 
}

template<typename T>
List<T>::~List()
{
	MakeEmpty();
	delete head;
}
template<typename T>
void List<T>::MakeEmpty()
{
	Node<T> *tempP;
	while (head->link != NULL)
	{
		tempP = head->link;
		head->link = tempP->link;  //��ͷ����ĵ�һ���ڵ����������   
		delete tempP;            //ɾ��(�ͷ�)���������Ľ��   
	}
}
template<typename T>
Node<T>* List<T>::Find(T data)
{
	Node<T> *tempP = head->link;
	while (tempP != NULL && tempP->info != data)
		tempP = tempP->link;
         return tempP; //�����ɹ����ظý���ַ�����ɹ�����NULL  
}
template<typename T>
void List<T>::PrintList()
{
	Node<T>* tempP = head->link;
	while (tempP != NULL)
	{
		cout << tempP->info << '\t';
		tempP = tempP->link;
	}
	cout << endl;
}
template<typename T>
void List<T>::InsertOrder(Node<T> *p)
{
	Node<T> *tempP = head, *tempQ = head; //tempQָ��tempPǰ���һ���ڵ� 
	while (tempP != NULL)
	{
		if(p->info<tempP->info)break;//�ҵ�һ���Ȳ������Ľ�㣬��tempPָ��   
		tempQ = tempP;
		tempP = tempP->link;
	}
	p->link = tempP;
	tempQ->link = p;
}
template<typename T>
Node<T>* List<T>::CreatNode(T data)
{
	//�����½ڵ�  
	Node<T>*tempP = new Node<T>(data);
	return tempP;
}
template<typename T>
Node<T>* List<T>::DeleteNode(Node<T>* p)
{
	Node<T>* tempP = head->link, *tempQ = head, *tempC;
	while (tempP != NULL && tempP != p)
	{
		tempQ = tempP;
		tempP = tempP->link;
	}
	tempC = tempP;
	tempQ->link = tempP->link;
	return tempC;
}

int main()
{
	Node<int> * P1;
	List<int> list1;
	int a[10] = { 20, 12, 0, -5, 9, -18, 6, 11, 5, 3 }, i, j;
	for (i = 0; i < 10; i++)
	{
		P1 = list1.CreatNode(a[i]);
		list1.InsertOrder(P1);
	}
	list1.PrintList();
	cout << "������һ��Ҫ��ɾ��������" << endl;
	cin >> j;
	P1 = list1.Find(j);
	if (P1 != NULL)
	{
		P1 = list1.DeleteNode(P1);
		delete P1;
		list1.PrintList();
	}
	else
		cout << "δ�ҵ�" << endl;
	cout << "������һ��Ҫ����������" << endl;
	cin >> j;
	P1 = list1.CreatNode(j);
	list1.InsertOrder(P1);
	list1.PrintList();
	list1.MakeEmpty();
	//���list1  
	list1.PrintList();
	system("pause");
	return 0;
}
