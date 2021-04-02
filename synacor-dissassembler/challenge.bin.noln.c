		-
		-
		std::cout << "Welcome to the Synacor Challenge!\n";
		std::cout << "Please record your progress by putting codes like\n";
fn93:	
		std::cout << "this one into the challenge website: MvQNsZixuLOX\n";
		std::cout << "\nExecuting self-test...\n";
		std::cout << "\n";
		goto l0;
		std::cout << "jmp fails\n";
		exit();
		-
		-
		-
		-
l0:		-
		-
		-
		-
		-
		goto l1;
		goto l66;
		goto l67;
l1:		goto l9;
		goto l68;
		goto l69;
		-
		-
		-
		-
l66:	std::cout << "jmp lands -2\n";
		exit();
		-
		-
l67:	std::cout << "jmp lands -1\n";
		exit();
l68:	-
		-
		std::cout << "jmp lands +1\n";
		exit();
l69:	-
		-
		-
		-
		std::cout << "jmp lands +2\n";
		exit();
l9:		if (0 != 0) { goto l12; }
		if (1 == 0) { goto l12; }
		if (1 != 0) { goto l13; }
		goto l12;
l13:	if (0 == 0) { goto l17; }
		goto l12;
l17:	if (reg[0] != 0) { goto l19; }
		if (reg[1] != 0) { goto l19; }
		if (reg[2] != 0) { goto l19; }
		if (reg[3] != 0) { goto l19; }
		if (reg[4] != 0) { goto l19; }
		if (reg[5] != 0) { goto l19; }
		if (reg[6] != 0) { goto l19; }
		if (reg[7] != 0) { goto l19; }
		reg[0] = 1;
		if (reg[0] == 0) { goto l20; }
		reg[0] = 0;
		if (reg[0] != 0) { goto l20; }
		reg[0] = 1 + 1;
		if (reg[0] != 0) { goto l21; }
		std::cout << "no add op\n";
		exit();
l21:	reg[1] = (reg[0] == 2) ? 1 : 0;
		if (reg[1] != 0) { goto l22; }
		std::cout << "no eq op\n";
		exit();
l22:	stack.push(reg[0]);
		stack.push(reg[1]);
		reg[0] = stack.pop();
		reg[1] = stack.pop();
		reg[2] = (reg[1] == 2) ? 1 : 0;
		if (reg[2] == 0) { goto l23; }
		reg[2] = (reg[0] == 1) ? 1 : 0;
		if (reg[2] == 0) { goto l23; }
		reg[2] = (reg[1] > reg[0]) ? 1 : 0;
		if (reg[2] == 0) { goto l24; }
		reg[2] = (reg[0] > reg[1]) ? 1 : 0;
		if (reg[2] != 0) { goto l24; }
		reg[2] = (42 > 42) ? 1 : 0;
		if (reg[2] != 0) { goto l24; }
		reg[0] = 28912 & 19626;
		reg[1] = (reg[0] == 16544) ? 1 : 0;
		if (reg[1] == 0) { goto l25; }
		reg[1] = 28912 | 19626;
		reg[0] = (reg[1] == 31994) ? 1 : 0;
		if (reg[0] != 0) { goto l26; }
		std::cout << "no bitwise or\n";
l232:	\
		exit();
l26:	reg[0] = ~0;
		reg[1] = (reg[0] == 32767) ? 1 : 0;
		if (reg[1] == 0) { goto l27; }
		reg[0] = ~21845;
		reg[1] = (reg[0] == 10922) ? 1 : 0;
		if (reg[1] == 0) { goto l27; }
		fn1();
		goto l3;
l18:	reg[0] = stack.pop();
		reg[1] = (reg[0] == 708) ? 1 : 0;
		if (reg[1] != 0) { goto l3; }
		reg[1] = (reg[0] == 706) ? 1 : 0;
		if (reg[1] == 0) { goto l3; }
		reg[0] = 1287;
		reg[0]();
		goto l3;
l2:		reg[0] = stack.pop();
		reg[1] = (reg[0] == 731) ? 1 : 0;
		if (reg[1] != 0) { goto l3; }
		reg[1] = (reg[0] == 729) ? 1 : 0;
		if (reg[1] == 0) { goto l3; }
		reg[0] = 32767 + 32767;
		reg[1] = (reg[0] == 32766) ? 1 : 0;
		if (reg[1] == 0) { goto l4; }
		reg[1] = (32766 == reg[0]) ? 1 : 0;
		if (reg[1] == 0) { goto l4; }
		reg[0] = 16384 + 16384;
		if (reg[0] != 0) { goto l4; }
		reg[0] = 16384 + 16384;
		if (reg[0] != 0) { goto l4; }
		reg[0] = 6 * 9;
		reg[1] = (reg[0] == 42) ? 1 : 0;
		if (reg[1] != 0) { goto l5; }
		reg[1] = (reg[0] == 54) ? 1 : 0;
fn103:	
		if (reg[1] == 0) { goto l6; }
		reg[0] = 12345 * 32123;
		reg[1] = (reg[0] == 99) ? 1 : 0;
		if (reg[1] == 0) { goto l4; }
		reg[0] = 6 % 3;
		reg[1] = (reg[0] == 0) ? 1 : 0;
		if (reg[1] == 0) { goto l7; }
		reg[0] = 70 % 6;
		reg[1] = (reg[0] == 4) ? 1 : 0;
		if (reg[1] == 0) { goto l7; }
		reg[0] = 32766 * 15;
		reg[1] = (reg[0] == 32738) ? 1 : 0;
		if (reg[1] == 0) { goto l4; }
		goto l8;
		mem[15] = reg[0];
l8:		reg[0] = mem[843];
		reg[1] = (reg[0] == 20000) ? 1 : 0;
		if (reg[1] == 0) { goto l14; }
		reg[2] = 843 + 1;
		reg[0] = mem[reg[2]];
		reg[1] = (reg[0] == 10000) ? 1 : 0;
		if (reg[1] == 0) { goto l14; }
		reg[0] = 843;
		mem[reg[0]] = 30000;
		reg[2] = mem[reg[0]];
		reg[1] = (reg[2] == 30000) ? 1 : 0;
		if (reg[1] == 0) { goto l15; }
		fn0();
		reg[0] = mem[6068];
		reg[1] = (reg[0] == 11) ? 1 : 0;
		if (reg[1] == 0) { goto l14; }
		reg[2] = 6068 + 1;
		reg[0] = mem[reg[2]];
		reg[1] = (reg[0] == 116) ? 1 : 0;
		if (reg[1] == 0) { goto l14; }
		mem[reg[2]] = 84;
		reg[0] = mem[reg[2]];
		reg[1] = (reg[0] == 116) ? 1 : 0;
		if (reg[1] != 0) { goto l15; }
		reg[1] = (reg[0] == 84) ? 1 : 0;
		if (reg[1] == 0) { goto l15; }
		mem[937] = 21;
		mem[938] = 7;
		goto l16;
		std::cout << "978reg[0]";
l16:	std::cout << "wmem opwrite fail\n";
		exit();
l152:	reg[1] = 10 + 6080;
		reg[1] = reg[1] + 1;
		reg[2] = mem[6116];
		reg[2] = reg[2] + 6116;
		reg[0] = 6116;
		reg[0] = reg[0] + 1;
l30:	reg[3] = (reg[0] > reg[2]) ? 1 : 0;
		if (reg[3] != 0) { goto l29; }
		reg[4] = mem[reg[0]];
		mem[reg[1]] = reg[4];
		reg[0] = reg[0] + 1;
		reg[1] = reg[1] + 1;
		goto l30;
l29:	reg[0] = mem[6080];
		reg[1] = mem[6099];
		reg[0] = reg[0] + reg[1];
		reg[0] = reg[0] + 1;
		mem[6080] = reg[0];
		mem[6099] = 44;
		reg[0] = 6080;
		fn3();
		stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = 26851;
		reg[1] = 1531;
		reg[2] = 6971 + 686;
		fn4();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		goto l31;
l12:	std::cout << "no jt/jf\n";
		exit();
l19:	std::cout << "nonzero reg\n";
		exit();
l20:	std::cout << "no set op\n";
fn71:	
		exit();
l24:	std::cout << "no gt op\n";
		exit();
l23:	std::cout << "no stack\n";
		exit();
l25:	std::cout << "no bitwise and\n";
		exit();
l27:	std::cout << "no bitwise not\n";
		exit();
l14:	std::cout << "no rmem op\n";
		exit();
l15:	std::cout << "no wmem op\n";
		exit();
fn1:	goto l18;
		goto l2;
l3:		std::cout << "no call op\n";
		exit();
l4:		std::cout << "no modulo math during add or mult\n";
fn42:	
l219:	
		exit();
l5:		std::cout << "not hitchhiking\n";
		exit();
l6:		std::cout << "no mult op\n";
		exit();
l7:		std::cout << "no mod op\n";
		exit();
fn4:	stack.push(reg[0]);
		stack.push(reg[3]);
		stack.push(reg[4]);
		stack.push(reg[5]);
		stack.push(reg[6]);
		reg[6] = reg[0];
		reg[5] = reg[1];
		reg[4] = mem[reg[0]];
		reg[1] = 0;
l11:	reg[3] = 1 + reg[1];
		reg[0] = (reg[3] > reg[4]) ? 1 : 0;
		if (reg[0] != 0) { goto l10; }
		reg[3] = reg[3] + reg[6];
		reg[0] = mem[reg[3]];
		reg[5]();
		reg[1] = reg[1] + 1;
		if (reg[1] != 0) { goto l11; }
l10:	reg[6] = stack.pop();
		reg[5] = stack.pop();
		reg[4] = stack.pop();
		reg[3] = stack.pop();
		reg[0] = stack.pop();
		return;
fn3:	stack.push(reg[1]);
		reg[1] = 1528;
		fn4();
		reg[1] = stack.pop();
		return;
		return;
		stack.push(reg[1]);
		reg[1] = reg[2];
		fn2();
		std::cout << "reg[0]";
		reg[1] = stack.pop();
		return;
fn11:	stack.push(reg[1]);
		stack.push(reg[3]);
		reg[3] = mem[reg[0]];
		if (reg[3] == 0) { goto l46; }
		fn4();
		if (reg[1] != 0) { goto l46; }
		reg[0] = reg[2];
		goto l47;
l46:	reg[0] = 32767;
l47:	reg[3] = stack.pop();
		reg[1] = stack.pop();
		return;
fn7:	stack.push(reg[1]);
		stack.push(reg[2]);
		reg[2] = reg[1];
		reg[1] = 1605;
		fn11();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		return;
fn8:	stack.push(reg[1]);
		stack.push(reg[2]);
		reg[2] = reg[1];
		reg[1] = 1648;
		fn11();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		return;
		reg[0] = (reg[0] == reg[2]) ? 1 : 0;
		if (reg[0] == 0) { goto l70; }
		reg[2] = reg[1];
		reg[1] = 32767;
l70:	return;
		stack.push(reg[3]);
		reg[3] = reg[2] + 1;
		reg[3] = reg[3] + reg[1];
		reg[3] = mem[reg[3]];
		reg[3] = (reg[0] == reg[3]) ? 1 : 0;
l181:	if (reg[3] != 0) { goto l71; }
		reg[2] = reg[1];
		reg[1] = 32767;
l71:	reg[3] = stack.pop();
		return;
		stack.push(reg[1]);
		reg[1] = reg[2];
		fn15();
		reg[1] = stack.pop();
		if (reg[0] == 0) { goto l72; }
		reg[2] = reg[1];
		reg[1] = 32767;
l72:	return;
fn15:	stack.push(reg[1]);
		stack.push(reg[2]);
		stack.push(reg[3]);
		stack.push(reg[4]);
		reg[3] = mem[reg[0]];
		reg[4] = mem[reg[1]];
		reg[2] = (reg[3] == reg[4]) ? 1 : 0;
		if (reg[2] == 0) { goto l73; }
		reg[2] = reg[3] | reg[4];
		if (reg[2] == 0) { goto l74; }
		reg[2] = reg[1];
		reg[1] = 1619;
		fn4();
		if (reg[1] == 0) { goto l73; }
l74:	reg[0] = 1;
		goto l75;
l73:	reg[0] = 0;
l75:	reg[4] = stack.pop();
		reg[3] = stack.pop();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		return;
fn0:	stack.push(reg[0]);
		stack.push(reg[1]);
		reg[1] = 6068;
l28:	reg[0] = mem[reg[1]];
		stack.push(reg[1]);
		reg[1] = reg[1] * reg[1];
		fn2();
		reg[1] = 16724;
		fn2();
		reg[1] = stack.pop();
		mem[reg[1]] = reg[0];
		reg[1] = reg[1] + 1;
l287:	reg[0] = (30050 == reg[1]) ? 1 : 0;
		if (reg[0] == 0) { goto l28; }
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		return;
fn6:	stack.push(reg[0]);
		stack.push(reg[2]);
		stack.push(reg[3]);
		stack.push(reg[4]);
		stack.push(reg[5]);
		reg[2] = reg[1] + reg[0];
		reg[0] = reg[1];
		reg[5] = 0;
