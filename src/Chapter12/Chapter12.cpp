//1.
//a.û��Ϊ˽�г�Ա��������ֵ��
//b.Ӧ��ʹ��new[]�� strcpy();
//c. û�и�str���������ڴ棻
//
//2.
//	1.ʹ����û���ͷ��ڴ� ��������������������е���delete �������ͷţ�
//	2.û�и���Ա�����ڴ�  ����������ڹ��캯���и�ָ���Ա���������ڴ棻
//	3.
//
//3.
//	1.���ƹ��캯��
//	2.Ĭ�Ϲ��캯��
//	3.��ֵ������
//
//4.
//	nifty::nifty()
//	{
//	personality = new char[1];
//	personality = NULL;
//	talents = 0;
//	}
//
//	nifty::nifty()
//	{
//		personality = new char[strlen(s)];
//		strcpy(personality, s);
//		talents = 0;
//	}
//
//	ostream& nifty::operator<<(ostream& os, nifty& n)
//	{
//		os << n.personality << "��  " << n.talents;
//	}
//
//	5.
//		a. 1.