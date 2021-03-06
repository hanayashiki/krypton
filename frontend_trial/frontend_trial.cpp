// frontend_trial.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

#include "antlr4-runtime.h"
#include "KryptonLexer.h"
#include "KryptonParser.h"
#include "KryptonBaseVisitor.h"

void Fuck(const std::string & file_name, bool verbose=true)
{
	using namespace antlr4;

	std::ifstream stream;
	stream.open(file_name, std::ios_base::in);

	if (verbose) std::cout << "testing " << file_name << std::endl;

	if (stream.fail())
	{
		throw std::exception("not exists file_name");
	}

	ANTLRInputStream input(stream);
	KryptonLexer lexer(&input);
	CommonTokenStream tokens(&lexer);
	KryptonParser parser(&tokens);

	KryptonParser::ProgramContext* tree = parser.program();

	KryptonBaseVisitor base_visitor;
	auto visit = base_visitor.visitProgram(tree);

	return;
}

int main()
{
	Fuck("Test1.kry");
	Fuck("Test2.kry");
	Fuck("Test3.kry");
	Fuck("Test4.kry");
	Fuck("Test5.kry");

	for (int i = 0; i < 100; i++)
	{
		Fuck("Test4.kry", false);
	}

	std::cout << "end." << std::endl;
	std::cin.get();
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