l44:	reg[0] = reg[0] + 1;
		reg[3] = (reg[0] > reg[2]) ? 1 : 0;
		if (reg[3] != 0) { goto l43; }
		std::cin.get(reg[4]);
		reg[3] = (reg[4] == 10) ? 1 : 0;
		if (reg[3] != 0) { goto l43; }
		mem[reg[0]] = reg[4];
		reg[5] = reg[5] + 1;
		goto l44;
l43:	mem[reg[1]] = reg[5];
l57:	reg[3] = (reg[4] == 10) ? 1 : 0;
		if (reg[3] != 0) { goto l56; }
		std::cin.get(reg[4]);
		goto l57;
l56:	reg[5] = stack.pop();
		reg[4] = stack.pop();
		reg[3] = stack.pop();
		reg[2] = stack.pop();
		reg[0] = stack.pop();
		return;
fn19:	stack.push(reg[3]);
		stack.push(reg[4]);
		stack.push(reg[5]);
		stack.push(reg[6]);
		reg[6] = 1;
l76:	reg[4] = reg[3] + reg[6];
		reg[4] = mem[reg[4]];
		reg[5] = 6125 + reg[6];
		mem[reg[5]] = reg[4];
		reg[6] = reg[6] + 1;
		reg[5] = mem[6125];
		reg[4] = (reg[6] > reg[5]) ? 1 : 0;
		if (reg[4] == 0) { goto l76; }
l79:	reg[3] = 0;
		reg[4] = 0;
l78:	reg[5] = mem[6125];
		reg[5] = reg[4] % reg[5];
l233:	
		reg[5] = reg[5] + 6125;
		reg[5] = reg[5] + 1;
		reg[6] = mem[reg[5]];
		reg[6] = reg[6] * 5249;
		reg[6] = reg[6] + 12345;
		mem[reg[5]] = reg[6];
		stack.push(reg[0]);
		stack.push(reg[1]);
		reg[1] = reg[6];
		fn2();
		reg[6] = reg[0];
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		reg[5] = mem[reg[1]];
		reg[6] = reg[6] % reg[5];
		reg[6] = reg[6] + 1;
		reg[5] = (reg[6] > reg[2]) ? 1 : 0;
		if (reg[5] != 0) { goto l77; }
		reg[3] = 1;
l77:	reg[6] = reg[6] + reg[1];
		reg[6] = mem[reg[6]];
		reg[4] = reg[4] + 1;
		reg[5] = reg[4] + 6129;
		mem[reg[5]] = reg[6];
		reg[5] = mem[6129];
		reg[5] = (reg[4] == reg[5]) ? 1 : 0;
		if (reg[5] == 0) { goto l78; }
		if (reg[3] == 0) { goto l79; }
		stack.push(reg[0]);
		reg[0] = 6129;
		fn3();
		reg[0] = stack.pop();
		reg[6] = stack.pop();
		reg[5] = stack.pop();
		reg[4] = stack.pop();
		reg[3] = stack.pop();
		return;
fn14:	stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		stack.push(reg[3]);
		stack.push(reg[4]);
		stack.push(reg[5]);
		reg[2] = 1;
		reg[5] = 0;
l65:	if (reg[0] == 0) { goto l59; }
		reg[4] = (reg[2] == 10000) ? 1 : 0;
		reg[3] = reg[0];
		if (reg[4] != 0) { goto l60; }
		reg[1] = reg[2] * 10;
		reg[3] = reg[0] % reg[1];
l60:	reg[4] = 0;
		reg[2] = reg[2] * 32767;
l62:	if (reg[3] == 0) { goto l61; }
		reg[4] = reg[4] + 1;
		reg[3] = reg[3] + reg[2];
		goto l62;
l61:	reg[2] = reg[2] * 32767;
		reg[3] = reg[4] * reg[2];
		reg[3] = reg[3] * 32767;
		reg[0] = reg[0] + reg[3];
		reg[4] = reg[4] + 48;
		reg[2] = reg[2] * 10;
l262:	
		reg[5] = reg[5] + 1;
		stack.push(reg[4]);
		goto l65;
l59:	if (reg[5] != 0) { goto l63; }
		std::cout << "0";
		goto l64;
l63:	if (reg[5] == 0) { goto l64; }
		reg[0] = stack.pop();
		std::cout << "reg[0]";
		reg[5] = reg[5] + 32767;
		goto l63;
l64:	reg[5] = stack.pop();
		reg[4] = stack.pop();
		reg[3] = stack.pop();
fn132:	reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		return;
fn2:	stack.push(reg[1]);
		stack.push(reg[2]);
		reg[2] = reg[0] & reg[1];
		reg[2] = ~reg[2];
		reg[0] = reg[0] | reg[1];
		reg[0] = reg[0] & reg[2];
		reg[2] = stack.pop();
		reg[1] = stack.pop();
l148:	return;
		reg[0] = reg[0] + reg[1];
		reg[1] = (reg[1] > reg[0]) ? 1 : 0;
		return;
		stack.push(reg[2]);
		reg[2] = (reg[1] > reg[0]) ? 1 : 0;
		reg[1] = reg[1] * 32767;
		reg[0] = reg[0] + reg[1];
		reg[1] = reg[2];
		reg[2] = stack.pop();
		return;
		if (reg[0] == 0) { goto l80; }
		if (reg[1] == 0) { goto l80; }
		stack.push(reg[2]);
		stack.push(reg[3]);
		reg[2] = (reg[1] > reg[0]) ? 1 : 0;
		if (reg[2] != 0) { goto l81; }
		reg[2] = reg[0];
		reg[0] = reg[1];
		reg[1] = reg[2];
l81:	reg[2] = reg[0];
		reg[0] = 0;
l83:	reg[0] = reg[0] + reg[1];
		reg[3] = (reg[1] > reg[0]) ? 1 : 0;
		if (reg[3] != 0) { goto l82; }
		reg[2] = reg[2] + 32767;
		if (reg[2] != 0) { goto l83; }
		reg[1] = 0;
		goto l84;
l82:	reg[1] = 1;
l84:	reg[3] = stack.pop();
		reg[2] = stack.pop();
		return;
l80:	reg[0] = 0;
		reg[1] = 0;
		return;
fn27:	stack.push(reg[1]);
		stack.push(reg[2]);
l86:	if (reg[1] == 0) { goto l85; }
		reg[1] = reg[1] + 32767;
		reg[2] = reg[0] & 16384;
		reg[0] = reg[0] * 2;
		if (reg[2] == 0) { goto l86; }
		reg[0] = reg[0] | 1;
		goto l86;
l85:	reg[2] = stack.pop();
		reg[1] = stack.pop();
		return;
fn26:	stack.push(reg[1]);
		reg[1] = (reg[0] > 14) ? 1 : 0;
		if (reg[1] != 0) { goto l87; }
		reg[1] = reg[0];
		reg[0] = 1;
l89:	if (reg[1] == 0) { goto l88; }
		reg[1] = reg[1] + 32767;
		reg[0] = reg[0] * 2;
		goto l89;
l87:	reg[0] = 32767;
l88:	reg[1] = stack.pop();
		return;
		goto l31;
		if (26900 == 0) { goto l90; }
		exit();
		exit();
		exit();
		exit();
		exit();
		6934 = 26928 * 26931;
		exit();
		exit();
		exit();
		exit();
		exit();
fn55:	
		exit();
		exit();
		exit();
		exit();
		exit();
		exit();
		exit();
		exit();
		if (10766 == 0) { goto l91; }
		exit();
		exit();
		exit();
		11288 = stack.pop();
		exit();
		0 = 11726;
		27143 = stack.pop();
		exit();
		27150 = 0 % 12199;
		fn16();
		exit();
		exit();
		exit();
		exit();
		exit();
		exit();
		exit();
		exit();
		14104 = 27205 * 27209;
		exit();
		exit();
		14765 = stack.pop();
fn57:	
		std::cin.get(16159);
		exit();
		fn17();
		stack.push(27317);
		exit();
		exit();
		exit();
		4720 = 18206 | 18220;
		exit();
		-
		18705 = stack.pop();
		18769 = 18780;
		return;
		18963 = 2478 + 5428;
		exit();
		exit();
		exit();
		exit();
		0 = 2 | reg[0];
l31:	stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		stack.push(reg[3]);
l45:	reg[1] = mem[2732];
		reg[0] = mem[2733];
		reg[0] = (reg[0] == reg[1]) ? 1 : 0;
		if (reg[0] != 0) { goto l32; }
		reg[0] = mem[2732];
		reg[0] = reg[0] + 4;
		reg[0] = mem[reg[0]];
		if (reg[0] == 0) { goto l32; }
		reg[0]();
l32:	reg[1] = mem[2732];
		reg[0] = mem[2733];
		reg[0] = (reg[0] == reg[1]) ? 1 : 0;
		if (reg[0] != 0) { goto l33; }
		reg[0] = 25974;
		mem[reg[0]] = 0;
		fn5();
l33:	mem[2733] = reg[1];
		stack.push(reg[0]);
l261:	
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = 27414;
		reg[1] = 1531;
		reg[2] = 4394 + 9784;
		fn4();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		reg[0] = 32;
		reg[1] = 25974;
		fn6();
		std::cout << "\n\n";
		reg[0] = 25974;
		reg[1] = 32;
		fn7();
		reg[1] = (reg[0] == 32767) ? 1 : 0;
		if (reg[1] == 0) { goto l34; }
		reg[0] = mem[25974];
l34:	reg[2] = reg[0];
		reg[1] = mem[25974];
		stack.push(reg[1]);
		mem[25974] = reg[2];
		reg[0] = 27398;
		reg[1] = 25974;
		fn8();
		reg[1] = stack.pop();
		mem[25974] = reg[1];
		reg[1] = (reg[0] == 32767) ? 1 : 0;
		if (reg[1] == 0) { goto l35; }
		reg[0] = 0;
		reg[2] = 0;
l35:	reg[1] = 27406 + 1;
		reg[1] = reg[1] + reg[0];
		reg[1] = mem[reg[1]];
		reg[3] = mem[25974];
		reg[3] = (reg[3] == reg[2]) ? 1 : 0;
		if (reg[3] != 0) { goto l36; }
		reg[0] = reg[2] * 32767;
		reg[3] = mem[25974];
		reg[3] = reg[0] + reg[3];
		if (reg[2] == 0) { goto l37; }
		reg[3] = reg[3] + 32767;
l37:	reg[3] = reg[3] % 32;
		reg[0] = 25974 + reg[2];
		if (reg[2] == 0) { goto l38; }
		reg[0] = reg[0] + 1;
l38:	mem[reg[0]] = reg[3];
		goto l39;
l36:	reg[0] = 25974;
		mem[reg[0]] = 0;
l39:	reg[1]();
		if (reg[1] != 0) { goto l45; }
		reg[3] = stack.pop();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		return;
fn5:	stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[1] = mem[reg[0]];
		if (reg[1] == 0) { goto l40; }
		fn9();
		if (reg[0] == 0) { goto l41; }
		stack.push(reg[0]);
		fn10();
		reg[1] = reg[0];
		reg[0] = stack.pop();
		if (reg[1] == 0) { goto l41; }
		reg[1] = reg[0] + 1;
		reg[0] = mem[reg[1]];
		fn3();
		std::cout << "\n";
		goto l42;
l41:	stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = 27432;
		reg[1] = 1531;
		reg[2] = 16241 + 1017;
		fn4();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		goto l42;
l40:	reg[0] = mem[2732];
		stack.push(reg[0]);
		std::cout << "== ";
		reg[0] = reg[0] + 0;
		reg[0] = mem[reg[0]];
		fn3();
		std::cout << " ==\n";
		reg[0] = stack.pop();
		stack.push(reg[0]);
		reg[0] = reg[0] + 1;
		reg[0] = mem[reg[0]];
		reg[1] = mem[reg[0]];
		reg[1] = (reg[1] == 2) ? 1 : 0;
		if (reg[1] == 0) { goto l48; }
		stack.push(reg[0]);
		reg[0] = 2680;
		fn10();
		reg[1] = reg[0];
		reg[0] = stack.pop();
		reg[0] = reg[0] + 1;
		reg[0] = reg[0] + reg[1];
l201:	
		reg[0] = mem[reg[0]];
l48:	fn3();
		std::cout << "\n";
		reg[0] = stack.pop();
		stack.push(reg[0]);
		fn12();
		if (reg[0] == 0) { goto l49; }
		stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = 27455;
		reg[1] = 1531;
		reg[2] = 442 + 13491;
		fn4();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		reg[2] = mem[2732];
		fn13();
l49:	reg[0] = stack.pop();
		stack.push(reg[0]);
		reg[0] = reg[0] + 2;
		reg[0] = mem[reg[0]];
		reg[0] = mem[reg[0]];
		reg[2] = (reg[0] == 1) ? 1 : 0;
		std::cout << "\nThere ";
		if (reg[2] != 0) { goto l50; }
		std::cout << "are";
		goto l51;
