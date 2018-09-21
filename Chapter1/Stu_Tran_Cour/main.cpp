#include <iostream>


int main()
{
		// �л� ��ü
		Student s1 = new Student("����");
		Student s2 = new Student("�浿");
		Student s3 = new Student("�漭");

		// ���� ��ü
		Course se = new Course("����Ʈ���� ����");
		Course designPattern = new Course("������ ����");


		Transcript t1 = new Transcript(s1, se);
		Transcript t2 = new Transcript(s1, designPattern);
		Transcript t3 = new Transcript(s2, designPattern);
		Transcript t4 = new Transcript(s1, designPattern);
		Transcript t5 = new Transcript(s3, se);
		Transcript t6 = new Transcript(s3, designPattern);

		t1.setDate("2012");
		t1.setGrade("B0");
		t3.setDate("2013");
		t3.setGrade("C+");
		t2.setDate("2012");
		t2.setGrade("D+");
		t4.setDate("2013");
		t4.setGrade("A+");
		t5.setDate("2015");
		t5.setGrade("B+");
		t6.setDate("2015");
		t6.setGrade("A0");

		Vector<Course> courses;

		//courses = s1.getCourses();
		System.out.println(s1.getName() + "�� ������ �����");
		Vector<Transcript> transcript;
		transcript = s1.getTranscript();
		/*for (int i=0; i<courses.size(); i++)
		System.out.println(courses.get(i).getName());*/

		for (int i = 0; i<transcript.size(); i++)
		{
			System.out.println(transcript.get(i).getCourse().getName() +
				" �ñ� : " + transcript.get(i).getDate() +
				" ���� : " + transcript.get(i).getGrade());
		}

		Vector<Student> students;

		students = designPattern.getStudents();
		System.out.println("\n" + designPattern.getName() + " ��������");
		for (int i = 0; i<students.size(); i++)
			System.out.println(students.get(i).getName());
}