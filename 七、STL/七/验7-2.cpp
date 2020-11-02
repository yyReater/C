#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <iterator>
#include <numeric>
class Speaker //ѡ����
{
public:
	string name;   //ѡ������
	int score[3];  //ѡ��ÿһ�ֱ����ĵ÷�
};

//����ѡ��
int GenSpeaker(map<int, Speaker>& mapSpeaker, vector<int>& v)
{
	string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";  //������Ա������
	random_shuffle(str.begin(), str.end()); //�����������
	for (int i = 0; i < 24; i++)
	{
		Speaker temp; //Speaker�����
		temp.name = temp.name + str[i];
		mapSpeaker.insert(pair <int, Speaker>(100 + i, temp));
  								//��д100+i��tempΪSpeaker����	 
  								//�������ѡ�����ַ���mapSpeaker������
	}
	for (int i = 0; i < 24; i++)
	{
		v.push_back(100 + i); //�μӱ�������Ա�����ŷ���v������
	}
	return 0;
}

//ѡ�ֳ�ǩ
int speech_contest_draw(vector<int> &v)
{
	random_shuffle(v.begin(), v.end()); //�������
	return 0;
}
//ѡ�ֱ���
//�������ڼ��ֱ���  ����ѡ��   �������÷��޸���mapSpeaker��  �����������һ��v2
int speech_contest(int index, vector<int> &v1, 
 				map<int, Speaker> &mapSpeaker, vector<int> &v2)
{
	//С��ı����÷֣���¼���������ǰ�����������
	multimap<int, int, greater<int> > multmapGroup; //���С��ɼ�
	              //�������壺�÷֣�ѡ�ֱ�ţ� ���Ӵ�С����
	int tempCount = 0; 
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		tempCount++; //ÿ�μ�һ��ѡ�֣�������1
		
		//��ί���
		deque<int> dscore; //�����洢��ί��ķ�
		for (int j = 0; j < 10; j++) //10����ί���
		{
			int score = 50 + rand() % 50;
			dscore.push_back(score);
		}
		sort(dscore.begin(), dscore.end()); //��dscore�����еķ�������
		dscore.pop_back(); //ȥ����߷�
		dscore.pop_front(); //ȥ����ͷ�

		//��ƽ����
		int scoresum = accumulate(dscore.begin(), dscore.end(), 0); //�ܷ�
		int scoreavg = scoresum / dscore.size(); //ƽ����
		mapSpeaker[*it].score[index] = scoreavg; //��ѡ�ֵ÷ִ���map������
         //�÷���ѡ�ֱ�Ŵ��뵽��multmapGroup������
		multmapGroup.insert(pair<int, int>(scoreavg, *it));  


		//�������
		if (tempCount % 6 == 0) //�����6��ѡ���˾ͷ�һ��
		{
			cout <<"С��ɼ���" << endl;
			for (multimap<int, int, greater<int> >::iterator mit 
  				= multmapGroup.begin(); mit != multmapGroup.end(); mit++)
			{
				//���˳�򣺱��  ����  �÷�
				cout << mit->second << "\t" <<"ѡ��"
  			<< mapSpeaker[mit->second].name << "\t" << mit->first << endl;
			}

			//ǰ3�����������������ŵ�v2������
			while (multmapGroup.size() > 3)//multmapGroup�����ǴӴ�С�����
			{
				multimap<int, int, greater<int> >::iterator it 
 											= multmapGroup.begin();
				v2.push_back(it->second); //��ѡ�ֱ�Ŵ��뵽v2������
				multmapGroup.erase(it);//ɾ��it��Ӧ��Ԫ�أ�������һ��Ԫ�ص�λ��
			}
			multmapGroup.clear(); //���֮��Щ������գ���һ�ִ���
		}
	}
	return 0;
}

//�鿴�������
int speech_contest_print(int index, vector<int> &v,
 							 map<int, Speaker> &mapSpeaker)
{
	printf("��%d�ֽ���������\n", index + 1);
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "��ţ�" << *it << "\t" <<"ѡ��"<<mapSpeaker[*it].name <<
 							 "\t" << mapSpeaker[*it].score[index] << endl;
	}
	return 0;
}

int main()
{
	//�������
	map<int, Speaker> mapSpeaker;  //�μӱ�����ѡ���������÷�
	vector<int>		  v1;  //��1�ֱ���������
	vector<int>		  v2;  //��2�ֱ���������
	vector<int>		  v3;  //��3�ֱ���������
	vector<int>		  v4;  //��4�ֱ���������

	//�������
	//����ѡ�֣��õ���һ��ѡ�ֵı�������
	GenSpeaker(mapSpeaker, v1);

	//��1��  ѡ�ֳ�ǩ  �鿴�������
	cout << "���������ʼ��1�ֱ�����" << endl;
	cin.get();
	speech_contest_draw(v1); //v1�д洢���ǵ�1��ѡ�ֵ�����
	speech_contest(0, v1, mapSpeaker, v2); 
	speech_contest_print(0, v2, mapSpeaker); 
	
	//��2��  ѡ�ֳ�ǩ  �鿴�������
	cout << "\n���������ʼ��2�ֱ�����" << endl;
	cin.get();
	speech_contest_draw(v2);
	speech_contest(1, v2, mapSpeaker, v3);
	speech_contest_print(1, v3, mapSpeaker);
	

	//��3��  ѡ�ֳ�ǩ  �鿴�������
	cout << "\n���������ʼ��3�ֱ�����" << endl;
	cin.get();
	speech_contest_draw(v3);
	speech_contest(2, v3, mapSpeaker, v4);
	speech_contest_print(2, v4, mapSpeaker);
	system("pause");
	return 0;
}