l50:	std::cout << "is ";
l51:	\
		fn14();
		std::cout << " exit";
		reg[2] = (reg[0] == 1) ? 1 : 0;
		if (reg[2] != 0) { goto l58; }
		std::cout << "s:\n";
l58:	\
		reg[0] = stack.pop();
		stack.push(reg[0]);
		reg[0] = reg[0] + 2;
		reg[0] = mem[reg[0]];
		reg[1] = 5814;
		fn4();
		reg[0] = stack.pop();
l42:	reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		return;
		stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[1] = reg[0];
		reg[0] = mem[2732];
		reg[0] = reg[0] + 2;
		reg[0] = mem[reg[0]];
		fn8();
		reg[2] = (reg[0] == 32767) ? 1 : 0;
		if (reg[2] != 0) { goto l92; }
		reg[2] = mem[2732];
		reg[2] = reg[2] + 3;
		reg[2] = mem[reg[2]];
		reg[2] = reg[2] + 1;
		reg[2] = reg[2] + reg[0];
		reg[2] = mem[reg[2]];
		mem[2732] = reg[2];
		mem[2733] = 0;
		goto l93;
l92:	stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = 27482;
		reg[1] = 1531;
		reg[2] = 8543 + 6288;
fn49:	
fn33:	fn4();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
l93:	reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		return;
		stack.push(reg[0]);
		stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = 27532;
		reg[1] = 1531;
		reg[2] = 17320 + 2236;
		fn4();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		reg[0] = stack.pop();
		return;
		stack.push(reg[0]);
fn96:	
		stack.push(reg[2]);
		stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = 28037;
		reg[1] = 1531;
		reg[2] = 256 + 31843;
l175:	
		fn4();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		reg[2] = 0;
		fn13();
		reg[2] = stack.pop();
		reg[0] = stack.pop();
		return;
		stack.push(reg[0]);
l230:	stack.push(reg[1]);
		stack.push(reg[2]);
		fn9();
		if (reg[0] == 0) { goto l94; }
		reg[1] = reg[0] + 2;
		reg[0] = mem[reg[1]];
		reg[2] = mem[2732];
		reg[2] = (reg[0] == reg[2]) ? 1 : 0;
		if (reg[2] == 0) { goto l94; }
		mem[reg[1]] = 0;
		stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = 28054;
		reg[1] = 1531;
		reg[2] = 26230 + 1797;
		fn4();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		goto l95;
l94:	stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = 28062;
		reg[1] = 1531;
		reg[2] = 1841 + 77;
		fn4();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
l95:	reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		return;
		stack.push(reg[0]);
		stack.push(reg[1]);
		fn9();
		if (reg[0] == 0) { goto l96; }
		reg[1] = reg[0] + 2;
		reg[0] = mem[reg[1]];
		if (reg[0] != 0) { goto l96; }
		reg[0] = mem[2732];
		mem[reg[1]] = reg[0];
		stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = 28090;
		reg[1] = 1531;
		reg[2] = 111 + 16;
		fn4();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		goto l97;
l96:	stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
l193:	reg[0] = 28100;
		reg[1] = 1531;
		reg[2] = 11541 + 1228;
		fn4();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
l97:	reg[1] = stack.pop();
		reg[0] = stack.pop();
		return;
		stack.push(reg[0]);
		stack.push(reg[1]);
		fn9();
		if (reg[0] == 0) { goto l98; }
		reg[1] = reg[0] + 2;
		reg[1] = mem[reg[1]];
		if (reg[1] != 0) { goto l98; }
		reg[1] = reg[0] + 3;
		reg[1] = mem[reg[1]];
		if (reg[1] == 0) { goto l99; }
		reg[1]();
		goto l100;
l98:	stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = 28135;
		reg[1] = 1531;
		reg[2] = 2742 + 449;
		fn4();
l280:	
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		goto l100;
l99:	stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = 28170;
		reg[1] = 1531;
		reg[2] = 283 + 30544;
		fn4();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
l100:	reg[1] = stack.pop();
		reg[0] = stack.pop();
		return;
		stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = 2680;
		fn10();
		if (reg[0] != 0) { goto l101; }
		reg[0] = 2676 + 2;
		mem[reg[0]] = 32767;
		reg[0] = 2680 + 2;
		mem[reg[0]] = 32767;
l157:	
		reg[0] = 2672 + 2;
		mem[reg[0]] = 32767;
		mem[2732] = 2648;
l101:	reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		return;
		stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = 28204;
		reg[1] = 1531;
		reg[2] = 818 + 8249;
		fn4();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		exit();
		exit();
fn18:	stack.push(reg[1]);
		reg[1] = mem[3726];
		reg[1] = reg[1] | reg[0];
		mem[3726] = reg[1];
		reg[1] = stack.pop();
		return;
		mem[3726] = 0;
		return;
		stack.push(reg[0]);
		reg[0] = 1;
		fn18();
		reg[0] = stack.pop();
		return;
		stack.push(reg[0]);
		reg[0] = 2;
		fn18();
		reg[0] = stack.pop();
		return;
		stack.push(reg[0]);
		reg[0] = 4;
		fn18();
		reg[0] = stack.pop();
		return;
		stack.push(reg[0]);
		reg[0] = 8;
		fn18();
		reg[0] = stack.pop();
		return;
		stack.push(reg[0]);
		reg[0] = 16;
		fn18();
		reg[0] = stack.pop();
		return;
		stack.push(reg[0]);
		reg[0] = 32;
		fn18();
		reg[0] = stack.pop();
		return;
		stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		stack.push(reg[3]);
		reg[0] = 64;
		fn18();
		stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = 28236;
		reg[1] = 1531;
		reg[2] = 1395 + 1791;
		fn4();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		reg[0] = mem[3726];
		reg[1] = 25866;
		reg[2] = 32767;
		reg[3] = 28299;
		fn19();
fn51:	stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = 28303;
		reg[1] = 1531;
		reg[2] = 6874 + 9876;
		fn4();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		mem[2732] = 2417;
		reg[3] = stack.pop();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		return;
		stack.push(reg[0]);
		stack.push(reg[1]);
		reg[0] = mem[2462];
fn80:	
		reg[1] = mem[27101];
		reg[0] = (reg[0] == reg[1]) ? 1 : 0;
		if (reg[0] != 0) { goto l102; }
		stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = 28347;
		reg[1] = 1531;
		reg[2] = 6321 + 10569;
		fn4();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		mem[2732] = 2457;
		mem[2733] = 2457;
l102:	reg[1] = stack.pop();
		reg[0] = stack.pop();
		return;
		exit();
		exit();
		exit();
		exit();
		exit();
		exit();
		stack.push(reg[0]);
		stack.push(reg[1]);
		reg[0] = 2;
		reg[1] = 0;
		fn20();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		return;
		stack.push(reg[0]);
		stack.push(reg[1]);
		reg[0] = 8;
		reg[1] = 1;
		fn21();
fn102:	reg[1] = stack.pop();
		reg[0] = stack.pop();
		return;
		stack.push(reg[0]);
		stack.push(reg[1]);
		reg[0] = 1;
		reg[1] = 2;
		fn20();
		reg[1] = stack.pop();
fn76:	
		reg[0] = stack.pop();
		return;
		stack.push(reg[0]);
		stack.push(reg[1]);
		reg[0] = 1;
		reg[1] = 3;
		fn21();
		fn22();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		return;
		stack.push(reg[0]);
		stack.push(reg[1]);
		reg[0] = 4;
		reg[1] = 4;
		fn21();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		return;
		stack.push(reg[0]);
		stack.push(reg[1]);
		reg[0] = 2;
		reg[1] = 5;
		fn20();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		return;
		stack.push(reg[0]);
		stack.push(reg[1]);
		reg[0] = 11;
		reg[1] = 6;
		fn21();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		return;
fn126:	stack.push(reg[0]);
		stack.push(reg[1]);
		reg[0] = 2;
		reg[1] = 7;
		fn20();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		return;
		stack.push(reg[0]);
		stack.push(reg[1]);
		reg[0] = 0;
		reg[1] = 8;
		fn20();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		return;
		stack.push(reg[0]);
		stack.push(reg[1]);
		reg[0] = 4;
		reg[1] = 9;
		fn21();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		return;
		stack.push(reg[0]);
l289:	stack.push(reg[1]);
		reg[0] = 1;
		reg[1] = 10;
		fn20();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
l218:	
		return;
		stack.push(reg[0]);
		stack.push(reg[1]);
		reg[0] = 18;
		reg[1] = 11;
		fn21();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		return;
		fn23();
		return;
		stack.push(reg[0]);
		stack.push(reg[1]);
		reg[0] = 1;
		reg[1] = 12;
		fn20();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		return;
		stack.push(reg[0]);
		stack.push(reg[1]);
		reg[0] = 9;
		reg[1] = 13;
		fn21();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		return;
		stack.push(reg[0]);
		stack.push(reg[1]);
		reg[0] = 2;
		reg[1] = 14;
		fn20();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		return;
fn20:	stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[2] = 2716 + 2;
		reg[2] = mem[reg[2]];
		if (reg[2] != 0) { goto l103; }
		fn24();
		mem[3951] = reg[0];
		reg[1] = reg[0] + 3945;
		reg[1] = mem[reg[1]];
		reg[0] = 26024;
		fn3();
		reg[0] = reg[1];
		fn3();
		reg[0] = 26088;
		fn3();
		reg[0] = reg[1];
l184:	
		fn3();
		std::cout << ".\n";
		std::cout << "\n";
l103:	reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		return;
fn21:	stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[2] = 2716 + 2;
		reg[2] = mem[reg[2]];
		if (reg[2] != 0) { goto l104; }
		fn24();
		stack.push(reg[0]);
		reg[0] = mem[3951];
		reg[1] = reg[0] + 3945;
		reg[1] = mem[reg[1]];
		reg[0] = 26122;
		fn3();
		reg[0] = reg[1];
		fn3();
		reg[0] = 26170;
		fn3();
		reg[0] = stack.pop();
		reg[1] = reg[0];
		reg[0] = mem[3952];
		reg[2] = mem[3951];
		reg[2] = reg[2] + 3948;
l188:	
		reg[2] = mem[reg[2]];
		reg[2]();
		if (reg[1] != 0) { goto l105; }
		reg[1] = mem[3952];
		mem[3952] = reg[0];
		reg[2] = (reg[0] > reg[1]) ? 1 : 0;
		if (reg[2] == 0) { goto l106; }
		stack.push(reg[0]);
fn45:	
		reg[0] = 26235;
		fn3();
		reg[0] = stack.pop();
l106:	reg[2] = (reg[1] > reg[0]) ? 1 : 0;
		if (reg[2] == 0) { goto l107; }
		stack.push(reg[0]);
		reg[0] = 26267;
		fn3();
		reg[0] = stack.pop();
l107:	std::cout << "\n\n";
		goto l104;
l105:	fn25();
		reg[0] = 26299;
		fn3();
l104:	reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		return;
fn24:	stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		stack.push(reg[3]);
		stack.push(reg[4]);
		stack.push(reg[5]);
		reg[5] = mem[3953];
		reg[3] = (reg[5] > 29999) ? 1 : 0;
		if (reg[3] != 0) { goto l108; }
		reg[5] = reg[5] + 1;
fn135:	
		mem[3953] = reg[5];
l108:	reg[3] = reg[0];
		reg[4] = reg[1];
		reg[0] = reg[5] + 2;
		fn26();
fn116:	reg[1] = mem[3954];
		reg[0] = reg[1] | reg[0];
		reg[1] = reg[4];
		fn27();
		mem[3954] = reg[0];
		reg[0] = 3955;
		reg[1] = reg[5] + 2;
		reg[2] = reg[4];
		fn28();
		reg[0] = 3956;
		reg[1] = reg[5] * reg[5];
		reg[2] = reg[4] * reg[4];
		fn28();
		reg[0] = 3957;
		reg[1] = 13;
		reg[2] = reg[3] * 9;
		reg[2] = reg[2] * reg[2];
		fn28();
		reg[5] = stack.pop();
		reg[4] = stack.pop();
		reg[3] = stack.pop();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		return;
fn28:	stack.push(reg[0]);
		reg[0] = mem[reg[0]];
		fn27();
		reg[1] = reg[2];
		fn2();
		reg[1] = stack.pop();
		mem[reg[1]] = reg[0];
		return;
fn22:	stack.push(reg[0]);
		reg[0] = 2716 + 2;
		reg[0] = mem[reg[0]];
		if (reg[0] != 0) { goto l109; }
		reg[0] = 26321;
		fn3();
		reg[0] = mem[3952];
		reg[0] = (reg[0] == 30) ? 1 : 0;
		if (reg[0] != 0) { goto l110; }
		reg[0] = 26354;
		fn3();
l112:	reg[0] = 26398;
		fn3();
		fn25();
		goto l109;
l110:	reg[0] = 26440;
		fn3();
		reg[0] = mem[3954];
		reg[0] = reg[0] + 1;
		if (reg[0] != 0) { goto l111; }
		reg[0] = 26484;
		fn3();
		goto l112;
