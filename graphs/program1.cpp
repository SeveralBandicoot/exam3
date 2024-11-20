std::cout << "Maps \n";
• cout << "\nAdjacency List \n" << endl;
• unordered_map<string, list<int>> nodes;
• list<int> number1{ 1,2}; // number1 = edge1
• list<int> number2{ 0,2,3 };
• list<int> number3{ 0,1 };
• list<int> number4{ 1 };
• nodes.insert(pair<string, list<int>>("zero", number1)); // zero = node 0
• nodes.insert(pair<string, list<int>>("one", number2));
• nodes.insert(pair<string, list<int>>("two", number3));
• nodes.insert(pair<string, list<int>>("three", number4));
• for (auto pb : nodes)
• {
• cout << "\n" << pb.first << " ";
• // Note the Nested Loop for the List
• for (auto sec : pb.second)
• {
• cout << sec << " ";
• }
• }