l111:	reg[0] = 26584;
		fn3();
		reg[0] = 2716 + 2;
		mem[reg[0]] = 32767;
l109:	reg[0] = stack.pop();
		return;
fn23:	stack.push(reg[0]);
		reg[0] = 2716 + 2;
		reg[0] = mem[reg[0]];
fn88:	
		if (reg[0] != 0) { goto l113; }
		reg[0] = 26717;
		fn3();
		reg[0] = mem[2732];
fn62:	
		reg[0] = (reg[0] == 2623) ? 1 : 0;
		if (reg[0] != 0) { goto l114; }
		reg[0] = 26725;
		fn3();
		goto l115;
l114:	reg[0] = 26731;
		fn3();
l115:	reg[0] = 26737;
		fn3();
l245:	fn25();
l113:	reg[0] = stack.pop();
		return;
fn25:	stack.push(reg[0]);
		mem[3952] = 22;
		mem[3953] = 0;
		mem[3954] = 0;
		mem[3955] = 0;
		mem[3956] = 0;
		mem[3957] = 0;
		reg[0] = 2716 + 2;
		mem[reg[0]] = 2623;
		reg[0] = stack.pop();
		return;
		stack.push(reg[0]);
		reg[0] = 2716 + 2;
		reg[0] = mem[reg[0]];
		reg[0] = (reg[0] == 32767) ? 1 : 0;
		if (reg[0] != 0) { goto l116; }
		reg[0] = 26824;
		fn3();
		mem[2732] = 2578;
		mem[2733] = 2578;
l116:	reg[0] = stack.pop();
		return;
		stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		stack.push(reg[3]);
		stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = 28369;
		reg[1] = 1531;
		reg[2] = 1469 + 1978;
		fn4();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		reg[0] = 4242;
		reg[1] = 25866;
		reg[2] = 32767;
		reg[3] = 28397;
		fn19();
		stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = 28401;
		reg[1] = 1531;
		reg[2] = 14355 + 15467;
l296:	fn4();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		reg[3] = stack.pop();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		return;
		stack.push(reg[0]);
		reg[0] = 2672 + 2;
		reg[0] = mem[reg[0]];
		if (reg[0] != 0) { goto l117; }
		reg[0] = 2684 + 2;
		mem[reg[0]] = 32767;
		reg[0] = 2672 + 2;
		mem[reg[0]] = 32767;
		reg[0] = 2676 + 2;
		mem[reg[0]] = 0;
		stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = 28453;
		reg[1] = 1531;
		reg[2] = 1608 + 2591;
		fn4();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		goto l118;
l117:	stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = 28510;
		reg[1] = 1531;
		reg[2] = 99 + 17;
		fn4();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
l118:	reg[0] = stack.pop();
		return;
		stack.push(reg[0]);
		reg[0] = 2676 + 2;
		mem[reg[0]] = 32767;
		reg[0] = 2680 + 2;
		mem[reg[0]] = 0;
		stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = 28569;
		reg[1] = 1531;
		reg[2] = 11455 + 442;
		fn4();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		mem[2733] = 0;
		reg[0] = stack.pop();
		return;
		stack.push(reg[0]);
		reg[0] = 2676 + 2;
		mem[reg[0]] = 0;
		reg[0] = 2680 + 2;
		mem[reg[0]] = 32767;
		stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = 28595;
		reg[1] = 1531;
		reg[2] = 17821 + 5581;
		fn4();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		mem[2733] = 0;
		reg[0] = stack.pop();
		return;
fn29:	stack.push(reg[2]);
		stack.push(reg[3]);
		reg[2] = mem[2732];
		reg[2] = (reg[2] == 2457) ? 1 : 0;
		if (reg[2] != 0) { goto l119; }
		stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = 28621;
		reg[1] = 1531;
		reg[2] = 6787 + 497;
l228:	
		fn4();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		goto l120;
l119:	reg[2] = reg[0] + 2;
		mem[reg[2]] = 32767;
		reg[2] = mem[2462];
		reg[2] = reg[2] + 27095;
		reg[2] = reg[2] + 1;
		reg[2] = mem[reg[2]];
		reg[3] = 2457 + 1;
		reg[3] = mem[reg[3]];
		reg[3] = reg[3] + reg[2];
		reg[2] = reg[1] + 48;
		mem[reg[3]] = reg[2];
		reg[2] = mem[2462];
		reg[2] = reg[2] + 27101;
		reg[2] = reg[2] + 1;
		mem[reg[2]] = reg[1];
		stack.push(reg[0]);
		stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = 28664;
		reg[1] = 1531;
		reg[2] = 110 + 392;
		fn4();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		reg[0] = stack.pop();
		stack.push(reg[0]);
		reg[2] = reg[0] + 0;
		reg[0] = mem[reg[2]];
		fn3();
		reg[0] = stack.pop();
		stack.push(reg[0]);
		stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = 28679;
		reg[1] = 1531;
		reg[2] = 2616 + 2882;
		fn4();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		reg[0] = stack.pop();
		reg[2] = mem[2462];
		reg[2] = reg[2] + 1;
		mem[2462] = reg[2];
		reg[3] = mem[27101];
		reg[3] = (reg[2] == reg[3]) ? 1 : 0;
		if (reg[3] == 0) { goto l120; }
		reg[0] = 0;
		reg[1] = 27101 + 1;
		reg[1] = mem[reg[1]];
		reg[0] = reg[0] + reg[1];
		reg[1] = 27101 + 2;
		reg[1] = mem[reg[1]];
		reg[2] = 27101 + 3;
		reg[2] = mem[reg[2]];
		reg[2] = reg[2] * reg[2];
		reg[1] = reg[1] * reg[2];
		reg[0] = reg[0] + reg[1];
		reg[1] = 27101 + 4;
		reg[1] = mem[reg[1]];
		reg[2] = reg[1] * reg[1];
		reg[2] = reg[2] * reg[1];
		reg[0] = reg[0] + reg[2];
		reg[1] = 27101 + 5;
		reg[1] = mem[reg[1]];
		reg[1] = reg[1] * 32767;
		reg[0] = reg[0] + reg[1];
		reg[1] = (reg[0] == 399) ? 1 : 0;
		if (reg[1] != 0) { goto l121; }
		reg[2] = 2688 + 2;
l268:	
		mem[reg[2]] = 2457;
		reg[2] = 2692 + 2;
		mem[reg[2]] = 2457;
		reg[2] = 2696 + 2;
		mem[reg[2]] = 2457;
		reg[2] = 2700 + 2;
		mem[reg[2]] = 2457;
		reg[2] = 2704 + 2;
		mem[reg[2]] = 2457;
		mem[2462] = 0;
l251:	
		reg[0] = 27095;
		reg[1] = 5341;
		fn4();
		stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = 28710;
		reg[1] = 1531;
		reg[2] = 10078 + 4510;
		fn4();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		goto l120;
l121:	stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = 28777;
		reg[1] = 1531;
		reg[2] = 6088 + 2230;
		fn4();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
l120:	reg[3] = stack.pop();
		reg[2] = stack.pop();
		return;
		stack.push(reg[2]);
		reg[2] = 2457 + 1;
		reg[2] = mem[reg[2]];
		reg[2] = reg[2] + reg[0];
		mem[reg[2]] = 95;
		reg[2] = stack.pop();
		return;
		stack.push(reg[0]);
		stack.push(reg[1]);
		reg[0] = 2688;
		reg[1] = 2;
		fn29();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		return;
		stack.push(reg[0]);
		stack.push(reg[1]);
		reg[0] = 2692;
		reg[1] = 3;
		fn29();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		return;
		stack.push(reg[0]);
		stack.push(reg[1]);
		reg[0] = 2696;
fn34:	
		reg[1] = 5;
		fn29();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		return;
		stack.push(reg[0]);
		stack.push(reg[1]);
		reg[0] = 2700;
		reg[1] = 7;
		fn29();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		return;
		stack.push(reg[0]);
		stack.push(reg[1]);
		reg[0] = 2704;
		reg[1] = 9;
		fn29();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		return;
		stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		if (reg[7] == 0) { goto l122; }
		stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = 28844;
		reg[1] = 1531;
		reg[2] = 5779 + 14174;
		fn4();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		-
		-
		-
		-
		-
		reg[0] = 4;
		reg[1] = 1;
		fn30();
		reg[1] = (reg[0] == 6) ? 1 : 0;
		if (reg[1] == 0) { goto l123; }
		stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = 29014;
		reg[1] = 1531;
		reg[2] = 6929 + 15196;
		fn4();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		reg[0] = reg[7];
		reg[1] = 25866;
		reg[2] = 32767;
		stack.push(reg[3]);
		reg[3] = 29241;
		fn19();
		reg[3] = stack.pop();
fn97:	
		stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = 29245;
		reg[1] = 1531;
		reg[2] = 23693 + 618;
		fn4();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		mem[2732] = 2498;
		mem[2733] = 0;
		reg[1] = 2708 + 2;
		mem[reg[1]] = 32767;
		goto l124;
l123:	stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = 29400;
		reg[1] = 1531;
		reg[2] = 3192 + 16378;
		fn4();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		goto l124;
l122:	stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = 29545;
		reg[1] = 1531;
		reg[2] = 4031 + 25407;
		fn4();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		reg[0] = 0;
		reg[2] = 1 + 27101;
l125:	reg[1] = mem[reg[2]];
		reg[0] = reg[0] + reg[1];
		reg[0] = reg[0] * 31660;
		fn2();
		reg[1] = mem[27101];
		reg[1] = reg[1] + 27101;
		reg[2] = reg[2] + 1;
		reg[1] = (reg[2] > reg[1]) ? 1 : 0;
		if (reg[1] == 0) { goto l125; }
		reg[1] = 25866;
		reg[2] = 32767;
		stack.push(reg[3]);
		reg[3] = 29663;
		fn19();
		reg[3] = stack.pop();
		stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = 29667;
l211:	
		reg[1] = 1531;
		reg[2] = 660 + 1631;
		fn4();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		mem[2732] = 2488;
		mem[2733] = 0;
		goto l124;
l124:	reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		return;
		stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		stack.push(reg[3]);
		stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = 29757;
		reg[1] = 1531;
		reg[2] = 17913 + 366;
		fn4();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		reg[0] = mem[3955];
		reg[1] = mem[3956];
		fn2();
		reg[1] = mem[3957];
		fn2();
		reg[1] = 25919;
		reg[2] = 4;
		stack.push(reg[3]);
		reg[3] = 29942;
		fn19();
l203:	
		reg[3] = stack.pop();
		stack.push(reg[0]);
		stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = 29946;
		reg[1] = 1531;
		reg[2] = 6687 + 9035;
		fn4();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		reg[3] = stack.pop();
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		return;
fn31:	std::cout << "- ";
		fn3();
		std::cout << "\n";
		return;
fn12:	stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = 27381;
		reg[1] = 5846;
		reg[2] = 0;
		fn4();
		reg[0] = reg[2];
		reg[2] = stack.pop();
		reg[1] = stack.pop();
		return;
		stack.push(reg[3]);
		stack.push(reg[4]);
		reg[3] = mem[2732];
		reg[4] = reg[0] + 2;
		reg[4] = mem[reg[4]];
		reg[3] = (reg[3] == reg[4]) ? 1 : 0;
		if (reg[3] == 0) { goto l126; }
		reg[2] = reg[2] + 1;
l126:	reg[4] = stack.pop();
		reg[3] = stack.pop();
		return;
fn13:	stack.push(reg[0]);
		stack.push(reg[1]);
		reg[0] = 27381;
		reg[1] = 5893;
		fn4();
		reg[1] = stack.pop();
		reg[0] = stack.pop();
		return;
		stack.push(reg[3]);
		reg[3] = reg[0] + 2;
		reg[3] = mem[reg[3]];
		reg[3] = (reg[2] == reg[3]) ? 1 : 0;
		if (reg[3] == 0) { goto l127; }
		reg[0] = reg[0] + 0;
		reg[0] = mem[reg[0]];
		fn31();
l127:	reg[3] = stack.pop();
		return;
fn9:	stack.push(reg[1]);
		stack.push(reg[2]);
		reg[2] = reg[0];
		reg[0] = 27381;
		reg[1] = 5964;
		fn11();
		reg[1] = (reg[0] == 32767) ? 1 : 0;
		if (reg[1] != 0) { goto l52; }
		reg[1] = 27381 + reg[0];
		reg[1] = reg[1] + 1;
		reg[0] = mem[reg[1]];
		goto l53;
l52:	reg[0] = 0;
l53:	reg[2] = stack.pop();
		reg[1] = stack.pop();
		return;
		stack.push(reg[1]);
		reg[1] = reg[2];
		reg[0] = reg[0] + 0;
		reg[0] = mem[reg[0]];
		fn15();
		reg[1] = stack.pop();
		if (reg[0] == 0) { goto l128; }
		reg[2] = reg[1];
		reg[1] = 32767;
l128:	return;
fn10:	stack.push(reg[1]);
		stack.push(reg[2]);
		reg[0] = reg[0] + 2;
		reg[0] = mem[reg[0]];
		if (reg[0] == 0) { goto l54; }
		reg[1] = mem[2732];
		reg[1] = (reg[0] == reg[1]) ? 1 : 0;
		if (reg[1] != 0) { goto l54; }
		reg[0] = 0;
		goto l55;
l54:	reg[0] = 1;
l55:	reg[2] = stack.pop();
		reg[1] = stack.pop();
		return;
fn30:	if (reg[0] != 0) { goto l129; }
		reg[0] = reg[1] + 1;
		return;
l129:	if (reg[1] != 0) { goto l130; }
		reg[0] = reg[0] + 32767;
		reg[1] = reg[7];
		fn30();
		return;
l130:	stack.push(reg[0]);
		reg[1] = reg[1] + 32767;
		fn30();
		reg[1] = reg[0];
		reg[0] = stack.pop();
		reg[0] = reg[0] + 32767;
		fn30();
		return;
		25529 = stack.pop();
		7552 = (19815 == 31473) ? 1 : 0;
l191:	
		mem[23531] = 2949;
		mem[31188] = 10545;
		26588 = 6057 & 18228;
		mem[4213] = 16468;
		16660 = (29029 > 8560) ? 1 : 0;
		std::cout << "16699";
		1701 = mem[14030];
		std::cin.get(30436);
		mem[18017] = 31099;
		23298 = 2618 * 15653;
		std::cin.get(25456);
		std::cin.get(29300);
		32689 = ~11999;
		22949 = (2861 == 15027) ? 1 : 0;
		fn32();
		fn33();
		-
		5084 = 17846;
		fn34();
		fn35();
fn60:	
		exit();
		24246 = 4310 & 17712;
fn87:	
		-
		-
		if (10709 == 0) { goto l131; }
		-
		20540 = 661;
		mem[13425] = 27004;
		exit();
		mem[6452] = 19057;
		exit();
fn65:	
		19105 = 32728 + 13152;
		-
		std::cin.get(26544);
		mem[1998] = 15269;
		8437 = 21614 % 2048;
		16326 = 29600 & 10036;
		mem[120] = 13717;
		14660 = 28013 | 8561;
		exit();
fn47:	
		26751 = 7197;
		return;
		stack.push(18598);
		27829 = (8993 == 22509) ? 1 : 0;
		std::cout << "16004";
		mem[4300] = 18343;
		return;
		21954 = 2212 + 16249;
l299:	
		-
		std::cin.get(29184);
		if (8872 == 0) { goto l132; }
		17901 = (31532 == 11960) ? 1 : 0;
l255:	
		18316 = (32119 == 12512) ? 1 : 0;
l221:	
		mem[7628] = 21476;
		15615 = mem[29253];
		27607 = 8608 + 22324;
		std::cin.get(24614);
		exit();
		13118 = stack.pop();
		mem[29024] = 10093;
		if (3193 != 0) { goto l133; }
		fn36();
		3759 = 17614 & 32048;
		-
		return;
		std::cout << "19127";
		23395 = (4141 > 18133) ? 1 : 0;
		mem[4192] = 18786;
		exit();
		23 = (14644 > 28274) ? 1 : 0;
		fn37();
		-
		6103 = 20384 + 1848;
l192:	
		if (28930 != 0) { goto l134; }
		18757 = (369 == 14707) ? 1 : 0;
		exit();
		29593 = (11235 > 25188) ? 1 : 0;
		13476 = (28458 == 10170) ? 1 : 0;
		26356 = mem[8469];
		mem[28710] = 10459;
		mem[32356] = 14694;
		exit();
		18740 = (105 == 15185) ? 1 : 0;
		629 = stack.pop();
		mem[19432] = 1377;
		12781 = (27436 == 8892) ? 1 : 0;
		17365 = (32229 > 14199) ? 1 : 0;
		std::cin.get(8231);
		mem[14194] = 29041;
		8054 = (22884 == 4924) ? 1 : 0;
		22289 = stack.pop();
		if (16037 == 0) { goto l135; }
		-
		if (5040 == 0) { goto l136; }
		-
		667 = 16248 + 30779;
		22982 = 4768 & 20326;
		std::cin.get(20596);
		mem[27750] = 10613;
l216:	std::cout << "7957";
		return;
		22907 = 4713 & 20293;
		mem[9854] = 25417;
		464 = 15021 % 30224;
		10912 = stack.pop();
		-
		-
		std::cout << "29060";
		22815 = 5409 & 20785;
		if (8571 == 0) { goto l137; }
		4580 = stack.pop();
		std::cout << "8383";
		7856 = ~23874;
		stack.push(1472);
		stack.push(6468);
		4867 = (20030 == 3365) ? 1 : 0;
		15418 = 31525 | 13949;
		-
		mem[7756] = 24036;
		if (740 == 0) { goto l138; }
		-
fn53:	
l295:	
		fn38();
		-
		if (7106 == 0) { goto l139; }
		29557 = (12645 > 27868) ? 1 : 0;
fn111:	
		if (24692 != 0) { goto l140; }
		21831 = 4973 | 20861;
		goto l141;
fn35:	
		12666 = 28529 & 11615;
		10661 = 26589 | 9699;
		if (28328 == 0) { goto l142; }
		25505 = 8671 % 24158;
		std::cin.get(5801);
		1250 = stack.pop();
		14365 = 30337 & 14128;
		7029 = (22583 > 5845) ? 1 : 0;
		mem[4152] = 20172;
		2898 = 18528 | 2356;
		exit();
		fn39();
		14336 = (31034 > 13902) ? 1 : 0;
fn91:	
		-
		-
		mem[5622] = 21857;
		-
		-
l140:	
		return;
		mem[1018] = 17305;
		std::cin.get(16435);
		-
l271:	
		16692 = stack.pop();
l144:	
		18093 = 1737;
		-
		return;
		mem[2791] = 19837;
fn109:	
		14885 = (32065 == 15406) ? 1 : 0;
		18017 = (2403 == 18528) ? 1 : 0;
		4713 = 21789;
		if (16289 != 0) { goto l143; }
		-
		29663 = stack.pop();
		goto l144;
		fn40();
		-
		mem[5953] = 22957;
		if (7914 == 0) { goto l145; }
		-
		exit();
		29420 = ~14188;
		if (2448 == 0) { goto l146; }
fn92:	
		mem[20596] = 4805;
		9652 = 26268 | 11235;
		return;
		2725 = 20431 + 4987;
		if (10212 == 0) { goto l147; }
		return;
		mem[39] = 17794;
		6481 = 23927 | 8561;
		24942 = (9568 == 26896) ? 1 : 0;
		goto l148;
		stack.push(30390);
		7084 = 24489 + 8789;
		fn41();
		if (3760 == 0) { goto l149; }
		2936 = (20012 > 4804) ? 1 : 0;
		12341 = (29894 > 15331) ? 1 : 0;
		25372 = (9761 == 28004) ? 1 : 0;
l235:	
		mem[22565] = 7957;
		std::cin.get(23159);
fn95:	
		fn42();
		goto l150;
		7426 = (25384 == 10596) ? 1 : 0;
l270:	
		29042 = 14117 * 32081;
		stack.push(11385);
		28345 = (14124 > 32210) ? 1 : 0;
		2210 = (20797 == 6054) ? 1 : 0;
		fn43();
		mem[4212] = 22213;
		if (28672 != 0) { goto l151; }
		if (15076 == 0) { goto l152; }
		30640 = ~15572;
		mem[19945] = 5501;
		27553 = (13089 == 30973) ? 1 : 0;
		fn44();
		std::cin.get(7882);
		return;
		fn45();
		14609 = (376 == 18784) ? 1 : 0;
		mem[22877] = 8613;
		mem[20579] = 6161;
		if (29827 == 0) { goto l153; }
		27575 = ~13260;
l272:	
		18161 = 4422 | 22567;
		10066 = 28272 | 14688;
		4642 = 23857 + 9341;
		24496 = ~9889;
		mem[31172] = 17322;
		-
fn127:	
l269:	
		mem[27604] = 13794;
		1303 = (20264 == 6502) ? 1 : 0;
		11583 = (30496 == 16756) ? 1 : 0;
		std::cin.get(29794);
		32438 = 18646 & 5424;
l190:	
fn120:	
		stack.push(22670);
		25343 = mem[12098];
		14807 = 672 & 20282;
		31597 = (17450 > 3781) ? 1 : 0;
		20596 = 6854;
		4934 = 23648 | 10611;
		exit();
		2092 = (21808 == 7732) ? 1 : 0;
		fn46();
		mem[14429] = 1445;
		mem[17968] = 4952;
		if (9890 == 0) { goto l154; }
		std::cout << "18336";
l297:	
		22840 = 9528;
		8551 = 27941 & 14673;
		20904 = 7580 | 27106;
		22244 = (8924 > 29043) ? 1 : 0;
		mem[7921] = 28028;
		26253 = (13681 == 421) ? 1 : 0;
		std::cout << "32501";
		26069 = 12477;
l164:	
		19296 = (5677 > 25301) ? 1 : 0;
		13059 = (32313 == 19812) ? 1 : 0;
		fn47();
		stack.push(17078);
		goto l155;
		std::cout << "12215";
		fn48();
		fn49();
		if (31682 == 0) { goto l156; }
		24632 = (12240 > 32232) ? 1 : 0;
		13668 = 877 | 20849;
		-
		25354 = (12596 == 32625) ? 1 : 0;
		12004 = (31954 > 19813) ? 1 : 0;
		18092 = (5933 == 26031) ? 1 : 0;
		6904 = 27484 * 14391;
		4564 = 24293 & 12157;
		4156 = 24240;
		exit();
		mem[10009] = 29731;
		12346 = 289 + 20085;
		std::cin.get(10309);
		mem[25689] = 13740;
		goto l157;
		if (6884 == 0) { goto l158; }
		fn50();
		if (10180 == 0) { goto l159; }
		8546 = 29034 | 16763;
		if (24835 == 0) { goto l160; }
		-
		16692 = 4460;
		421 = 20881 | 8700;
fn125:	
		1706 = 22234 & 10613;
		if (2985 == 0) { goto l161; }
		exit();
		std::cin.get(24356);
		19867 = 7389 | 28602;
		25387 = 12834 % 1309;
		15837 = (3245 > 24091) ? 1 : 0;
		stack.push(29361);
		32704 = 20186 + 8277;
		-
		mem[20933] = 9125;
		17584 = ~5719;
		stack.push(21392);
l242:	
		21791 = 10042 | 31031;
		20849 = 9062;
		mem[1072] = 22090;
fn114:	
l134:	
		24235 = mem[12495];
		-
		if (29622 == 0) { goto l162; }
		21237 = mem[10070];
		exit();
fn74:	
		exit();
		fn51();
		17408 = stack.pop();
		26032 = 13970 | 2992;
		22133 = stack.pop();
		mem[26590] = 15271;
		if (32710 == 0) { goto l163; }
l185:	
		mem[38] = 21968;
		18719 = 7482;
		3345 = stack.pop();
		fn52();
		19332 = (8162 > 29284) ? 1 : 0;
		7821 = stack.pop();
		5589 = (26853 > 16227) ? 1 : 0;
		if (21317 != 0) { goto l164; }
		goto l165;
fn110:	
		-
		1020 = 22974 + 12140;
l172:	
		stack.push(24636);
		29053 = 18291;
fn115:	
		if (3766 == 0) { goto l166; }
		-
		fn53();
		2709 = 25447 + 14369;
		mem[28791] = 18811;
		30493 = 19555 * 9572;
		std::cin.get(10279);
		14715 = stack.pop();
		std::cin.get(7806);
fn32:	
		fn54();
		mem[15844] = 5498;
		13713 = stack.pop();
		-
		870 = (23338 > 12511) ? 1 : 0;
		-
		fn55();
		375 = (22890 == 12610) ? 1 : 0;
		24972 = 14744 | 4593;
fn133:	
		exit();
		stack.push(26278);
		11180 = 972 * 23108;
		exit();
		fn56();
		9904 = (339 == 22561) ? 1 : 0;
		28115 = 17568 & 7988;
		1860 = 24101 * 14695;
		exit();
		-
		18801 = 8229 % 31569;
		std::cin.get(16996);
		8107 = 30349 + 20563;
		return;
l142:	
		9497 = 32547 | 22819;
		4467 = 27429 % 17753;
		5240 = 28242;
		std::cout << "3402";
		16032 = 6348 & 30053;
		5047 = mem[27964];
		24329 = 14445 + 5430;
		17824 = 7826 | 31742;
		10920 = 1949;
		1963 = (24792 == 15376) ? 1 : 0;
l291:	
		6429 = 29992 * 20836;
fn89:	
		std::cin.get(24291);
		-
		goto l167;
		24401 = 14955 | 6512;
		-
fn41:	
		fn57();
		exit();
		mem[2673] = 26974;
		28577 = 19085 % 10335;
		-
		exit();
		29539 = (20768 > 11459) ? 1 : 0;
		if (3349 == 0) { goto l168; }
		std::cout << "12657";
		20355 = (11769 > 2593) ? 1 : 0;
		-
		std::cin.get(30398);
		25745 = stack.pop();
		7008 = (30765 > 22229) ? 1 : 0;
		4156 = 28315;
		goto l169;
		mem[31072] = 22125;
		mem[5214] = 30113;
		exit();
l220:	
l256:	
		mem[9150] = 242;
		23212 = ~15183;
fn123:	
		std::cin.get(22455);
		17245 = (9009 > 144) ? 1 : 0;
		std::cin.get(16445);
		272 = stack.pop();
		277 = 24941 | 16695;
		exit();
		917 = (25580 > 16951) ? 1 : 0;
		std::cout << "27816";
fn84:	
		mem[29889] = 22443;
		return;
		-
		if (7582 == 0) { goto l170; }
l167:	
		15124 = 6765 % 32048;
		-
		2407 = 26720 % 19216;
		mem[21040] = 13641;
		23966 = (15586 > 7734) ? 1 : 0;
		if (27294 == 0) { goto l171; }
		fn58();
		std::cin.get(26891);
		mem[10933] = 3125;
		31639 = (23921 == 15584) ? 1 : 0;
		14647 = 7037 & 32041;
		fn59();
		mem[9264] = 1608;
		std::cin.get(13027);
		-
		if (18880 == 0) { goto l172; }
l160:	
		12037 = 4159 * 30052;
		13325 = (6417 == 31350) ? 1 : 0;
		goto l173;
l223:	
		mem[21861] = 13973;
		mem[10145] = 2243;
		if (2432 != 0) { goto l174; }
		mem[6082] = 31666;
		-
		std::cout << "5";
		return;
		32069 = stack.pop();
		exit();
		7085 = 32718 | 25169;
		22689 = stack.pop();
		exit();
		return;
		20144 = 13658 + 6194;
		2940 = (28192 > 21186) ? 1 : 0;
		fn7();
		24341 = mem[16913];
		mem[6704] = 329;
		return;
		mem[16362] = 9570;
		stack.push(21930);
		23888 = 17209 | 10540;
		29041 = 22379;
		27761 = 21065;
		20161 = (13518 > 7551) ? 1 : 0;
		7598 = 572 | 26804;
		mem[14018] = 8106;
		-
l231:	
fn122:	
		23399 = (16433 > 9941) ? 1 : 0;
		return;
		exit();
		mem[15920] = 10079;
		stack.push(15010);
		if (9611 != 0) { goto l175; }
		if (30967 == 0) { goto l176; }
		12612 = 6509 | 369;
		fn60();
		std::cin.get(4220);
		21393 = (15277 > 8759) ? 1 : 0;
		27620 = ~21442;
		-
		1784 = 29008 + 22644;
fn61:	
		26489 = 20086 | 14712;
		2846 = (29225 == 23985) ? 1 : 0;
		12088 = 5680 + 372;
		if (24133 != 0) { goto l177; }
		mem[25187] = 19741;
		4768 = stack.pop();
		mem[7153] = 1404;
		13192 = stack.pop();
		if (21312 != 0) { goto l178; }
		mem[8308] = 3043;
		mem[1860] = 29047;
		goto l179;
		4465 = stack.pop();
		fn61();
		1944 = (29164 > 23095) ? 1 : 0;
		stack.push(32433);
l202:	
		21430 = 15812 * 9796;
		if (4540 == 0) { goto l180; }
		26018 = 19970 & 14487;
fn52:	
		fn62();
		294 = 27194;
		goto l181;
		24964 = (19173 > 13857) ? 1 : 0;
		-
		if (4053 == 0) { goto l182; }
		61 = 28120;
		2428 = 30060 | 24947;
		14596 = 9581 | 4404;
l260:	
		if (22244 == 0) { goto l183; }
		std::cin.get(15265);
		mem[32489] = 28029;
		if (9616 == 0) { goto l184; }
		-
		stack.push(8228);
		stack.push(31232);
l215:	
		stack.push(10876);
		17059 = (12757 == 8036) ? 1 : 0;
		20421 = stack.pop();
		mem[1482] = 29601;
		19632 = 14935 + 10278;
		if (15298 == 0) { goto l185; }
		if (24692 != 0) { goto l186; }
		11522 = 6969 * 2348;
		mem[12640] = 8045;
		std::cin.get(31868);
l267:	
		11937 = 7325;
		-
l214:	
		4216 = (32405 > 28657) ? 1 : 0;
		11089 = 6249 | 2400;
		26399 = 21560 | 17699;
		fn63();
		20088 = 16216;
fn106:	
fn54:	
		26879 = (22592 == 18470) ? 1 : 0;
		4389 = (289 == 29053) ? 1 : 0;
		20805 = stack.pop();
		1764 = (30428 > 27006) ? 1 : 0;
		if (2992 == 0) { goto l187; }
		std::cin.get(7405);
		if (8234 == 0) { goto l188; }
		6003 = 1636 | 31074;
		exit();
		15656 = 11326 & 7999;
		fn64();
		exit();
		29304 = 25940;
		29352 = 26065 & 22320;
		fn65();
		stack.push(27530);
		stack.push(8245);
fn44:	mem[5395] = 1829;
		fn66();
		mem[10073] = 6572;
		12423 = 8896 + 5991;
		10709 = 6839 + 3955;
l151:	
		20596 = 17089;
		20252 = stack.pop();
		6502 = (2666 == 32581) ? 1 : 0;
		mem[19390] = 15602;
		mem[18370] = 15266;
		16337 = (13233 > 10036) ? 1 : 0;
		mem[116] = 30147;
		8478 = mem[5425];
		27917 = (24957 == 21878) ? 1 : 0;
		mem[15711] = 12715;
		goto l189;
		-
		23465 = (20431 == 16991) ? 1 : 0;
		-
		fn67();
		mem[20705] = 18347;
		3226 = 869 | 30621;
		17173 = 13933 | 11552;
		-
		exit();
		26015 = (22763 > 20068) ? 1 : 0;
		-
		return;
		-
fn56:	
		10355 = 8155 | 5396;
		7391 = 4750 + 2223;
		9561 = 7019 | 4404;
		32080 = (29482 == 26934) ? 1 : 0;
		3170 = 594;
fn94:	
		16276 = (13794 > 10795) ? 1 : 0;
l257:	
		-
		fn68();
		3269 = stack.pop();
		-
		400 = ~30369;
		std::cout << "8724";
		mem[4149] = 1734;
		if (11304 != 0) { goto l190; }
		309 = stack.pop();
		19231 = 16394 + 14694;
fn121:	
		-
		14308 = 11461 + 9297;
		std::cout << "5508";
		std::cin.get(22782);
		26917 = (24865 == 22831) ? 1 : 0;
		2315 = (378 > 31084) ? 1 : 0;
		return;
		mem[4854] = 3445;
		std::cin.get(29923);
		22205 = (20785 == 18933) ? 1 : 0;
		stack.push(6853);
		mem[31961] = 30636;
		std::cin.get(26339);
		-
		11715 = (9445 == 8053) ? 1 : 0;
l284:	
		return;
		exit();
		stack.push(8813);
		return;
fn43:	
		-
		return;
		fn69();
l153:	
		if (7246 != 0) { goto l191; }
		if (8251 != 0) { goto l192; }
		mem[30564] = 28980;
		25873 = 24383 + 22819;
		std::cin.get(5888);
l238:	
		24725 = 23236 + 22375;
		if (5032 == 0) { goto l193; }
		mem[201] = 32123;
l178:	
		31600 = (29738 > 28383) ? 1 : 0;
		mem[3637] = 2869;
		22836 = stack.pop();
		10922 = (10202 == 9008) ? 1 : 0;
		return;
		12768 = (11623 == 9962) ? 1 : 0;
l273:	
		fn70();
		9485 = (8561 == 7461) ? 1 : 0;
		mem[31716] = 30660;
		std::cin.get(7934);
		1477 = stack.pop();
fn128:	
		exit();
		6466 = mem[5124];
		3617 = (3376 > 2173) ? 1 : 0;
		29995 = (28728 == 28496) ? 1 : 0;
		26982 = (25696 == 25360) ? 1 : 0;
		if (19065 != 0) { goto l194; }
		mem[26609] = 25980;
		return;
		-
		21841 = 21285 | 20787;
		stack.push(13073);
		exit();
		mem[7267] = 6729;
		-
		890 = 421 | 32701;
		28388 = 27866 & 28002;
		-
l294:	
		return;
		12757 = (12005 > 12130) ? 1 : 0;
		exit();
l250:	
		mem[2156] = 2407;
		fn71();
		goto l195;
		return;
		std::cout << "21414";
		exit();
fn58:	
		fn72();
		16696 = 16688 + 16756;
		16754 = 16677 * 16708;
l253:	
		-
		if (22244 == 0) { goto l196; }
fn17:	
		if (24818 == 0) { goto l197; }
		if (28733 != 0) { goto l198; }
		30530 = 30314 | 31099;
		if (31491 == 0) { goto l199; }
		2356 = 2161 + 2904;
		stack.push(12962);
		16299 = mem[16066];
		fn73();
		std::cin.get(25843);
fn134:	
		exit();
		12610 = mem[13060];
		14113 = (14640 > 15229) ? 1 : 0;
		18731 = (19256 == 19792) ? 1 : 0;
		20838 = (21344 == 21776) ? 1 : 0;
		if (25721 != 0) { goto l200; }
l244:	
		mem[14577] = 15740;
fn108:	
		return;
		-
fn72:	
		25412 = 25709 | 26993;
		6523 = 6775 % 8004;
		std::cin.get(15178);
		stack.push(2737);
		-
		std::cout << "10212";
l138:	
		exit();
		fn74();
		14655 = (15648 == 16756) ? 1 : 0;
		-
		29098 = 30088 | 31229;
		if (2096 != 0) { goto l201; }
		stack.push(30390);
		28298 = stack.pop();
		goto l202;
l133:	
		mem[21094] = 22907;
		25348 = 26175 % 27947;
		stack.push(8773);
		mem[13913] = 15788;
		exit();
		fn75();
		stack.push(25257);
		fn76();
		-
		19358 = 20928;
l183:	
		return;
		mem[2916] = 4454;
		exit();
		11312 = 12894;
		mem[5347] = 7544;
		exit();
		if (4212 != 0) { goto l203; }
		fn77();
		14689 = (15977 == 18244) ? 1 : 0;
		21896 = 23186 | 25587;
fn50:	
fn68:	
		std::cout << "30640";
		14526 = 16447 + 18526;
		30684 = 32682 % 1915;
		893 = (2870 > 4240) ? 1 : 0;
		if (16435 != 0) { goto l204; }
		std::cin.get(6440);
		24009 = (25644 == 27748) ? 1 : 0;
		9904 = 11933;
		std::cin.get(27562);
		mem[748] = 3450;
fn39:	
		stack.push(9384);
		-
		mem[11517] = 14253;
		fn78();
		stack.push(3548);
		if (28731 != 0) { goto l205; }
		fn79();
		15941 = stack.pop();
		28069 = 29849 | 32767;
		mem[8820] = 11549;
		4788 = 7629 & 10104;
		std::cin.get(5004);
		if (21757 == 0) { goto l206; }
		9180 = 11702 & 14136;
		8245 = 11228;
		exit();
		exit();
		fn80();
		4454 = (7018 == 9541) ? 1 : 0;
		29816 = 32344;
l266:	
fn100:	
		-
		std::cin.get(21411);
		fn81();
		stack.push(14787);
		fn82();
		16130 = (18470 == 21802) ? 1 : 0;
l288:	
		fn83();
		28498 = 30796;
		if (27319 == 0) { goto l207; }
		-
fn105:	
		8586 = 11617 + 14071;
		mem[20442] = 23461;
l162:	
		28862 = (31765 == 2164) ? 1 : 0;
		31006 = 1322 & 4452;
		5393 = stack.pop();
		10880 = 14068 & 17722;
l222:	
		22187 = 25294;
		exit();
		32446 = mem[3349];
		stack.push(25282);
		fn84();
		stack.push(15928);
		-
		21892 = (24812 > 28198) ? 1 : 0;
		stack.push(17076);
l225:	
		mem[22512] = 25959;
		-
		if (24636 != 0) { goto l208; }
fn78:	
		20230 = 23829;
		12647 = (16165 == 19793) ? 1 : 0;
		27059 = 30607 | 1529;
l169:	
		11967 = stack.pop();
		std::cout << "9136";
		-
l155:	
		mem[4212] = 7891;
		10012 = (13411 == 17764) ? 1 : 0;
		return;
		2457 = (5886 > 9828) ? 1 : 0;
		std::cout << "27817";
		6832 = stack.pop();
		stack.push(931);
		mem[31708] = 2993;
		std::cin.get(10468);
		if (16419 != 0) { goto l209; }
		fn85();
		12613 = stack.pop();
		422 = 4488 | 8676;
		std::cin.get(24672);
		1712 = stack.pop();
		22625 = stack.pop();
		stack.push(31907);
		mem[1244] = 6065;
		std::cin.get(14052);
		28710 = (218 > 5108) ? 1 : 0;
		6992 = (10799 == 15670) ? 1 : 0;
		30283 = (2327 == 6246) ? 1 : 0;
l277:	
		32682 = mem[3725];
		mem[9893] = 14361;
		stack.push(8251);
fn112:	
		mem[8042] = 12666;
		stack.push(16151);
		-
		fn86();
		std::cin.get(21236);
		27081 = stack.pop();
l194:	
		27337 = stack.pop();
l177:	
		mem[3865] = 8249;
fn119:	
fn99:	
		fn87();
		if (19172 == 0) { goto l210; }
		-
		mem[8678] = 13691;
		22981 = 28006 + 32490;
l204:	
l156:	
		std::cin.get(39);
		18692 = 23870 * 29028;
		std::cin.get(19712);
		2386 = 7489 & 12721;
		13992 = mem[19144];
		mem[5797] = 11613;
		24214 = (30004 == 2538) ? 1 : 0;
		std::cout << "28405";
		-
		mem[16996] = 22836;
		if (773 != 0) { goto l211; }
		fn88();
		31349 = 4433;
l146:	
l247:	
		std::cout << "26500";
		mem[15813] = 21413;
		31920 = ~4631;
		stack.push(11202);
		13158 = (18720 > 23764) ? 1 : 0;
		15618 = 21295 * 27001;
		5432 = 11068 + 16679;
		goto l212;
		goto l213;
		32657 = (5615 > 10795) ? 1 : 0;
fn130:	
		17380 = ~22991;
		4789 = (11053 == 16830) ? 1 : 0;
		16852 = stack.pop();
		if (3108 != 0) { goto l190; }
		std::cout << "8192";
		mem[31835] = 5541;
		if (7807 != 0) { goto l214; }
		stack.push(31415);
		-
		23487 = (29477 == 2227) ? 1 : 0;
		-
		22467 = (28645 == 1910) ? 1 : 0;
		18797 = (24877 == 31022) ? 1 : 0;
		28770 = 2130;
fn83:	
		stack.push(26282);
l213:	24669 = (30953 == 4878) ? 1 : 0;
l274:	
		mem[7797] = 14694;
		27412 = 568 * 7463;
		fn89();
		21160 = 28110 & 1840;
		-
		if (8118 == 0) { goto l215; }
		-
		if (900 == 0) { goto l216; }
		exit();
		9489 = 16185 | 22884;
		stack.push(30486);
l141:	
		26576 = 492 + 6734;
fn129:	
		std::cout << "5047";
l283:	
		17123 = 24341 + 30773;
		6597 = 12982 & 20337;
		mem[3168] = 10621;
		stack.push(24344);
l136:	
		stack.push(10934);
		1953 = ~8392;
fn48:	
		-
l171:	
		6425 = 13606 + 20769;
		std::cin.get(1349);
		mem[14384] = 21589;
		goto l167;
		24401 = 31350 | 6452;
		fn90();
		mem[15941] = 23997;
		mem[2660] = 10580;
		673 = 8651 + 16249;
		-
		return;
		-
		fn91();
		std::cin.get(24608);
		3408 = 11055;
		10657 = 18324 | 26103;
		if (14493 != 0) { goto l217; }
		25572 = (449 == 7765) ? 1 : 0;
		std::cin.get(9413);
		mem[7897] = 16300;
		goto l218;
		mem[26731] = 2427;
		if (25644 != 0) { goto l219; }
		31028 = 5745 + 14168;
		11896 = 20253;
		23216 = 31700 & 7039;
		-
		-
		exit();
l186:	
		std::cin.get(11717);
		2296 = 10320 + 18548;
		mem[8548] = 16743;
		fn92();
		16753 = 24869 | 323;
		fn93();
fn117:	
		mem[10999] = 19825;
		11428 = (20278 > 28600) ? 1 : 0;
		12949 = stack.pop();
l286:	
l276:	
		28721 = 4295;
fn82:	
		fn94();
		26129 = stack.pop();
		std::cin.get(21092);
		12983 = (21917 == 30581) ? 1 : 0;
		16356 = (24257 == 85) ? 1 : 0;
		std::cout << "15242";
		8308 = 17372;
		fn59();
		mem[14168] = 22967;
		fn95();
		mem[19151] = 28598;
		std::cin.get(13045);
		15229 = (23595 > 32400) ? 1 : 0;
l292:	
		std::cout << "20533";
l234:	
		9055 = 17507 | 26932;
fn66:	
		-
fn59:	
		if (2720 == 0) { goto l220; }
		-
		stack.push(8121);
		-
		16629 = 25670 + 2080;
l209:	
		fn96();
		exit();
fn79:	
fn64:	
		if (30375 == 0) { goto l221; }
		std::cin.get(7095);
		std::cin.get(20213);
		mem[12903] = 22897;
		goto l222;
		524 = (10619 == 19563) ? 1 : 0;
		6773 = (16723 > 25783) ? 1 : 0;
		17872 = (26842 > 3628) ? 1 : 0;
		std::cout << "4011";
		mem[32743] = 9585;
		fn97();
		if (3036 == 0) { goto l223; }
		808 = (10536 == 20280) ? 1 : 0;
		mem[29048] = 5985;
		mem[25433] = 2469;
fn90:	
		if (20196 == 0) { goto l224; }
		945 = ~10689;
		std::cin.get(3821);
		fn98();
		if (8663 == 0) { goto l225; }
		23326 = 79 % 9977;
		exit();
		31561 = 8298 | 18785;
		15400 = stack.pop();
fn36:	
		14714 = 24101 & 1873;
		if (15998 != 0) { goto l226; }
l163:	
		15011 = stack.pop();
		-
		-
		-
		if (14292 == 0) { goto l227; }
		16445 = 27098;
		20740 = 31013 & 8489;
		exit();
		mem[31044] = 8624;
		9956 = 20178 + 31072;
		if (27553 != 0) { goto l228; }
		mem[3289] = 14252;
		if (19921 == 0) { goto l229; }
		11120 = (21024 > 31428) ? 1 : 0;
		26438 = 3684 | 14712;
		mem[2837] = 12909;
		fn99();
		if (25136 != 0) { goto l230; }
		4769 = ~15821;
		-
		24548 = (1753 == 12376) ? 1 : 0;
		-
		std::cout << "29578";
		25560 = ~3492;
		return;
		fn100();
		fn101();
		14757 = 25502 | 3556;
		std::cin.get(13412);
		-
l149:	
		31191 = (8877 == 20320) ? 1 : 0;
		mem[20535] = 31425;
		21342 = 31850 | 10526;
		32542 = (10274 == 21801) ? 1 : 0;
		11273 = (22896 > 549) ? 1 : 0;
		if (1657 != 0) { goto l231; }
		24978 = (2808 > 13872) ? 1 : 0;
		-
		12515 = ~23632;
		4057 = 15287 % 26489;
		25890 = 4401 + 15740;
		stack.push(29974);
		mem[9566] = 20909;
		22645 = 1105;
		if (22248 == 0) { goto l232; }
		std::cin.get(15287);
		28834 = (7984 == 19388) ? 1 : 0;
		std::cout << "1680";
		16223 = 27241 | 6512;
		5513 = (16610 > 28209) ? 1 : 0;
		17058 = 29075 % 7984;
		12193 = mem[23244];
		if (22968 != 0) { goto l233; }
		fn102();
l217:	
		11542 = 23405 * 2356;
		fn103();
fn77:	
fn131:	
		-
		-
		mem[20175] = 32673;
		7015 = (18474 > 30352) ? 1 : 0;
		mem[4213] = 16021;
		11101 = 22640 | 2407;
		fn104();
		31085 = (9765 == 22273) ? 1 : 0;
		18839 = (30434 > 9771) ? 1 : 0;
		6821 = 19411;
		6070 = 17602 + 29760;
		if (8624 != 0) { goto l234; }
		std::cin.get(7621);
		std::cin.get(16420);
		mem[4465] = 16763;
		return;
		16692 = (29032 == 8521) ? 1 : 0;
		exit();
		9181 = (21421 > 560) ? 1 : 0;
		1713 = mem[14041];
		goto l235;
		30453 = mem[10566];
		27509 = (6699 > 19156) ? 1 : 0;
		mem[18039] = 31101;
		exit();
		32135 = (11496 > 24164) ? 1 : 0;
		23021 = (2864 == 15029) ? 1 : 0;
		-
		mem[1214] = 13887;
		4962 = (17700 > 29893) ? 1 : 0;
		std::cin.get(8231);
		20832 = 811 & 13584;
		6529 = 19356 | 32243;
		if (17535 != 0) { goto l236; }
fn70:	
		24240 = 4253;
		-
		return;
		mem[2283] = 15713;
		return;
l196:	
		mem[20596] = 720;
		854 = 13418 | 26977;
		20244 = 109 % 13605;
fn46:	
		6517 = 19062 + 32579;
		26027 = 5775 | 19442;
		if (19127 == 0) { goto l237; }
		26529 = ~6337;
		return;
l132:	
		-
		15773 = stack.pop();
		16351 = ~29616;
l139:	
		mem[116] = 13779;
		if (2309 != 0) { goto l238; }
		std::cout << "11530";
		26751 = 7240;
		13985 = (27293 > 8561) ? 1 : 0;
		-
		13225 = 26224 | 6835;
		21954 = 2231 & 16237;
		17181 = 30248 & 11575;
		10599 = 23589 + 4953;
		if (14975 != 0) { goto l239; }
		mem[20404] = 705;
l131:	
		fn105();
		if (18304 != 0) { goto l240; }
		15615 = 29205 + 10296;
		std::cin.get(24614);
		9540 = 23405 | 4465;
		exit();
		15117 = (29041 == 10021) ? 1 : 0;
		17313 = ~31176;
l275:	
		-
		14101 = 27757 | 9515;
		75 = stack.pop();
		10100 = mem[23628];
fn73:	
		6559 = (20223 > 1574) ? 1 : 0;
		fn106();
		21957 = stack.pop();
l161:	
		mem[13273] = 27564;
		6097 = 20406;
		if (16438 != 0) { goto l241; }
		fn107();
		fn108();
		std::cin.get(18698);
		return;
		29648 = (11209 > 25131) ? 1 : 0;
		23176 = stack.pop();
		return;
		if (28705 != 0) { goto l242; }
		25197 = stack.pop();
		18811 = stack.pop();
		mem[29278] = 11691;
fn98:	
		23413 = 4700;
		8164 = mem[22233];
		stack.push(12719);
		mem[18885] = 929;
		17369 = 32162;
		fn109();
		32089 = 14193 | 28986;
		22839 = (4989 == 19748) ? 1 : 0;
		16047 = 30877;
fn37:	
		fn110();
		exit();
		700 = (16149 == 30752) ? 1 : 0;
		22997 = 4768 % 20344;
		fn82();
l137:	
		return;
		7172 = (22904 > 4713) ? 1 : 0;
		17838 = 32392 | 15331;
		mem[9830] = 25436;
		-
		2020 = ~16600;
		mem[24526] = 7077;
		std::cout << "4272";
		28629 = (11237 > 26491) ? 1 : 0;
		26961 = 9591 | 24955;
		mem[22814] = 5417;
		8551 = 23845;
		std::cin.get(30818);
l206:	
		-
		std::cout << "31716";
		exit();
		std::cout << "30336";
		fn111();
		-
		1503 = stack.pop();
		8007 = 23149 | 6513;
		4944 = 19972 % 3428;
		26932 = (9335 == 25439) ? 1 : 0;
		740 = 16860 % 32560;
		exit();
		-
		7132 = 22972;
		24636 = 8156;
		13585 = 29468 + 12596;
		27415 = (10724 == 26546) ? 1 : 0;
		28321 = 11471 + 28025;
		-
		-
		5869 = stack.pop();
		std::cout << "1161";
l258:	
		if (12688 == 0) { goto l243; }
l285:	
		1795 = (17517 == 1324) ? 1 : 0;
		exit();
		mem[13325] = 30092;
		mem[5611] = 21883;
		-
		fn112();
l210:	
l227:	
		mem[370] = 16753;
		if (296 != 0) { goto l244; }
		mem[324] = 16816;
l150:	
		4805 = stack.pop();
		23952 = 7339 % 24443;
l176:	
		27514 = (10784 > 27349) ? 1 : 0;
		fn113();
		exit();
		goto l245;
		exit();
		mem[27493] = 10901;
		if (12962 == 0) { goto l246; }
		-
		16289 = mem[32397];
l145:	
		7062 = (23866 > 7333) ? 1 : 0;
		mem[8674] = 25514;
		exit();
		13596 = stack.pop();
		2925 = 19716 | 3853;
		22925 = 7133 | 24035;
fn85:	30623 = (14819 > 31265) ? 1 : 0;
		13217 = 30175 + 13840;
		7615 = 24144 % 8338;
		mem[10948] = 28592;
		-
		if (2448 == 0) { goto l247; }
		26608 = stack.pop();
		25425 = 9329 | 26932;
		goto l248;
		exit();
		std::cout << "13872";
		2736 = 20378 & 4963;
		10212 = 26841 + 11352;
		32672 = (17190 > 1208) ? 1 : 0;
		190 = 17429 + 2164;
		stack.push(8130);
		std::cin.get(54);
		6495 = 23915 | 8500;
		fn114();
		24954 = (9569 == 26896) ? 1 : 0;
		goto l249;
		return;
		mem[26340] = 11623;
		if (30888 != 0) { goto l250; }
		std::cin.get(12322);
		25271 = 10653 & 28529;
		7344 = (25178 == 10298) ? 1 : 0;
		19344 = stack.pop();
		mem[24692] = 10198;
fn81:	
		exit();
		stack.push(25406);
		fn115();
fn124:	
		11384 = 29276;
		24468 = (9698 > 27179) ? 1 : 0;
		if (20200 == 0) { goto l251; }
		-
		return;
		28397 = stack.pop();
		15557 = 1382 + 19440;
		if (10980 == 0) { goto l252; }
		25041 = 9910;
		mem[4130] = 22228;
		10799 = (29493 > 14453) ? 1 : 0;
		return;
		stack.push(15076);
		-
l197:	-
		27629 = stack.pop();
		std::cout << "17805";
		892 = (19242 > 4293) ? 1 : 0;
		goto l253;
		mem[14698] = 353;
		fn116();
		std::cin.get(12598);
		-
		fn117();
		27626 = ~13187;
		fn118();
		if (10424 != 0) { goto l254; }
		stack.push(19072);
		3541 = (21733 > 8057) ? 1 : 0;
		10079 = 28272 | 14688;
		4645 = (23841 == 9341) ? 1 : 0;
		fn119();
		8828 = mem[27992];
		23348 = 8786 & 28057;
		24481 = mem[9869];
fn118:	
		-
		std::cin.get(21395);
l166:	
		8308 = (27612 > 13796) ? 1 : 0;
		stack.push(1305);
		std::cout << "2874";
		18182 = (4479 > 23332) ? 1 : 0;
		28492 = (14758 == 926) ? 1 : 0;
		return;
		1218 = 20784 * 7095;
		fn120();
		mem[17457] = 3793;
		if (20539 != 0) { goto l255; }
		mem[23557] = 10516;
		std::cin.get(8709);
		mem[4925] = 23748;
		std::cout << "31657";
		stack.push(22434);
		mem[4034] = 23466;
		stack.push(20418);
		9013 = (28523 > 14480) ? 1 : 0;
		8563 = 27941 % 14623;
		-
		fn121();
		701 = (20785 == 7669) ? 1 : 0;
		-
		-
		-
l200:	
		32598 = 19040 | 6513;
		fn122();
		12861 = (305 == 19573) ? 1 : 0;
		6656 = stack.pop();
		7600 = 26770 | 14256;
		27184 = 14677;
		fn123();
		957 = (20785 == 7413) ? 1 : 0;
		28557 = stack.pop();
		3249 = ~23103;
		std::cin.get(31711);
		if (24696 != 0) { goto l256; }
		mem[875] = 20833;
		if (27922 == 0) { goto l257; }
		fn124();
fn101:	
		mem[6985] = 27051;
		11956 = 31954 & 19810;
		std::cout << "6885";
fn104:	
		4496 = stack.pop();
l226:	
		27408 = 14417 | 2428;
		exit();
		fn125();
		if (3685 != 0) { goto l258; }
		2512 = (22212 > 9776) ? 1 : 0;
		6071 = 25741 | 13407;
		mem[15307] = 2984;
		return;
		-
		10196 = stack.pop();
		20777 = 8560 | 28979;
		return;
		exit();
		25491 = (13281 > 557) ? 1 : 0;
l189:	
		-
		return;
		-
		15825 = (3243 > 24432) ? 1 : 0;
		if (8270 != 0) { goto l259; }
		mem[28710] = 16611;
		mem[9847] = 31099;
		6941 = 27233 * 15716;
		goto l260;
		exit();
		15225 = 2768 | 24023;
		14782 = (2916 == 23213) ? 1 : 0;
		11473 = ~32344;
		17649 = 5696 % 26680;
		stack.push(21442);
l147:	
		29308 = 23788 & 3726;
		exit();
		return;
		32252 = (12264 > 6643) ? 1 : 0;
l90:	
		19511 = stack.pop();
		mem[24274] = 10540;
		8575 = 31471 + 19596;
		-
		23007 = 9066 | 30176;
		28957 = mem[17329];
		return;
l279:	
		if (30763 == 0) { goto l261; }
		18655 = 7092;
		if (9500 == 0) { goto l262; }
		if (4189 != 0) { goto l263; }
		std::cin.get(665);
		goto l264;
		std::cin.get(2850);
		std::cin.get(30043);
		-
l91:	
		2794 = (30052 == 16606) ? 1 : 0;
l263:	
fn16:	
		goto l265;
		-
		6739 = (25758 > 258) ? 1 : 0;
		15431 = 2702;
		std::cout << "28212";
		fn126();
		3933 = ~8948;
		if (30800 != 0) { goto l266; }
		25734 = 30950 + 17494;
		fn127();
		exit();
		26803 = 924 & 21442;
		6605 = 25536 & 13781;
		goto l267;
l168:	
		exit();
		stack.push(20214);
		3056 = 9409 + 23909;
		26911 = ~4231;
		goto l268;
		26397 = 19488;
		if (24468 == 0) { goto l269; }
		goto l270;
l293:	
		19696 = 5213 & 32056;
		std::cin.get(13790);
		11969 = 30323 + 24485;
l158:	
		28130 = 13569 & 699;
		mem[22160] = 16071;
		if (14213 != 0) { goto l271; }
		31927 = 17633;
		goto l272;
		exit();
		exit();
		exit();
		32055 = (17696 == 11718) ? 1 : 0;
		5985 = (32761 > 18312) ? 1 : 0;
		exit();
		goto l273;
		8578 = (2108 > 20713) ? 1 : 0;
		goto l274;
		stack.push(20036);
		return;
		23650 = (10108 > 3593) ? 1 : 0;
		std::cin.get(27158);
		if (28672 != 0) { goto l275; }
		1305 = 27663 % 14114;
		mem[10082] = 3601;
		exit();
		mem[30459] = 22964;
		stack.push(2689);
		-
		if (3792 != 0) { goto l276; }
		26022 = 20437 | 4409;
		20557 = 15303 & 7571;
		goto l277;
		stack.push(15643);
		if (5418 != 0) { goto l278; }
		std::cin.get(793);
		stack.push(9998);
l282:	
		std::cin.get(30170);
		-
		mem[20086] = 4240;
		exit();
		13249 = (5177 > 32424) ? 1 : 0;
		stack.push(17848);
		stack.push(26081);
		goto l279;
l174:	
		6145 = 25269 + 18407;
		exit();
		20082 = (4977 > 29705) ? 1 : 0;
		31507 = mem[23575];
		stack.push(20244);
		15911 = 24989;
		2357 = ~11502;
		fn128();
		8091 = (29373 > 22118) ? 1 : 0;
		25512 = 16230;
		if (21424 != 0) { goto l280; }
		stack.push(18152);
		std::cout << "15428";
		19280 = (26527 == 974) ? 1 : 0;
		if (12090 != 0) { goto l281; }
		10277 = 3159 + 20962;
		goto l282;
		if (26971 != 0) { goto l283; }
		15683 = 347 * 25956;
		fn129();
		-
		18219 = 25531 | 3982;
		29339 = 7818;
		5851 = 20879 & 29204;
l264:	
		12939 = 20341 * 27596;
		9130 = ~1746;
		26954 = 19911 % 4301;
		23062 = 16016 + 7660;
		if (22823 != 0) { goto l284; }
		exit();
		if (30830 != 0) { goto l285; }
		std::cout << "278";
		goto l286;
		23605 = 8968 & 1591;
		fn130();
l265:	
		fn131();
		if (10715 != 0) { goto l287; }
		5101 = 28907 * 19995;
l243:	
		std::cin.get(32216);
		std::cout << "14245";
		3041 = ~27044;
		32694 = 23975 | 8963;
		fn132();
		23644 = 8608 * 1978;
		9474 = mem[23422];
		2318 = (12035 > 19818) ? 1 : 0;
		31499 = 6461 % 16243;
		2680 = 10241 * 20014;
		1343 = (15278 == 22940) ? 1 : 0;
l248:	
		13713 = ~27625;
		goto l288;
		std::cout << "16349";
		14730 = 5687 | 29899;
		if (13250 != 0) { goto l289; }
		7772 = (31961 > 24044) ? 1 : 0;
		stack.push(13160);
		2312 = (26232 > 18282) ? 1 : 0;
		mem[25181] = 17227;
		336 = 24148;
		32068 = 23121 + 15201;
		22040 = mem[14120];
		exit();
		3899 = 27843 | 19949;
		3549 = (11972 == 20036) ? 1 : 0;
		5958 = stack.pop();
		29057 = 20852 & 12493;
l208:	
		22613 = 14793 % 6611;
		22849 = 16021 + 7812;
		mem[31849] = 23621;
		goto l290;
		stack.push(6084);
		4293 = stack.pop();
		mem[12669] = 1202;
		21409 = 29516 + 4921;
		10380 = (18517 > 27600) ? 1 : 0;
		11433 = 19569 % 28505;
		exit();
		if (2703 != 0) { goto l291; }
		12670 = 20490;
		22786 = mem[30846];
		8521 = 16452 % 25415;
		std::cout << "26487";
		21352 = 29186 * 5418;
l259:	
		16587 = 25547 % 1348;
		18396 = (26263 == 2130) ? 1 : 0;
		11977 = (20960 > 29465) ? 1 : 0;
		15041 = 7031 | 30161;
		exit();
		19374 = ~9664;
l198:	
		2895 = 25992 | 18319;
		31988 = 24261 % 14486;
		std::cin.get(31602);
		return;
		stack.push(12843);
fn107:	
		14279 = 4483 & 29506;
		18646 = 10903;
		exit();
		7340 = (32321 == 22579) ? 1 : 0;
		-
		23205 = (13783 == 6007) ? 1 : 0;
l239:	
		19017 = 10419 * 13796;
		exit();
l212:	
		fn133();
		mem[31270] = 18426;
		stack.push(24824);
		25329 = 20047 + 11065;
		fn134();
fn69:	
		25791 = (16604 == 11296) ? 1 : 0;
		fn135();
		std::cout << "19000";
		30482 = 21286 % 16189;
		exit();
		mem[1882] = 25413;
		4936 = 32553 * 23343;
		if (29976 == 0) { goto l292; }
		11484 = stack.pop();
		28180 = 19189 + 22189;
		-
		std::cout << "13560";
		goto l293;
		return;
		17730 = 8386 | 15316;
		29268 = stack.pop();
		7975 = 31411 + 21908;
		std::cout << "24042";
		std::cout << "k";
		13355 = 3793;
		std::cout << "5501";
		31619 = 22160 & 12610;
		26335 = 16787 % 23667;
		30447 = 20816;
		std::cout << "10237";
		stack.push(7331);
		8258 = 8093 & 30147;
		18753 = 9346 + 654;
		return;
fn86:	
		if (16715 != 0) { goto l294; }
		6914 = 28976 + 28543;
		8296 = 7791 | 29846;
		-
l252:	
		31440 = 20614 | 18770;
		7629 = ~31617;
		20948 = stack.pop();
		31408 = 21442 & 18535;
		if (8611 != 0) { goto l295; }
		6578 = stack.pop();
		17430 = 8859 & 7117;
l281:	
l254:	
		std::cin.get(13522);
		stack.push(6087);
		27138 = ~29396;
		std::cout << "16841";
		9163 = 17419 % 27870;
		goto l296;
l154:	
		-
		20179 = (22170 == 32579) ? 1 : 0;
		23830 = ~14623;
		29025 = ~26970;
		stack.push(20773);
		if (19907 == 0) { goto l297; }
		exit();
		3068 = 25438 & 23355;
		stack.push(1410);
		21672 = (15820 > 8824) ? 1 : 0;
		return;
		exit();
		32349 = 26402 + 19511;
		19210 = stack.pop();
		23608 = ~17701;
		return;
		if (6104 == 0) { goto l298; }
		29715 = stack.pop();
		4482 = 1713;
l229:	
		exit();
l224:	
		std::cout << "5360";
		return;
		std::cout << "11142";
		21127 = stack.pop();
		31309 = 25509;
		std::cout << "19617";
		19490 = 17687 | 4613;
		15940 = ~20569;
		if (115 != 0) { goto l299; }
		22578 = 29222 & 1244;
		-
		8303 = 15100 & 19592;
		return;
l290:	
		23215 = 28018 % 1990;
		1215 = ~8139;
		stack.push(17728);
