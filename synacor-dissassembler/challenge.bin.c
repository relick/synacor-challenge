0:			-
1:			-
2:			std::cout << "Welcome to the Synacor Challenge!\n";
70:			std::cout << "Please record your progress by putting codes like\n";
117:	fn93:	
170:			std::cout << "this one into the challenge website: MvQNsZixuLOX\n";
270:			std::cout << "\nExecuting self-test...\n";
318:			std::cout << "\n";
320:			goto l0;
322:			std::cout << "jmp fails\n";
342:			exit();
343:			-
344:			-
345:			-
346:			-
347:	l0:		-
348:			-
349:			-
350:			-
351:			-
352:			goto l1;
354:			goto l66;
356:			goto l67;
358:	l1:		goto l9;
360:			goto l68;
362:			goto l69;
364:			-
365:			-
366:			-
367:			-
368:	l66:	std::cout << "jmp lands -2\n";
394:			exit();
395:			-
396:			-
397:	l67:	std::cout << "jmp lands -1\n";
423:			exit();
424:	l68:	-
425:			-
426:			std::cout << "jmp lands +1\n";
452:			exit();
453:	l69:	-
454:			-
455:			-
456:			-
457:			std::cout << "jmp lands +2\n";
483:			exit();
484:	l9:		if (0 != 0) { goto l12; }
487:			if (1 == 0) { goto l12; }
490:			if (1 != 0) { goto l13; }
493:			goto l12;
495:	l13:	if (0 == 0) { goto l17; }
498:			goto l12;
500:	l17:	if (reg[0] != 0) { goto l19; }
503:			if (reg[1] != 0) { goto l19; }
506:			if (reg[2] != 0) { goto l19; }
509:			if (reg[3] != 0) { goto l19; }
512:			if (reg[4] != 0) { goto l19; }
515:			if (reg[5] != 0) { goto l19; }
518:			if (reg[6] != 0) { goto l19; }
521:			if (reg[7] != 0) { goto l19; }
524:			reg[0] = 1;
527:			if (reg[0] == 0) { goto l20; }
530:			reg[0] = 0;
533:			if (reg[0] != 0) { goto l20; }
536:			reg[0] = 1 + 1;
540:			if (reg[0] != 0) { goto l21; }
543:			std::cout << "no add op\n";
563:			exit();
564:	l21:	reg[1] = (reg[0] == 2) ? 1 : 0;
568:			if (reg[1] != 0) { goto l22; }
571:			std::cout << "no eq op\n";
589:			exit();
590:	l22:	stack.push(reg[0]);
592:			stack.push(reg[1]);
594:			reg[0] = stack.pop();
596:			reg[1] = stack.pop();
598:			reg[2] = (reg[1] == 2) ? 1 : 0;
602:			if (reg[2] == 0) { goto l23; }
605:			reg[2] = (reg[0] == 1) ? 1 : 0;
609:			if (reg[2] == 0) { goto l23; }
612:			reg[2] = (reg[1] > reg[0]) ? 1 : 0;
616:			if (reg[2] == 0) { goto l24; }
619:			reg[2] = (reg[0] > reg[1]) ? 1 : 0;
623:			if (reg[2] != 0) { goto l24; }
626:			reg[2] = (42 > 42) ? 1 : 0;
630:			if (reg[2] != 0) { goto l24; }
633:			reg[0] = 28912 & 19626;
637:			reg[1] = (reg[0] == 16544) ? 1 : 0;
641:			if (reg[1] == 0) { goto l25; }
644:			reg[1] = 28912 | 19626;
648:			reg[0] = (reg[1] == 31994) ? 1 : 0;
652:			if (reg[0] != 0) { goto l26; }
655:			std::cout << "no bitwise or\n";
669:	l231:	\
683:			exit();
684:	l26:	reg[0] = ~0;
687:			reg[1] = (reg[0] == 32767) ? 1 : 0;
691:			if (reg[1] == 0) { goto l27; }
694:			reg[0] = ~21845;
697:			reg[1] = (reg[0] == 10922) ? 1 : 0;
701:			if (reg[1] == 0) { goto l27; }
704:			fn1();
706:			goto l3;
708:	l18:	reg[0] = stack.pop();
710:			reg[1] = (reg[0] == 708) ? 1 : 0;
714:			if (reg[1] != 0) { goto l3; }
717:			reg[1] = (reg[0] == 706) ? 1 : 0;
721:			if (reg[1] == 0) { goto l3; }
724:			reg[0] = 1287;
727:			reg[0]();
729:			goto l3;
731:	l2:		reg[0] = stack.pop();
733:			reg[1] = (reg[0] == 731) ? 1 : 0;
737:			if (reg[1] != 0) { goto l3; }
740:			reg[1] = (reg[0] == 729) ? 1 : 0;
744:			if (reg[1] == 0) { goto l3; }
747:			reg[0] = 32767 + 32767;
751:			reg[1] = (reg[0] == 32766) ? 1 : 0;
755:			if (reg[1] == 0) { goto l4; }
758:			reg[1] = (32766 == reg[0]) ? 1 : 0;
762:			if (reg[1] == 0) { goto l4; }
765:			reg[0] = 16384 + 16384;
769:			if (reg[0] != 0) { goto l4; }
772:			reg[0] = 16384 + 16384;
776:			if (reg[0] != 0) { goto l4; }
779:			reg[0] = 6 * 9;
783:			reg[1] = (reg[0] == 42) ? 1 : 0;
787:			if (reg[1] != 0) { goto l5; }
790:			reg[1] = (reg[0] == 54) ? 1 : 0;
791:	fn103:	
794:			if (reg[1] == 0) { goto l6; }
797:			reg[0] = 12345 * 32123;
801:			reg[1] = (reg[0] == 99) ? 1 : 0;
805:			if (reg[1] == 0) { goto l4; }
808:			reg[0] = 6 % 3;
812:			reg[1] = (reg[0] == 0) ? 1 : 0;
816:			if (reg[1] == 0) { goto l7; }
819:			reg[0] = 70 % 6;
823:			reg[1] = (reg[0] == 4) ? 1 : 0;
827:			if (reg[1] == 0) { goto l7; }
830:			reg[0] = 32766 * 15;
834:			reg[1] = (reg[0] == 32738) ? 1 : 0;
838:			if (reg[1] == 0) { goto l4; }
841:			goto l8;
844:			mem[15] = reg[0];
845:	l8:		reg[0] = mem[843];
848:			reg[1] = (reg[0] == 20000) ? 1 : 0;
852:			if (reg[1] == 0) { goto l14; }
855:			reg[2] = 843 + 1;
859:			reg[0] = mem[reg[2]];
862:			reg[1] = (reg[0] == 10000) ? 1 : 0;
866:			if (reg[1] == 0) { goto l14; }
869:			reg[0] = 843;
872:			mem[reg[0]] = 30000;
875:			reg[2] = mem[reg[0]];
878:			reg[1] = (reg[2] == 30000) ? 1 : 0;
882:			if (reg[1] == 0) { goto l15; }
885:			fn0();
887:			reg[0] = mem[6068];
890:			reg[1] = (reg[0] == 11) ? 1 : 0;
894:			if (reg[1] == 0) { goto l14; }
897:			reg[2] = 6068 + 1;
901:			reg[0] = mem[reg[2]];
904:			reg[1] = (reg[0] == 116) ? 1 : 0;
908:			if (reg[1] == 0) { goto l14; }
911:			mem[reg[2]] = 84;
914:			reg[0] = mem[reg[2]];
917:			reg[1] = (reg[0] == 116) ? 1 : 0;
921:			if (reg[1] != 0) { goto l15; }
924:			reg[1] = (reg[0] == 84) ? 1 : 0;
928:			if (reg[1] == 0) { goto l15; }
931:			mem[937] = 21;
934:			mem[938] = 7;
937:			goto l16;
939:			std::cout << "978reg[0]";
941:	l16:	std::cout << "wmem opwrite fail\n";
977:			exit();
978:	l151:	reg[1] = 10 + 6080;
982:			reg[1] = reg[1] + 1;
986:			reg[2] = mem[6116];
989:			reg[2] = reg[2] + 6116;
993:			reg[0] = 6116;
996:			reg[0] = reg[0] + 1;
1000:	l30:	reg[3] = (reg[0] > reg[2]) ? 1 : 0;
1004:			if (reg[3] != 0) { goto l29; }
1007:			reg[4] = mem[reg[0]];
1010:			mem[reg[1]] = reg[4];
1013:			reg[0] = reg[0] + 1;
1017:			reg[1] = reg[1] + 1;
1021:			goto l30;
1023:	l29:	reg[0] = mem[6080];
1026:			reg[1] = mem[6099];
1029:			reg[0] = reg[0] + reg[1];
1033:			reg[0] = reg[0] + 1;
1037:			mem[6080] = reg[0];
1040:			mem[6099] = 44;
1043:			reg[0] = 6080;
1046:			fn3();
1048:			stack.push(reg[0]);
1050:			stack.push(reg[1]);
1052:			stack.push(reg[2]);
1054:			reg[0] = 26851;
1057:			reg[1] = 1531;
1060:			reg[2] = 6971 + 686;
1064:			fn4();
1066:			reg[2] = stack.pop();
1068:			reg[1] = stack.pop();
1070:			reg[0] = stack.pop();
1072:			goto l31;
1074:	l12:	std::cout << "no jt/jf\n";
1092:			exit();
1093:	l19:	std::cout << "nonzero reg\n";
1117:			exit();
1118:	l20:	std::cout << "no set op\n";
1133:	fn71:	
1138:			exit();
1139:	l24:	std::cout << "no gt op\n";
1157:			exit();
1158:	l23:	std::cout << "no stack\n";
1176:			exit();
1177:	l25:	std::cout << "no bitwise and\n";
1207:			exit();
1208:	l27:	std::cout << "no bitwise not\n";
1238:			exit();
1239:	l14:	std::cout << "no rmem op\n";
1261:			exit();
1262:	l15:	std::cout << "no wmem op\n";
1284:			exit();
1285:	fn1:	goto l18;
1287:			goto l2;
1289:	l3:		std::cout << "no call op\n";
1311:			exit();
1312:	l4:		std::cout << "no modulo math during add or mult\n";
1329:	fn42:	
1341:	l218:	
1380:			exit();
1381:	l5:		std::cout << "not hitchhiking\n";
1413:			exit();
1414:	l6:		std::cout << "no mult op\n";
1436:			exit();
1437:	l7:		std::cout << "no mod op\n";
1457:			exit();
1458:	fn4:	stack.push(reg[0]);
1460:			stack.push(reg[3]);
1462:			stack.push(reg[4]);
1464:			stack.push(reg[5]);
1466:			stack.push(reg[6]);
1468:			reg[6] = reg[0];
1471:			reg[5] = reg[1];
1474:			reg[4] = mem[reg[0]];
1477:			reg[1] = 0;
1480:	l11:	reg[3] = 1 + reg[1];
1484:			reg[0] = (reg[3] > reg[4]) ? 1 : 0;
1488:			if (reg[0] != 0) { goto l10; }
1491:			reg[3] = reg[3] + reg[6];
1495:			reg[0] = mem[reg[3]];
1498:			reg[5]();
1500:			reg[1] = reg[1] + 1;
1504:			if (reg[1] != 0) { goto l11; }
1507:	l10:	reg[6] = stack.pop();
1509:			reg[5] = stack.pop();
1511:			reg[4] = stack.pop();
1513:			reg[3] = stack.pop();
1515:			reg[0] = stack.pop();
1517:			return;
1518:	fn3:	stack.push(reg[1]);
1520:			reg[1] = 1528;
1523:			fn4();
1525:			reg[1] = stack.pop();
1527:			return;
1530:			return;
1531:			stack.push(reg[1]);
1533:			reg[1] = reg[2];
1536:			fn2();
1538:			std::cout << "reg[0]";
1540:			reg[1] = stack.pop();
1542:			return;
1543:	fn11:	stack.push(reg[1]);
1545:			stack.push(reg[3]);
1547:			reg[3] = mem[reg[0]];
1550:			if (reg[3] == 0) { goto l46; }
1553:			fn4();
1555:			if (reg[1] != 0) { goto l46; }
1558:			reg[0] = reg[2];
1561:			goto l47;
1563:	l46:	reg[0] = 32767;
1566:	l47:	reg[3] = stack.pop();
1568:			reg[1] = stack.pop();
1570:			return;
1571:	fn7:	stack.push(reg[1]);
1573:			stack.push(reg[2]);
1575:			reg[2] = reg[1];
1578:			reg[1] = 1605;
1581:			fn11();
1583:			reg[2] = stack.pop();
1585:			reg[1] = stack.pop();
1587:			return;
1588:	fn8:	stack.push(reg[1]);
1590:			stack.push(reg[2]);
1592:			reg[2] = reg[1];
1595:			reg[1] = 1648;
1598:			fn11();
1600:			reg[2] = stack.pop();
1602:			reg[1] = stack.pop();
1604:			return;
1605:			reg[0] = (reg[0] == reg[2]) ? 1 : 0;
1609:			if (reg[0] == 0) { goto l70; }
1612:			reg[2] = reg[1];
1615:			reg[1] = 32767;
1618:	l70:	return;
1619:			stack.push(reg[3]);
1621:			reg[3] = reg[2] + 1;
1625:			reg[3] = reg[3] + reg[1];
1629:			reg[3] = mem[reg[3]];
1632:			reg[3] = (reg[0] == reg[3]) ? 1 : 0;
1636:	l180:	if (reg[3] != 0) { goto l71; }
1639:			reg[2] = reg[1];
1642:			reg[1] = 32767;
1645:	l71:	reg[3] = stack.pop();
1647:			return;
1648:			stack.push(reg[1]);
1650:			reg[1] = reg[2];
1653:			fn15();
1655:			reg[1] = stack.pop();
1657:			if (reg[0] == 0) { goto l72; }
1660:			reg[2] = reg[1];
1663:			reg[1] = 32767;
1666:	l72:	return;
1667:	fn15:	stack.push(reg[1]);
1669:			stack.push(reg[2]);
1671:			stack.push(reg[3]);
1673:			stack.push(reg[4]);
1675:			reg[3] = mem[reg[0]];
1678:			reg[4] = mem[reg[1]];
1681:			reg[2] = (reg[3] == reg[4]) ? 1 : 0;
1685:			if (reg[2] == 0) { goto l73; }
1688:			reg[2] = reg[3] | reg[4];
1692:			if (reg[2] == 0) { goto l74; }
1695:			reg[2] = reg[1];
1698:			reg[1] = 1619;
1701:			fn4();
1703:			if (reg[1] == 0) { goto l73; }
1706:	l74:	reg[0] = 1;
1709:			goto l75;
1711:	l73:	reg[0] = 0;
1714:	l75:	reg[4] = stack.pop();
1716:			reg[3] = stack.pop();
1718:			reg[2] = stack.pop();
1720:			reg[1] = stack.pop();
1722:			return;
1723:	fn0:	stack.push(reg[0]);
1725:			stack.push(reg[1]);
1727:			reg[1] = 6068;
1730:	l28:	reg[0] = mem[reg[1]];
1733:			stack.push(reg[1]);
1735:			reg[1] = reg[1] * reg[1];
1739:			fn2();
1741:			reg[1] = 16724;
1744:			fn2();
1746:			reg[1] = stack.pop();
1748:			mem[reg[1]] = reg[0];
1751:			reg[1] = reg[1] + 1;
1755:	l286:	reg[0] = (30050 == reg[1]) ? 1 : 0;
1759:			if (reg[0] == 0) { goto l28; }
1762:			reg[1] = stack.pop();
1764:			reg[0] = stack.pop();
1766:			return;
1767:	fn6:	stack.push(reg[0]);
1769:			stack.push(reg[2]);
1771:			stack.push(reg[3]);
1773:			stack.push(reg[4]);
1775:			stack.push(reg[5]);
1777:			reg[2] = reg[1] + reg[0];
1781:			reg[0] = reg[1];
1784:			reg[5] = 0;
1787:	l44:	reg[0] = reg[0] + 1;
1791:			reg[3] = (reg[0] > reg[2]) ? 1 : 0;
1795:			if (reg[3] != 0) { goto l43; }
1798:			std::cin.get(reg[4]);
1800:			reg[3] = (reg[4] == 10) ? 1 : 0;
1804:			if (reg[3] != 0) { goto l43; }
1807:			mem[reg[0]] = reg[4];
1810:			reg[5] = reg[5] + 1;
1814:			goto l44;
1816:	l43:	mem[reg[1]] = reg[5];
1819:	l57:	reg[3] = (reg[4] == 10) ? 1 : 0;
1823:			if (reg[3] != 0) { goto l56; }
1826:			std::cin.get(reg[4]);
1828:			goto l57;
1830:	l56:	reg[5] = stack.pop();
1832:			reg[4] = stack.pop();
1834:			reg[3] = stack.pop();
1836:			reg[2] = stack.pop();
1838:			reg[0] = stack.pop();
1840:			return;
1841:	fn19:	stack.push(reg[3]);
1843:			stack.push(reg[4]);
1845:			stack.push(reg[5]);
1847:			stack.push(reg[6]);
1849:			reg[6] = 1;
1852:	l76:	reg[4] = reg[3] + reg[6];
1856:			reg[4] = mem[reg[4]];
1859:			reg[5] = 6125 + reg[6];
1863:			mem[reg[5]] = reg[4];
1866:			reg[6] = reg[6] + 1;
1870:			reg[5] = mem[6125];
1873:			reg[4] = (reg[6] > reg[5]) ? 1 : 0;
1877:			if (reg[4] == 0) { goto l76; }
1880:	l79:	reg[3] = 0;
1883:			reg[4] = 0;
1886:	l78:	reg[5] = mem[6125];
1889:			reg[5] = reg[4] % reg[5];
1892:	l232:	
1893:			reg[5] = reg[5] + 6125;
1897:			reg[5] = reg[5] + 1;
1901:			reg[6] = mem[reg[5]];
1904:			reg[6] = reg[6] * 5249;
1908:			reg[6] = reg[6] + 12345;
1912:			mem[reg[5]] = reg[6];
1915:			stack.push(reg[0]);
1917:			stack.push(reg[1]);
1919:			reg[1] = reg[6];
1922:			fn2();
1924:			reg[6] = reg[0];
1927:			reg[1] = stack.pop();
1929:			reg[0] = stack.pop();
1931:			reg[5] = mem[reg[1]];
1934:			reg[6] = reg[6] % reg[5];
1938:			reg[6] = reg[6] + 1;
1942:			reg[5] = (reg[6] > reg[2]) ? 1 : 0;
1946:			if (reg[5] != 0) { goto l77; }
1949:			reg[3] = 1;
1952:	l77:	reg[6] = reg[6] + reg[1];
1956:			reg[6] = mem[reg[6]];
1959:			reg[4] = reg[4] + 1;
1963:			reg[5] = reg[4] + 6129;
1967:			mem[reg[5]] = reg[6];
1970:			reg[5] = mem[6129];
1973:			reg[5] = (reg[4] == reg[5]) ? 1 : 0;
1977:			if (reg[5] == 0) { goto l78; }
1980:			if (reg[3] == 0) { goto l79; }
1983:			stack.push(reg[0]);
1985:			reg[0] = 6129;
1988:			fn3();
1990:			reg[0] = stack.pop();
1992:			reg[6] = stack.pop();
1994:			reg[5] = stack.pop();
1996:			reg[4] = stack.pop();
1998:			reg[3] = stack.pop();
2000:			return;
2001:	fn14:	stack.push(reg[0]);
2003:			stack.push(reg[1]);
2005:			stack.push(reg[2]);
2007:			stack.push(reg[3]);
2009:			stack.push(reg[4]);
2011:			stack.push(reg[5]);
2013:			reg[2] = 1;
2016:			reg[5] = 0;
2019:	l65:	if (reg[0] == 0) { goto l59; }
2022:			reg[4] = (reg[2] == 10000) ? 1 : 0;
2026:			reg[3] = reg[0];
2029:			if (reg[4] != 0) { goto l60; }
2032:			reg[1] = reg[2] * 10;
2036:			reg[3] = reg[0] % reg[1];
2040:	l60:	reg[4] = 0;
2043:			reg[2] = reg[2] * 32767;
2047:	l62:	if (reg[3] == 0) { goto l61; }
2050:			reg[4] = reg[4] + 1;
2054:			reg[3] = reg[3] + reg[2];
2058:			goto l62;
2060:	l61:	reg[2] = reg[2] * 32767;
2064:			reg[3] = reg[4] * reg[2];
2068:			reg[3] = reg[3] * 32767;
2072:			reg[0] = reg[0] + reg[3];
2076:			reg[4] = reg[4] + 48;
2080:			reg[2] = reg[2] * 10;
2082:	l261:	
2084:			reg[5] = reg[5] + 1;
2088:			stack.push(reg[4]);
2090:			goto l65;
2092:	l59:	if (reg[5] != 0) { goto l63; }
2095:			std::cout << "0";
2097:			goto l64;
2099:	l63:	if (reg[5] == 0) { goto l64; }
2102:			reg[0] = stack.pop();
2104:			std::cout << "reg[0]";
2106:			reg[5] = reg[5] + 32767;
2110:			goto l63;
2112:	l64:	reg[5] = stack.pop();
2114:			reg[4] = stack.pop();
2116:			reg[3] = stack.pop();
2118:	fn132:	reg[2] = stack.pop();
2120:			reg[1] = stack.pop();
2122:			reg[0] = stack.pop();
2124:			return;
2125:	fn2:	stack.push(reg[1]);
2127:			stack.push(reg[2]);
2129:			reg[2] = reg[0] & reg[1];
2133:			reg[2] = ~reg[2];
2136:			reg[0] = reg[0] | reg[1];
2140:			reg[0] = reg[0] & reg[2];
2144:			reg[2] = stack.pop();
2146:			reg[1] = stack.pop();
2148:	l147:	return;
2149:			reg[0] = reg[0] + reg[1];
2153:			reg[1] = (reg[1] > reg[0]) ? 1 : 0;
2157:			return;
2158:			stack.push(reg[2]);
2160:			reg[2] = (reg[1] > reg[0]) ? 1 : 0;
2164:			reg[1] = reg[1] * 32767;
2168:			reg[0] = reg[0] + reg[1];
2172:			reg[1] = reg[2];
2175:			reg[2] = stack.pop();
2177:			return;
2178:			if (reg[0] == 0) { goto l80; }
2181:			if (reg[1] == 0) { goto l80; }
2184:			stack.push(reg[2]);
2186:			stack.push(reg[3]);
2188:			reg[2] = (reg[1] > reg[0]) ? 1 : 0;
2192:			if (reg[2] != 0) { goto l81; }
2195:			reg[2] = reg[0];
2198:			reg[0] = reg[1];
2201:			reg[1] = reg[2];
2204:	l81:	reg[2] = reg[0];
2207:			reg[0] = 0;
2210:	l83:	reg[0] = reg[0] + reg[1];
2214:			reg[3] = (reg[1] > reg[0]) ? 1 : 0;
2218:			if (reg[3] != 0) { goto l82; }
2221:			reg[2] = reg[2] + 32767;
2225:			if (reg[2] != 0) { goto l83; }
2228:			reg[1] = 0;
2231:			goto l84;
2233:	l82:	reg[1] = 1;
2236:	l84:	reg[3] = stack.pop();
2238:			reg[2] = stack.pop();
2240:			return;
2241:	l80:	reg[0] = 0;
2244:			reg[1] = 0;
2247:			return;
2248:	fn27:	stack.push(reg[1]);
2250:			stack.push(reg[2]);
2252:	l86:	if (reg[1] == 0) { goto l85; }
2255:			reg[1] = reg[1] + 32767;
2259:			reg[2] = reg[0] & 16384;
2263:			reg[0] = reg[0] * 2;
2267:			if (reg[2] == 0) { goto l86; }
2270:			reg[0] = reg[0] | 1;
2274:			goto l86;
2276:	l85:	reg[2] = stack.pop();
2278:			reg[1] = stack.pop();
2280:			return;
2281:	fn26:	stack.push(reg[1]);
2283:			reg[1] = (reg[0] > 14) ? 1 : 0;
2287:			if (reg[1] != 0) { goto l87; }
2290:			reg[1] = reg[0];
2293:			reg[0] = 1;
2296:	l89:	if (reg[1] == 0) { goto l88; }
2299:			reg[1] = reg[1] + 32767;
2303:			reg[0] = reg[0] * 2;
2307:			goto l89;
2309:	l87:	reg[0] = 32767;
2312:	l88:	reg[1] = stack.pop();
2314:			return;
2315:			goto l31;
2318:			if (26900 == 0) { goto l90; }
2321:			exit();
2326:			exit();
2331:			exit();
2336:			exit();
2341:			exit();
2342:			6934 = 26928 * 26931;
2346:			exit();
2351:			exit();
2356:			exit();
2361:			exit();
2366:			exit();
2367:	fn55:	
2371:			exit();
2376:			exit();
2421:			exit();
2451:			exit();
2456:			exit();
2461:			exit();
2462:			exit();
2472:			exit();
2473:			if (10766 == 0) { goto l91; }
2477:			exit();
2482:			exit();
2487:			exit();
2488:			11288 = stack.pop();
2492:			exit();
2496:			0 = 11726;
2500:			27143 = stack.pop();
2502:			exit();
2505:			27150 = 0 % 12199;
2510:			fn16();
2512:			exit();
2517:			exit();
2522:			exit();
2527:			exit();
2532:			exit();
2537:			exit();
2542:			exit();
2547:			exit();
2548:			14104 = 27205 * 27209;
2552:			exit();
2557:			exit();
2562:			14765 = stack.pop();
2582:	fn57:	
2603:			std::cin.get(16159);
2607:			exit();
2612:			fn17();
2619:			stack.push(27317);
2652:			exit();
2657:			exit();
2662:			exit();
2670:			4720 = 18206 | 18220;
2675:			exit();
2679:			-
2692:			18705 = stack.pop();
2695:			18769 = 18780;
2699:			return;
2704:			18963 = 2478 + 5428;
2715:			exit();
2719:			exit();
2727:			exit();
2731:			exit();
2732:			0 = 2 | reg[0];
2734:	l31:	stack.push(reg[0]);
2736:			stack.push(reg[1]);
2738:			stack.push(reg[2]);
2740:			stack.push(reg[3]);
2742:	l45:	reg[1] = mem[2732];
2745:			reg[0] = mem[2733];
2748:			reg[0] = (reg[0] == reg[1]) ? 1 : 0;
2752:			if (reg[0] != 0) { goto l32; }
2755:			reg[0] = mem[2732];
2758:			reg[0] = reg[0] + 4;
2762:			reg[0] = mem[reg[0]];
2765:			if (reg[0] == 0) { goto l32; }
2768:			reg[0]();
2770:	l32:	reg[1] = mem[2732];
2773:			reg[0] = mem[2733];
2776:			reg[0] = (reg[0] == reg[1]) ? 1 : 0;
2780:			if (reg[0] != 0) { goto l33; }
2783:			reg[0] = 25974;
2786:			mem[reg[0]] = 0;
2789:			fn5();
2791:	l33:	mem[2733] = reg[1];
2794:			stack.push(reg[0]);
2795:	l260:	
2796:			stack.push(reg[1]);
2798:			stack.push(reg[2]);
2800:			reg[0] = 27414;
2803:			reg[1] = 1531;
2806:			reg[2] = 4394 + 9784;
2810:			fn4();
2812:			reg[2] = stack.pop();
2814:			reg[1] = stack.pop();
2816:			reg[0] = stack.pop();
2818:			reg[0] = 32;
2821:			reg[1] = 25974;
2824:			fn6();
2826:			std::cout << "\n\n";
2830:			reg[0] = 25974;
2833:			reg[1] = 32;
2836:			fn7();
2838:			reg[1] = (reg[0] == 32767) ? 1 : 0;
2842:			if (reg[1] == 0) { goto l34; }
2845:			reg[0] = mem[25974];
2848:	l34:	reg[2] = reg[0];
2851:			reg[1] = mem[25974];
2854:			stack.push(reg[1]);
2856:			mem[25974] = reg[2];
2859:			reg[0] = 27398;
2862:			reg[1] = 25974;
2865:			fn8();
2867:			reg[1] = stack.pop();
2869:			mem[25974] = reg[1];
2872:			reg[1] = (reg[0] == 32767) ? 1 : 0;
2876:			if (reg[1] == 0) { goto l35; }
2879:			reg[0] = 0;
2882:			reg[2] = 0;
2885:	l35:	reg[1] = 27406 + 1;
2889:			reg[1] = reg[1] + reg[0];
2893:			reg[1] = mem[reg[1]];
2896:			reg[3] = mem[25974];
2899:			reg[3] = (reg[3] == reg[2]) ? 1 : 0;
2903:			if (reg[3] != 0) { goto l36; }
2906:			reg[0] = reg[2] * 32767;
2910:			reg[3] = mem[25974];
2913:			reg[3] = reg[0] + reg[3];
2917:			if (reg[2] == 0) { goto l37; }
2920:			reg[3] = reg[3] + 32767;
2924:	l37:	reg[3] = reg[3] % 32;
2928:			reg[0] = 25974 + reg[2];
2932:			if (reg[2] == 0) { goto l38; }
2935:			reg[0] = reg[0] + 1;
2939:	l38:	mem[reg[0]] = reg[3];
2942:			goto l39;
2944:	l36:	reg[0] = 25974;
2947:			mem[reg[0]] = 0;
2950:	l39:	reg[1]();
2952:			if (reg[1] != 0) { goto l45; }
2955:			reg[3] = stack.pop();
2957:			reg[2] = stack.pop();
2959:			reg[1] = stack.pop();
2961:			reg[0] = stack.pop();
2963:			return;
2964:	fn5:	stack.push(reg[0]);
2966:			stack.push(reg[1]);
2968:			stack.push(reg[2]);
2970:			reg[1] = mem[reg[0]];
2973:			if (reg[1] == 0) { goto l40; }
2976:			fn9();
2978:			if (reg[0] == 0) { goto l41; }
2981:			stack.push(reg[0]);
2983:			fn10();
2985:			reg[1] = reg[0];
2988:			reg[0] = stack.pop();
2990:			if (reg[1] == 0) { goto l41; }
2993:			reg[1] = reg[0] + 1;
2997:			reg[0] = mem[reg[1]];
3000:			fn3();
3002:			std::cout << "\n";
3004:			goto l42;
3006:	l41:	stack.push(reg[0]);
3008:			stack.push(reg[1]);
3010:			stack.push(reg[2]);
3012:			reg[0] = 27432;
3015:			reg[1] = 1531;
3018:			reg[2] = 16241 + 1017;
3022:			fn4();
3024:			reg[2] = stack.pop();
3026:			reg[1] = stack.pop();
3028:			reg[0] = stack.pop();
3030:			goto l42;
3032:	l40:	reg[0] = mem[2732];
3035:			stack.push(reg[0]);
3037:			std::cout << "== ";
3043:			reg[0] = reg[0] + 0;
3047:			reg[0] = mem[reg[0]];
3050:			fn3();
3052:			std::cout << " ==\n";
3060:			reg[0] = stack.pop();
3062:			stack.push(reg[0]);
3064:			reg[0] = reg[0] + 1;
3068:			reg[0] = mem[reg[0]];
3071:			reg[1] = mem[reg[0]];
3074:			reg[1] = (reg[1] == 2) ? 1 : 0;
3078:			if (reg[1] == 0) { goto l48; }
3081:			stack.push(reg[0]);
3083:			reg[0] = 2680;
3086:			fn10();
3088:			reg[1] = reg[0];
3091:			reg[0] = stack.pop();
3093:			reg[0] = reg[0] + 1;
3097:			reg[0] = reg[0] + reg[1];
3098:	l200:	
3101:			reg[0] = mem[reg[0]];
3104:	l48:	fn3();
3106:			std::cout << "\n";
3108:			reg[0] = stack.pop();
3110:			stack.push(reg[0]);
3112:			fn12();
3114:			if (reg[0] == 0) { goto l49; }
3117:			stack.push(reg[0]);
3119:			stack.push(reg[1]);
3121:			stack.push(reg[2]);
3123:			reg[0] = 27455;
3126:			reg[1] = 1531;
3129:			reg[2] = 442 + 13491;
3133:			fn4();
3135:			reg[2] = stack.pop();
3137:			reg[1] = stack.pop();
3139:			reg[0] = stack.pop();
3141:			reg[2] = mem[2732];
3144:			fn13();
3146:	l49:	reg[0] = stack.pop();
3148:			stack.push(reg[0]);
3150:			reg[0] = reg[0] + 2;
3154:			reg[0] = mem[reg[0]];
3157:			reg[0] = mem[reg[0]];
3160:			reg[2] = (reg[0] == 1) ? 1 : 0;
3164:			std::cout << "\nThere ";
3178:			if (reg[2] != 0) { goto l50; }
3181:			std::cout << "are";
3187:			goto l51;
3189:	l50:	std::cout << "is ";
3193:	l51:	\
3195:			fn14();
3197:			std::cout << " exit";
3207:			reg[2] = (reg[0] == 1) ? 1 : 0;
3211:			if (reg[2] != 0) { goto l58; }
3214:			std::cout << "s:\n";
3216:	l58:	\
3220:			reg[0] = stack.pop();
3222:			stack.push(reg[0]);
3224:			reg[0] = reg[0] + 2;
3228:			reg[0] = mem[reg[0]];
3231:			reg[1] = 5814;
3234:			fn4();
3236:			reg[0] = stack.pop();
3238:	l42:	reg[2] = stack.pop();
3240:			reg[1] = stack.pop();
3242:			reg[0] = stack.pop();
3244:			return;
3245:			stack.push(reg[0]);
3247:			stack.push(reg[1]);
3249:			stack.push(reg[2]);
3251:			reg[1] = reg[0];
3254:			reg[0] = mem[2732];
3257:			reg[0] = reg[0] + 2;
3261:			reg[0] = mem[reg[0]];
3264:			fn8();
3266:			reg[2] = (reg[0] == 32767) ? 1 : 0;
3270:			if (reg[2] != 0) { goto l92; }
3273:			reg[2] = mem[2732];
3276:			reg[2] = reg[2] + 3;
3280:			reg[2] = mem[reg[2]];
3283:			reg[2] = reg[2] + 1;
3287:			reg[2] = reg[2] + reg[0];
3291:			reg[2] = mem[reg[2]];
3294:			mem[2732] = reg[2];
3297:			mem[2733] = 0;
3300:			goto l93;
3302:	l92:	stack.push(reg[0]);
3304:			stack.push(reg[1]);
3306:			stack.push(reg[2]);
3308:			reg[0] = 27482;
3311:			reg[1] = 1531;
3314:			reg[2] = 8543 + 6288;
3317:	fn49:	
3318:	fn33:	fn4();
3320:			reg[2] = stack.pop();
3322:			reg[1] = stack.pop();
3324:			reg[0] = stack.pop();
3326:	l93:	reg[2] = stack.pop();
3328:			reg[1] = stack.pop();
3330:			reg[0] = stack.pop();
3332:			return;
3333:			stack.push(reg[0]);
3335:			stack.push(reg[0]);
3337:			stack.push(reg[1]);
3339:			stack.push(reg[2]);
3341:			reg[0] = 27532;
3344:			reg[1] = 1531;
3347:			reg[2] = 17320 + 2236;
3351:			fn4();
3353:			reg[2] = stack.pop();
3355:			reg[1] = stack.pop();
3357:			reg[0] = stack.pop();
3359:			reg[0] = stack.pop();
3361:			return;
3362:			stack.push(reg[0]);
3363:	fn96:	
3364:			stack.push(reg[2]);
3366:			stack.push(reg[0]);
3368:			stack.push(reg[1]);
3370:			stack.push(reg[2]);
3372:			reg[0] = 28037;
3375:			reg[1] = 1531;
3378:			reg[2] = 256 + 31843;
3380:	l174:	
3382:			fn4();
3384:			reg[2] = stack.pop();
3386:			reg[1] = stack.pop();
3388:			reg[0] = stack.pop();
3390:			reg[2] = 0;
3393:			fn13();
3395:			reg[2] = stack.pop();
3397:			reg[0] = stack.pop();
3399:			return;
3400:			stack.push(reg[0]);
3402:	l229:	stack.push(reg[1]);
3404:			stack.push(reg[2]);
3406:			fn9();
3408:			if (reg[0] == 0) { goto l94; }
3411:			reg[1] = reg[0] + 2;
3415:			reg[0] = mem[reg[1]];
3418:			reg[2] = mem[2732];
3421:			reg[2] = (reg[0] == reg[2]) ? 1 : 0;
3425:			if (reg[2] == 0) { goto l94; }
3428:			mem[reg[1]] = 0;
3431:			stack.push(reg[0]);
3433:			stack.push(reg[1]);
3435:			stack.push(reg[2]);
3437:			reg[0] = 28054;
3440:			reg[1] = 1531;
3443:			reg[2] = 26230 + 1797;
3447:			fn4();
3449:			reg[2] = stack.pop();
3451:			reg[1] = stack.pop();
3453:			reg[0] = stack.pop();
3455:			goto l95;
3457:	l94:	stack.push(reg[0]);
3459:			stack.push(reg[1]);
3461:			stack.push(reg[2]);
3463:			reg[0] = 28062;
3466:			reg[1] = 1531;
3469:			reg[2] = 1841 + 77;
3473:			fn4();
3475:			reg[2] = stack.pop();
3477:			reg[1] = stack.pop();
3479:			reg[0] = stack.pop();
3481:	l95:	reg[2] = stack.pop();
3483:			reg[1] = stack.pop();
3485:			reg[0] = stack.pop();
3487:			return;
3488:			stack.push(reg[0]);
3490:			stack.push(reg[1]);
3492:			fn9();
3494:			if (reg[0] == 0) { goto l96; }
3497:			reg[1] = reg[0] + 2;
3501:			reg[0] = mem[reg[1]];
3504:			if (reg[0] != 0) { goto l96; }
3507:			reg[0] = mem[2732];
3510:			mem[reg[1]] = reg[0];
3513:			stack.push(reg[0]);
3515:			stack.push(reg[1]);
3517:			stack.push(reg[2]);
3519:			reg[0] = 28090;
3522:			reg[1] = 1531;
3525:			reg[2] = 111 + 16;
3529:			fn4();
3531:			reg[2] = stack.pop();
3533:			reg[1] = stack.pop();
3535:			reg[0] = stack.pop();
3537:			goto l97;
3539:	l96:	stack.push(reg[0]);
3541:			stack.push(reg[1]);
3543:			stack.push(reg[2]);
3545:	l192:	reg[0] = 28100;
3548:			reg[1] = 1531;
3551:			reg[2] = 11541 + 1228;
3555:			fn4();
3557:			reg[2] = stack.pop();
3559:			reg[1] = stack.pop();
3561:			reg[0] = stack.pop();
3563:	l97:	reg[1] = stack.pop();
3565:			reg[0] = stack.pop();
3567:			return;
3568:			stack.push(reg[0]);
3570:			stack.push(reg[1]);
3572:			fn9();
3574:			if (reg[0] == 0) { goto l98; }
3577:			reg[1] = reg[0] + 2;
3581:			reg[1] = mem[reg[1]];
3584:			if (reg[1] != 0) { goto l98; }
3587:			reg[1] = reg[0] + 3;
3591:			reg[1] = mem[reg[1]];
3594:			if (reg[1] == 0) { goto l99; }
3597:			reg[1]();
3599:			goto l100;
3601:	l98:	stack.push(reg[0]);
3603:			stack.push(reg[1]);
3605:			stack.push(reg[2]);
3607:			reg[0] = 28135;
3610:			reg[1] = 1531;
3613:			reg[2] = 2742 + 449;
3617:			fn4();
3618:	l279:	
3619:			reg[2] = stack.pop();
3621:			reg[1] = stack.pop();
3623:			reg[0] = stack.pop();
3625:			goto l100;
3627:	l99:	stack.push(reg[0]);
3629:			stack.push(reg[1]);
3631:			stack.push(reg[2]);
3633:			reg[0] = 28170;
3636:			reg[1] = 1531;
3639:			reg[2] = 283 + 30544;
3643:			fn4();
3645:			reg[2] = stack.pop();
3647:			reg[1] = stack.pop();
3649:			reg[0] = stack.pop();
3651:	l100:	reg[1] = stack.pop();
3653:			reg[0] = stack.pop();
3655:			return;
3656:			stack.push(reg[0]);
3658:			stack.push(reg[1]);
3660:			stack.push(reg[2]);
3662:			reg[0] = 2680;
3665:			fn10();
3667:			if (reg[0] != 0) { goto l101; }
3670:			reg[0] = 2676 + 2;
3674:			mem[reg[0]] = 32767;
3677:			reg[0] = 2680 + 2;
3681:			mem[reg[0]] = 32767;
3683:	l156:	
3684:			reg[0] = 2672 + 2;
3688:			mem[reg[0]] = 32767;
3691:			mem[2732] = 2648;
3694:	l101:	reg[2] = stack.pop();
3696:			reg[1] = stack.pop();
3698:			reg[0] = stack.pop();
3700:			return;
3701:			stack.push(reg[0]);
3703:			stack.push(reg[1]);
3705:			stack.push(reg[2]);
3707:			reg[0] = 28204;
3710:			reg[1] = 1531;
3713:			reg[2] = 818 + 8249;
3717:			fn4();
3719:			reg[2] = stack.pop();
3721:			reg[1] = stack.pop();
3723:			reg[0] = stack.pop();
3725:			exit();
3726:			exit();
3727:	fn18:	stack.push(reg[1]);
3729:			reg[1] = mem[3726];
3732:			reg[1] = reg[1] | reg[0];
3736:			mem[3726] = reg[1];
3739:			reg[1] = stack.pop();
3741:			return;
3742:			mem[3726] = 0;
3745:			return;
3746:			stack.push(reg[0]);
3748:			reg[0] = 1;
3751:			fn18();
3753:			reg[0] = stack.pop();
3755:			return;
3756:			stack.push(reg[0]);
3758:			reg[0] = 2;
3761:			fn18();
3763:			reg[0] = stack.pop();
3765:			return;
3766:			stack.push(reg[0]);
3768:			reg[0] = 4;
3771:			fn18();
3773:			reg[0] = stack.pop();
3775:			return;
3776:			stack.push(reg[0]);
3778:			reg[0] = 8;
3781:			fn18();
3783:			reg[0] = stack.pop();
3785:			return;
3786:			stack.push(reg[0]);
3788:			reg[0] = 16;
3791:			fn18();
3793:			reg[0] = stack.pop();
3795:			return;
3796:			stack.push(reg[0]);
3798:			reg[0] = 32;
3801:			fn18();
3803:			reg[0] = stack.pop();
3805:			return;
3806:			stack.push(reg[0]);
3808:			stack.push(reg[1]);
3810:			stack.push(reg[2]);
3812:			stack.push(reg[3]);
3814:			reg[0] = 64;
3817:			fn18();
3819:			stack.push(reg[0]);
3821:			stack.push(reg[1]);
3823:			stack.push(reg[2]);
3825:			reg[0] = 28236;
3828:			reg[1] = 1531;
3831:			reg[2] = 1395 + 1791;
3835:			fn4();
3837:			reg[2] = stack.pop();
3839:			reg[1] = stack.pop();
3841:			reg[0] = stack.pop();
3843:			reg[0] = mem[3726];
3846:			reg[1] = 25866;
3849:			reg[2] = 32767;
3852:			reg[3] = 28299;
3855:			fn19();
3857:	fn51:	stack.push(reg[0]);
3859:			stack.push(reg[1]);
3861:			stack.push(reg[2]);
3863:			reg[0] = 28303;
3866:			reg[1] = 1531;
3869:			reg[2] = 6874 + 9876;
3873:			fn4();
3875:			reg[2] = stack.pop();
3877:			reg[1] = stack.pop();
3879:			reg[0] = stack.pop();
3881:			mem[2732] = 2417;
3884:			reg[3] = stack.pop();
3886:			reg[2] = stack.pop();
3888:			reg[1] = stack.pop();
3890:			reg[0] = stack.pop();
3892:			return;
3893:			stack.push(reg[0]);
3895:			stack.push(reg[1]);
3897:			reg[0] = mem[2462];
3899:	fn80:	
3900:			reg[1] = mem[27101];
3903:			reg[0] = (reg[0] == reg[1]) ? 1 : 0;
3907:			if (reg[0] != 0) { goto l102; }
3910:			stack.push(reg[0]);
3912:			stack.push(reg[1]);
3914:			stack.push(reg[2]);
3916:			reg[0] = 28347;
3919:			reg[1] = 1531;
3922:			reg[2] = 6321 + 10569;
3926:			fn4();
3928:			reg[2] = stack.pop();
3930:			reg[1] = stack.pop();
3932:			reg[0] = stack.pop();
3934:			mem[2732] = 2457;
3937:			mem[2733] = 2457;
3940:	l102:	reg[1] = stack.pop();
3942:			reg[0] = stack.pop();
3944:			return;
3951:			exit();
3953:			exit();
3954:			exit();
3955:			exit();
3956:			exit();
3957:			exit();
3958:			stack.push(reg[0]);
3960:			stack.push(reg[1]);
3962:			reg[0] = 2;
3965:			reg[1] = 0;
3968:			fn20();
3970:			reg[1] = stack.pop();
3972:			reg[0] = stack.pop();
3974:			return;
3975:			stack.push(reg[0]);
3977:			stack.push(reg[1]);
3979:			reg[0] = 8;
3982:			reg[1] = 1;
3985:			fn21();
3987:	fn102:	reg[1] = stack.pop();
3989:			reg[0] = stack.pop();
3991:			return;
3992:			stack.push(reg[0]);
3994:			stack.push(reg[1]);
3996:			reg[0] = 1;
3999:			reg[1] = 2;
4002:			fn20();
4004:			reg[1] = stack.pop();
4005:	fn76:	
4006:			reg[0] = stack.pop();
4008:			return;
4009:			stack.push(reg[0]);
4011:			stack.push(reg[1]);
4013:			reg[0] = 1;
4016:			reg[1] = 3;
4019:			fn21();
4021:			fn22();
4023:			reg[1] = stack.pop();
4025:			reg[0] = stack.pop();
4027:			return;
4028:			stack.push(reg[0]);
4030:			stack.push(reg[1]);
4032:			reg[0] = 4;
4035:			reg[1] = 4;
4038:			fn21();
4040:			reg[1] = stack.pop();
4042:			reg[0] = stack.pop();
4044:			return;
4045:			stack.push(reg[0]);
4047:			stack.push(reg[1]);
4049:			reg[0] = 2;
4052:			reg[1] = 5;
4055:			fn20();
4057:			reg[1] = stack.pop();
4059:			reg[0] = stack.pop();
4061:			return;
4062:			stack.push(reg[0]);
4064:			stack.push(reg[1]);
4066:			reg[0] = 11;
4069:			reg[1] = 6;
4072:			fn21();
4074:			reg[1] = stack.pop();
4076:			reg[0] = stack.pop();
4078:			return;
4079:	fn126:	stack.push(reg[0]);
4081:			stack.push(reg[1]);
4083:			reg[0] = 2;
4086:			reg[1] = 7;
4089:			fn20();
4091:			reg[1] = stack.pop();
4093:			reg[0] = stack.pop();
4095:			return;
4096:			stack.push(reg[0]);
4098:			stack.push(reg[1]);
4100:			reg[0] = 0;
4103:			reg[1] = 8;
4106:			fn20();
4108:			reg[1] = stack.pop();
4110:			reg[0] = stack.pop();
4112:			return;
4113:			stack.push(reg[0]);
4115:			stack.push(reg[1]);
4117:			reg[0] = 4;
4120:			reg[1] = 9;
4123:			fn21();
4125:			reg[1] = stack.pop();
4127:			reg[0] = stack.pop();
4129:			return;
4130:			stack.push(reg[0]);
4132:	l288:	stack.push(reg[1]);
4134:			reg[0] = 1;
4137:			reg[1] = 10;
4140:			fn20();
4142:			reg[1] = stack.pop();
4144:			reg[0] = stack.pop();
4145:	l217:	
4146:			return;
4147:			stack.push(reg[0]);
4149:			stack.push(reg[1]);
4151:			reg[0] = 18;
4154:			reg[1] = 11;
4157:			fn21();
4159:			reg[1] = stack.pop();
4161:			reg[0] = stack.pop();
4163:			return;
4164:			fn23();
4166:			return;
4167:			stack.push(reg[0]);
4169:			stack.push(reg[1]);
4171:			reg[0] = 1;
4174:			reg[1] = 12;
4177:			fn20();
4179:			reg[1] = stack.pop();
4181:			reg[0] = stack.pop();
4183:			return;
4184:			stack.push(reg[0]);
4186:			stack.push(reg[1]);
4188:			reg[0] = 9;
4191:			reg[1] = 13;
4194:			fn21();
4196:			reg[1] = stack.pop();
4198:			reg[0] = stack.pop();
4200:			return;
4201:			stack.push(reg[0]);
4203:			stack.push(reg[1]);
4205:			reg[0] = 2;
4208:			reg[1] = 14;
4211:			fn20();
4213:			reg[1] = stack.pop();
4215:			reg[0] = stack.pop();
4217:			return;
4218:	fn20:	stack.push(reg[0]);
4220:			stack.push(reg[1]);
4222:			stack.push(reg[2]);
4224:			reg[2] = 2716 + 2;
4228:			reg[2] = mem[reg[2]];
4231:			if (reg[2] != 0) { goto l103; }
4234:			fn24();
4236:			mem[3951] = reg[0];
4239:			reg[1] = reg[0] + 3945;
4243:			reg[1] = mem[reg[1]];
4246:			reg[0] = 26024;
4249:			fn3();
4251:			reg[0] = reg[1];
4254:			fn3();
4256:			reg[0] = 26088;
4259:			fn3();
4261:			reg[0] = reg[1];
4262:	l183:	
4264:			fn3();
4266:			std::cout << ".\n";
4270:			std::cout << "\n";
4272:	l103:	reg[2] = stack.pop();
4274:			reg[1] = stack.pop();
4276:			reg[0] = stack.pop();
4278:			return;
4279:	fn21:	stack.push(reg[0]);
4281:			stack.push(reg[1]);
4283:			stack.push(reg[2]);
4285:			reg[2] = 2716 + 2;
4289:			reg[2] = mem[reg[2]];
4292:			if (reg[2] != 0) { goto l104; }
4295:			fn24();
4297:			stack.push(reg[0]);
4299:			reg[0] = mem[3951];
4302:			reg[1] = reg[0] + 3945;
4306:			reg[1] = mem[reg[1]];
4309:			reg[0] = 26122;
4312:			fn3();
4314:			reg[0] = reg[1];
4317:			fn3();
4319:			reg[0] = 26170;
4322:			fn3();
4324:			reg[0] = stack.pop();
4326:			reg[1] = reg[0];
4329:			reg[0] = mem[3952];
4332:			reg[2] = mem[3951];
4335:			reg[2] = reg[2] + 3948;
4338:	l187:	
4339:			reg[2] = mem[reg[2]];
4342:			reg[2]();
4344:			if (reg[1] != 0) { goto l105; }
4347:			reg[1] = mem[3952];
4350:			mem[3952] = reg[0];
4353:			reg[2] = (reg[0] > reg[1]) ? 1 : 0;
4357:			if (reg[2] == 0) { goto l106; }
4360:			stack.push(reg[0]);
4361:	fn45:	
4362:			reg[0] = 26235;
4365:			fn3();
4367:			reg[0] = stack.pop();
4369:	l106:	reg[2] = (reg[1] > reg[0]) ? 1 : 0;
4373:			if (reg[2] == 0) { goto l107; }
4376:			stack.push(reg[0]);
4378:			reg[0] = 26267;
4381:			fn3();
4383:			reg[0] = stack.pop();
4385:	l107:	std::cout << "\n\n";
4389:			goto l104;
4391:	l105:	fn25();
4393:			reg[0] = 26299;
4396:			fn3();
4398:	l104:	reg[2] = stack.pop();
4400:			reg[1] = stack.pop();
4402:			reg[0] = stack.pop();
4404:			return;
4405:	fn24:	stack.push(reg[0]);
4407:			stack.push(reg[1]);
4409:			stack.push(reg[2]);
4411:			stack.push(reg[3]);
4413:			stack.push(reg[4]);
4415:			stack.push(reg[5]);
4417:			reg[5] = mem[3953];
4420:			reg[3] = (reg[5] > 29999) ? 1 : 0;
4424:			if (reg[3] != 0) { goto l108; }
4427:			reg[5] = reg[5] + 1;
4429:	fn135:	
4431:			mem[3953] = reg[5];
4434:	l108:	reg[3] = reg[0];
4437:			reg[4] = reg[1];
4440:			reg[0] = reg[5] + 2;
4444:			fn26();
4446:	fn116:	reg[1] = mem[3954];
4449:			reg[0] = reg[1] | reg[0];
4453:			reg[1] = reg[4];
4456:			fn27();
4458:			mem[3954] = reg[0];
4461:			reg[0] = 3955;
4464:			reg[1] = reg[5] + 2;
4468:			reg[2] = reg[4];
4471:			fn28();
4473:			reg[0] = 3956;
4476:			reg[1] = reg[5] * reg[5];
4480:			reg[2] = reg[4] * reg[4];
4484:			fn28();
4486:			reg[0] = 3957;
4489:			reg[1] = 13;
4492:			reg[2] = reg[3] * 9;
4496:			reg[2] = reg[2] * reg[2];
4500:			fn28();
4502:			reg[5] = stack.pop();
4504:			reg[4] = stack.pop();
4506:			reg[3] = stack.pop();
4508:			reg[2] = stack.pop();
4510:			reg[1] = stack.pop();
4512:			reg[0] = stack.pop();
4514:			return;
4515:	fn28:	stack.push(reg[0]);
4517:			reg[0] = mem[reg[0]];
4520:			fn27();
4522:			reg[1] = reg[2];
4525:			fn2();
4527:			reg[1] = stack.pop();
4529:			mem[reg[1]] = reg[0];
4532:			return;
4533:	fn22:	stack.push(reg[0]);
4535:			reg[0] = 2716 + 2;
4539:			reg[0] = mem[reg[0]];
4542:			if (reg[0] != 0) { goto l109; }
4545:			reg[0] = 26321;
4548:			fn3();
4550:			reg[0] = mem[3952];
4553:			reg[0] = (reg[0] == 30) ? 1 : 0;
4557:			if (reg[0] != 0) { goto l110; }
4560:			reg[0] = 26354;
4563:			fn3();
4565:	l112:	reg[0] = 26398;
4568:			fn3();
4570:			fn25();
4572:			goto l109;
4574:	l110:	reg[0] = 26440;
4577:			fn3();
4579:			reg[0] = mem[3954];
4582:			reg[0] = reg[0] + 1;
4586:			if (reg[0] != 0) { goto l111; }
4589:			reg[0] = 26484;
4592:			fn3();
4594:			goto l112;
4596:	l111:	reg[0] = 26584;
4599:			fn3();
4601:			reg[0] = 2716 + 2;
4605:			mem[reg[0]] = 32767;
4608:	l109:	reg[0] = stack.pop();
4610:			return;
4611:	fn23:	stack.push(reg[0]);
4613:			reg[0] = 2716 + 2;
4617:			reg[0] = mem[reg[0]];
4619:	fn88:	
4620:			if (reg[0] != 0) { goto l113; }
4623:			reg[0] = 26717;
4626:			fn3();
4628:			reg[0] = mem[2732];
4630:	fn62:	
4631:			reg[0] = (reg[0] == 2623) ? 1 : 0;
4635:			if (reg[0] != 0) { goto l114; }
4638:			reg[0] = 26725;
4641:			fn3();
4643:			goto l115;
4645:	l114:	reg[0] = 26731;
4648:			fn3();
4650:	l115:	reg[0] = 26737;
4653:			fn3();
4655:	l244:	fn25();
4657:	l113:	reg[0] = stack.pop();
4659:			return;
4660:	fn25:	stack.push(reg[0]);
4662:			mem[3952] = 22;
4665:			mem[3953] = 0;
4668:			mem[3954] = 0;
4671:			mem[3955] = 0;
4674:			mem[3956] = 0;
4677:			mem[3957] = 0;
4680:			reg[0] = 2716 + 2;
4684:			mem[reg[0]] = 2623;
4687:			reg[0] = stack.pop();
4689:			return;
4690:			stack.push(reg[0]);
4692:			reg[0] = 2716 + 2;
4696:			reg[0] = mem[reg[0]];
4699:			reg[0] = (reg[0] == 32767) ? 1 : 0;
4703:			if (reg[0] != 0) { goto l116; }
4706:			reg[0] = 26824;
4709:			fn3();
4711:			mem[2732] = 2578;
4714:			mem[2733] = 2578;
4717:	l116:	reg[0] = stack.pop();
4719:			return;
4720:			stack.push(reg[0]);
4722:			stack.push(reg[1]);
4724:			stack.push(reg[2]);
4726:			stack.push(reg[3]);
4728:			stack.push(reg[0]);
4730:			stack.push(reg[1]);
4732:			stack.push(reg[2]);
4734:			reg[0] = 28369;
4737:			reg[1] = 1531;
4740:			reg[2] = 1469 + 1978;
4744:			fn4();
4746:			reg[2] = stack.pop();
4748:			reg[1] = stack.pop();
4750:			reg[0] = stack.pop();
4752:			reg[0] = 4242;
4755:			reg[1] = 25866;
4758:			reg[2] = 32767;
4761:			reg[3] = 28397;
4764:			fn19();
4766:			stack.push(reg[0]);
4768:			stack.push(reg[1]);
4770:			stack.push(reg[2]);
4772:			reg[0] = 28401;
4775:			reg[1] = 1531;
4778:			reg[2] = 14355 + 15467;
4782:	l295:	fn4();
4784:			reg[2] = stack.pop();
4786:			reg[1] = stack.pop();
4788:			reg[0] = stack.pop();
4790:			reg[3] = stack.pop();
4792:			reg[2] = stack.pop();
4794:			reg[1] = stack.pop();
4796:			reg[0] = stack.pop();
4798:			return;
4799:			stack.push(reg[0]);
4801:			reg[0] = 2672 + 2;
4805:			reg[0] = mem[reg[0]];
4808:			if (reg[0] != 0) { goto l117; }
4811:			reg[0] = 2684 + 2;
4815:			mem[reg[0]] = 32767;
4818:			reg[0] = 2672 + 2;
4822:			mem[reg[0]] = 32767;
4825:			reg[0] = 2676 + 2;
4829:			mem[reg[0]] = 0;
4832:			stack.push(reg[0]);
4834:			stack.push(reg[1]);
4836:			stack.push(reg[2]);
4838:			reg[0] = 28453;
4841:			reg[1] = 1531;
4844:			reg[2] = 1608 + 2591;
4848:			fn4();
4850:			reg[2] = stack.pop();
4852:			reg[1] = stack.pop();
4854:			reg[0] = stack.pop();
4856:			goto l118;
4858:	l117:	stack.push(reg[0]);
4860:			stack.push(reg[1]);
4862:			stack.push(reg[2]);
4864:			reg[0] = 28510;
4867:			reg[1] = 1531;
4870:			reg[2] = 99 + 17;
4874:			fn4();
4876:			reg[2] = stack.pop();
4878:			reg[1] = stack.pop();
4880:			reg[0] = stack.pop();
4882:	l118:	reg[0] = stack.pop();
4884:			return;
4885:			stack.push(reg[0]);
4887:			reg[0] = 2676 + 2;
4891:			mem[reg[0]] = 32767;
4894:			reg[0] = 2680 + 2;
4898:			mem[reg[0]] = 0;
4901:			stack.push(reg[0]);
4903:			stack.push(reg[1]);
4905:			stack.push(reg[2]);
4907:			reg[0] = 28569;
4910:			reg[1] = 1531;
4913:			reg[2] = 11455 + 442;
4917:			fn4();
4919:			reg[2] = stack.pop();
4921:			reg[1] = stack.pop();
4923:			reg[0] = stack.pop();
4925:			mem[2733] = 0;
4928:			reg[0] = stack.pop();
4930:			return;
4931:			stack.push(reg[0]);
4933:			reg[0] = 2676 + 2;
4937:			mem[reg[0]] = 0;
4940:			reg[0] = 2680 + 2;
4944:			mem[reg[0]] = 32767;
4947:			stack.push(reg[0]);
4949:			stack.push(reg[1]);
4951:			stack.push(reg[2]);
4953:			reg[0] = 28595;
4956:			reg[1] = 1531;
4959:			reg[2] = 17821 + 5581;
4963:			fn4();
4965:			reg[2] = stack.pop();
4967:			reg[1] = stack.pop();
4969:			reg[0] = stack.pop();
4971:			mem[2733] = 0;
4974:			reg[0] = stack.pop();
4976:			return;
4977:	fn29:	stack.push(reg[2]);
4979:			stack.push(reg[3]);
4981:			reg[2] = mem[2732];
4984:			reg[2] = (reg[2] == 2457) ? 1 : 0;
4988:			if (reg[2] != 0) { goto l119; }
4991:			stack.push(reg[0]);
4993:			stack.push(reg[1]);
4995:			stack.push(reg[2]);
4997:			reg[0] = 28621;
5000:			reg[1] = 1531;
5003:			reg[2] = 6787 + 497;
5005:	l227:	
5007:			fn4();
5009:			reg[2] = stack.pop();
5011:			reg[1] = stack.pop();
5013:			reg[0] = stack.pop();
5015:			goto l120;
5017:	l119:	reg[2] = reg[0] + 2;
5021:			mem[reg[2]] = 32767;
5024:			reg[2] = mem[2462];
5027:			reg[2] = reg[2] + 27095;
5031:			reg[2] = reg[2] + 1;
5035:			reg[2] = mem[reg[2]];
5038:			reg[3] = 2457 + 1;
5042:			reg[3] = mem[reg[3]];
5045:			reg[3] = reg[3] + reg[2];
5049:			reg[2] = reg[1] + 48;
5053:			mem[reg[3]] = reg[2];
5056:			reg[2] = mem[2462];
5059:			reg[2] = reg[2] + 27101;
5063:			reg[2] = reg[2] + 1;
5067:			mem[reg[2]] = reg[1];
5070:			stack.push(reg[0]);
5072:			stack.push(reg[0]);
5074:			stack.push(reg[1]);
5076:			stack.push(reg[2]);
5078:			reg[0] = 28664;
5081:			reg[1] = 1531;
5084:			reg[2] = 110 + 392;
5088:			fn4();
5090:			reg[2] = stack.pop();
5092:			reg[1] = stack.pop();
5094:			reg[0] = stack.pop();
5096:			reg[0] = stack.pop();
5098:			stack.push(reg[0]);
5100:			reg[2] = reg[0] + 0;
5104:			reg[0] = mem[reg[2]];
5107:			fn3();
5109:			reg[0] = stack.pop();
5111:			stack.push(reg[0]);
5113:			stack.push(reg[0]);
5115:			stack.push(reg[1]);
5117:			stack.push(reg[2]);
5119:			reg[0] = 28679;
5122:			reg[1] = 1531;
5125:			reg[2] = 2616 + 2882;
5129:			fn4();
5131:			reg[2] = stack.pop();
5133:			reg[1] = stack.pop();
5135:			reg[0] = stack.pop();
5137:			reg[0] = stack.pop();
5139:			reg[2] = mem[2462];
5142:			reg[2] = reg[2] + 1;
5146:			mem[2462] = reg[2];
5149:			reg[3] = mem[27101];
5152:			reg[3] = (reg[2] == reg[3]) ? 1 : 0;
5156:			if (reg[3] == 0) { goto l120; }
5159:			reg[0] = 0;
5162:			reg[1] = 27101 + 1;
5166:			reg[1] = mem[reg[1]];
5169:			reg[0] = reg[0] + reg[1];
5173:			reg[1] = 27101 + 2;
5177:			reg[1] = mem[reg[1]];
5180:			reg[2] = 27101 + 3;
5184:			reg[2] = mem[reg[2]];
5187:			reg[2] = reg[2] * reg[2];
5191:			reg[1] = reg[1] * reg[2];
5195:			reg[0] = reg[0] + reg[1];
5199:			reg[1] = 27101 + 4;
5203:			reg[1] = mem[reg[1]];
5206:			reg[2] = reg[1] * reg[1];
5210:			reg[2] = reg[2] * reg[1];
5214:			reg[0] = reg[0] + reg[2];
5218:			reg[1] = 27101 + 5;
5222:			reg[1] = mem[reg[1]];
5225:			reg[1] = reg[1] * 32767;
5229:			reg[0] = reg[0] + reg[1];
5233:			reg[1] = (reg[0] == 399) ? 1 : 0;
5237:			if (reg[1] != 0) { goto l121; }
5240:			reg[2] = 2688 + 2;
5242:	l267:	
5244:			mem[reg[2]] = 2457;
5247:			reg[2] = 2692 + 2;
5251:			mem[reg[2]] = 2457;
5254:			reg[2] = 2696 + 2;
5258:			mem[reg[2]] = 2457;
5261:			reg[2] = 2700 + 2;
5265:			mem[reg[2]] = 2457;
5268:			reg[2] = 2704 + 2;
5272:			mem[reg[2]] = 2457;
5275:			mem[2462] = 0;
5277:	l250:	
5278:			reg[0] = 27095;
5281:			reg[1] = 5341;
5284:			fn4();
5286:			stack.push(reg[0]);
5288:			stack.push(reg[1]);
5290:			stack.push(reg[2]);
5292:			reg[0] = 28710;
5295:			reg[1] = 1531;
5298:			reg[2] = 10078 + 4510;
5302:			fn4();
5304:			reg[2] = stack.pop();
5306:			reg[1] = stack.pop();
5308:			reg[0] = stack.pop();
5310:			goto l120;
5312:	l121:	stack.push(reg[0]);
5314:			stack.push(reg[1]);
5316:			stack.push(reg[2]);
5318:			reg[0] = 28777;
5321:			reg[1] = 1531;
5324:			reg[2] = 6088 + 2230;
5328:			fn4();
5330:			reg[2] = stack.pop();
5332:			reg[1] = stack.pop();
5334:			reg[0] = stack.pop();
5336:	l120:	reg[3] = stack.pop();
5338:			reg[2] = stack.pop();
5340:			return;
5341:			stack.push(reg[2]);
5343:			reg[2] = 2457 + 1;
5347:			reg[2] = mem[reg[2]];
5350:			reg[2] = reg[2] + reg[0];
5354:			mem[reg[2]] = 95;
5357:			reg[2] = stack.pop();
5359:			return;
5360:			stack.push(reg[0]);
5362:			stack.push(reg[1]);
5364:			reg[0] = 2688;
5367:			reg[1] = 2;
5370:			fn29();
5372:			reg[1] = stack.pop();
5374:			reg[0] = stack.pop();
5376:			return;
5377:			stack.push(reg[0]);
5379:			stack.push(reg[1]);
5381:			reg[0] = 2692;
5384:			reg[1] = 3;
5387:			fn29();
5389:			reg[1] = stack.pop();
5391:			reg[0] = stack.pop();
5393:			return;
5394:			stack.push(reg[0]);
5396:			stack.push(reg[1]);
5398:			reg[0] = 2696;
5400:	fn34:	
5401:			reg[1] = 5;
5404:			fn29();
5406:			reg[1] = stack.pop();
5408:			reg[0] = stack.pop();
5410:			return;
5411:			stack.push(reg[0]);
5413:			stack.push(reg[1]);
5415:			reg[0] = 2700;
5418:			reg[1] = 7;
5421:			fn29();
5423:			reg[1] = stack.pop();
5425:			reg[0] = stack.pop();
5427:			return;
5428:			stack.push(reg[0]);
5430:			stack.push(reg[1]);
5432:			reg[0] = 2704;
5435:			reg[1] = 9;
5438:			fn29();
5440:			reg[1] = stack.pop();
5442:			reg[0] = stack.pop();
5444:			return;
5445:			stack.push(reg[0]);
5447:			stack.push(reg[1]);
5449:			stack.push(reg[2]);
5451:			-
5452:			-
5453:			-
5454:			stack.push(reg[0]);
5456:			stack.push(reg[1]);
5458:			stack.push(reg[2]);
5460:			reg[0] = 28844;
5463:			reg[1] = 1531;
5466:			reg[2] = 5779 + 14174;
5470:			fn4();
5472:			reg[2] = stack.pop();
5474:			reg[1] = stack.pop();
5476:			reg[0] = stack.pop();
5478:			-
5479:			-
5480:			-
5481:			-
5482:			-
5483:			-
5484:			-
5485:			reg[7] = 25734;
5488:			reg[0] = 6;
5491:			reg[1] = (reg[0] == 6) ? 1 : 0;
5495:			if (reg[1] == 0) { goto l122; }
5498:			stack.push(reg[0]);
5500:			stack.push(reg[1]);
5502:			stack.push(reg[2]);
5504:			reg[0] = 29014;
5507:			reg[1] = 1531;
5510:			reg[2] = 6929 + 15196;
5514:			fn4();
5516:			reg[2] = stack.pop();
5518:			reg[1] = stack.pop();
5520:			reg[0] = stack.pop();
5522:			reg[0] = reg[7];
5525:			reg[1] = 25866;
5528:			reg[2] = 32767;
5531:			stack.push(reg[3]);
5533:			reg[3] = 29241;
5536:			fn19();
5538:			reg[3] = stack.pop();
5539:	fn97:	
5540:			stack.push(reg[0]);
5542:			stack.push(reg[1]);
5544:			stack.push(reg[2]);
5546:			reg[0] = 29245;
5549:			reg[1] = 1531;
5552:			reg[2] = 23693 + 618;
5556:			fn4();
5558:			reg[2] = stack.pop();
5560:			reg[1] = stack.pop();
5562:			reg[0] = stack.pop();
5564:			mem[2732] = 2498;
5567:			mem[2733] = 0;
5570:			reg[1] = 2708 + 2;
5574:			mem[reg[1]] = 32767;
5577:			goto l123;
5579:	l122:	stack.push(reg[0]);
5581:			stack.push(reg[1]);
5583:			stack.push(reg[2]);
5585:			reg[0] = 29400;
5588:			reg[1] = 1531;
5591:			reg[2] = 3192 + 16378;
5595:			fn4();
5597:			reg[2] = stack.pop();
5599:			reg[1] = stack.pop();
5601:			reg[0] = stack.pop();
5603:			goto l123;
5605:			stack.push(reg[0]);
5607:			stack.push(reg[1]);
5609:			stack.push(reg[2]);
5611:			reg[0] = 29545;
5614:			reg[1] = 1531;
5617:			reg[2] = 4031 + 25407;
5621:			fn4();
5623:			reg[2] = stack.pop();
5625:			reg[1] = stack.pop();
5627:			reg[0] = stack.pop();
5629:			reg[0] = 0;
5632:			reg[2] = 1 + 27101;
5636:	l124:	reg[1] = mem[reg[2]];
5639:			reg[0] = reg[0] + reg[1];
5643:			reg[0] = reg[0] * 31660;
5647:			fn2();
5649:			reg[1] = mem[27101];
5652:			reg[1] = reg[1] + 27101;
5656:			reg[2] = reg[2] + 1;
5660:			reg[1] = (reg[2] > reg[1]) ? 1 : 0;
5664:			if (reg[1] == 0) { goto l124; }
5667:			reg[1] = 25866;
5670:			reg[2] = 32767;
5673:			stack.push(reg[3]);
5675:			reg[3] = 29663;
5678:			fn19();
5680:			reg[3] = stack.pop();
5682:			stack.push(reg[0]);
5684:			stack.push(reg[1]);
5686:			stack.push(reg[2]);
5688:			reg[0] = 29667;
5689:	l210:	
5691:			reg[1] = 1531;
5694:			reg[2] = 660 + 1631;
5698:			fn4();
5700:			reg[2] = stack.pop();
5702:			reg[1] = stack.pop();
5704:			reg[0] = stack.pop();
5706:			mem[2732] = 2488;
5709:			mem[2733] = 0;
5712:			goto l123;
5714:	l123:	reg[2] = stack.pop();
5716:			reg[1] = stack.pop();
5718:			reg[0] = stack.pop();
5720:			return;
5721:			stack.push(reg[0]);
5723:			stack.push(reg[1]);
5725:			stack.push(reg[2]);
5727:			stack.push(reg[3]);
5729:			stack.push(reg[0]);
5731:			stack.push(reg[1]);
5733:			stack.push(reg[2]);
5735:			reg[0] = 29757;
5738:			reg[1] = 1531;
5741:			reg[2] = 17913 + 366;
5745:			fn4();
5747:			reg[2] = stack.pop();
5749:			reg[1] = stack.pop();
5751:			reg[0] = stack.pop();
5753:			reg[0] = mem[3955];
5756:			reg[1] = mem[3956];
5759:			fn2();
5761:			reg[1] = mem[3957];
5764:			fn2();
5766:			reg[1] = 25919;
5769:			reg[2] = 4;
5772:			stack.push(reg[3]);
5774:			reg[3] = 29942;
5777:			fn19();
5778:	l202:	
5779:			reg[3] = stack.pop();
5781:			stack.push(reg[0]);
5783:			stack.push(reg[1]);
5785:			stack.push(reg[2]);
5787:			reg[0] = 29946;
5790:			reg[1] = 1531;
5793:			reg[2] = 6687 + 9035;
5797:			fn4();
5799:			reg[2] = stack.pop();
5801:			reg[1] = stack.pop();
5803:			reg[0] = stack.pop();
5805:			reg[3] = stack.pop();
5807:			reg[2] = stack.pop();
5809:			reg[1] = stack.pop();
5811:			reg[0] = stack.pop();
5813:			return;
5814:	fn30:	std::cout << "- ";
5818:			fn3();
5820:			std::cout << "\n";
5822:			return;
5823:	fn12:	stack.push(reg[1]);
5825:			stack.push(reg[2]);
5827:			reg[0] = 27381;
5830:			reg[1] = 5846;
5833:			reg[2] = 0;
5836:			fn4();
5838:			reg[0] = reg[2];
5841:			reg[2] = stack.pop();
5843:			reg[1] = stack.pop();
5845:			return;
5846:			stack.push(reg[3]);
5848:			stack.push(reg[4]);
5850:			reg[3] = mem[2732];
5853:			reg[4] = reg[0] + 2;
5857:			reg[4] = mem[reg[4]];
5860:			reg[3] = (reg[3] == reg[4]) ? 1 : 0;
5864:			if (reg[3] == 0) { goto l125; }
5867:			reg[2] = reg[2] + 1;
5871:	l125:	reg[4] = stack.pop();
5873:			reg[3] = stack.pop();
5875:			return;
5876:	fn13:	stack.push(reg[0]);
5878:			stack.push(reg[1]);
5880:			reg[0] = 27381;
5883:			reg[1] = 5893;
5886:			fn4();
5888:			reg[1] = stack.pop();
5890:			reg[0] = stack.pop();
5892:			return;
5893:			stack.push(reg[3]);
5895:			reg[3] = reg[0] + 2;
5899:			reg[3] = mem[reg[3]];
5902:			reg[3] = (reg[2] == reg[3]) ? 1 : 0;
5906:			if (reg[3] == 0) { goto l126; }
5909:			reg[0] = reg[0] + 0;
5913:			reg[0] = mem[reg[0]];
5916:			fn30();
5918:	l126:	reg[3] = stack.pop();
5920:			return;
5921:	fn9:	stack.push(reg[1]);
5923:			stack.push(reg[2]);
5925:			reg[2] = reg[0];
5928:			reg[0] = 27381;
5931:			reg[1] = 5964;
5934:			fn11();
5936:			reg[1] = (reg[0] == 32767) ? 1 : 0;
5940:			if (reg[1] != 0) { goto l52; }
5943:			reg[1] = 27381 + reg[0];
5947:			reg[1] = reg[1] + 1;
5951:			reg[0] = mem[reg[1]];
5954:			goto l53;
5956:	l52:	reg[0] = 0;
5959:	l53:	reg[2] = stack.pop();
5961:			reg[1] = stack.pop();
5963:			return;
5964:			stack.push(reg[1]);
5966:			reg[1] = reg[2];
5969:			reg[0] = reg[0] + 0;
5973:			reg[0] = mem[reg[0]];
5976:			fn15();
5978:			reg[1] = stack.pop();
5980:			if (reg[0] == 0) { goto l127; }
5983:			reg[2] = reg[1];
5986:			reg[1] = 32767;
5989:	l127:	return;
5990:	fn10:	stack.push(reg[1]);
5992:			stack.push(reg[2]);
5994:			reg[0] = reg[0] + 2;
5998:			reg[0] = mem[reg[0]];
6001:			if (reg[0] == 0) { goto l54; }
6004:			reg[1] = mem[2732];
6007:			reg[1] = (reg[0] == reg[1]) ? 1 : 0;
6011:			if (reg[1] != 0) { goto l54; }
6014:			reg[0] = 0;
6017:			goto l55;
6019:	l54:	reg[0] = 1;
6022:	l55:	reg[2] = stack.pop();
6024:			reg[1] = stack.pop();
6026:			return;
6027:	fn31:	if (reg[0] != 0) { goto l128; }
6030:			reg[0] = reg[1] + 1;
6034:			return;
6035:	l128:	if (reg[1] != 0) { goto l129; }
6038:			reg[0] = reg[0] + 32767;
6042:			reg[1] = reg[7];
6045:			fn31();
6047:			return;
6048:	l129:	stack.push(reg[0]);
6050:			reg[1] = reg[1] + 32767;
6054:			fn31();
6056:			reg[1] = reg[0];
6059:			reg[0] = stack.pop();
6061:			reg[0] = reg[0] + 32767;
6065:			fn31();
6067:			return;
6074:			25529 = stack.pop();
6086:			7552 = (19815 == 31473) ? 1 : 0;
6089:	l190:	
6090:			mem[23531] = 2949;
6096:			mem[31188] = 10545;
6101:			26588 = 6057 & 18228;
6126:			mem[4213] = 16468;
6135:			16660 = (29029 > 8560) ? 1 : 0;
6143:			std::cout << "16699";
6187:			1701 = mem[14030];
6221:			std::cin.get(30436);
6262:			mem[18017] = 31099;
6265:			23298 = 2618 * 15653;
6273:			std::cin.get(25456);
6289:			std::cin.get(29300);
6323:			32689 = ~11999;
6330:			22949 = (2861 == 15027) ? 1 : 0;
6342:			fn32();
6344:			fn33();
6349:			-
6357:			5084 = 17846;
6393:			fn34();
6406:			fn35();
6411:	fn60:	
6417:			exit();
6443:			24246 = 4310 & 17712;
6452:	fn87:	
6458:			-
6477:			-
6485:			if (10709 == 0) { goto l130; }
6496:			-
6511:			20540 = 661;
6518:			mem[13425] = 27004;
6521:			exit();
6535:			mem[6452] = 19057;
6545:			exit();
6564:	fn65:	
6571:			19105 = 32728 + 13152;
6577:			-
6579:			std::cin.get(26544);
6602:			mem[1998] = 15269;
6605:			8437 = 21614 % 2048;
6613:			16326 = 29600 & 10036;
6639:			mem[120] = 13717;
6645:			14660 = 28013 | 8561;
6663:			exit();
6667:	fn47:	
6673:			26751 = 7197;
6707:			return;
6714:			stack.push(18598);
6722:			27829 = (8993 == 22509) ? 1 : 0;
6726:			std::cout << "16004";
6730:			mem[4300] = 18343;
6733:			return;
6741:			21954 = 2212 + 16249;
6753:	l298:	
6778:			-
6790:			std::cin.get(29184);
6827:			if (8872 == 0) { goto l131; }
6842:			17901 = (31532 == 11960) ? 1 : 0;
6853:	l254:	
6854:			18316 = (32119 == 12512) ? 1 : 0;
6857:	l220:	
6858:			mem[7628] = 21476;
6861:			15615 = mem[29253];
6869:			27607 = 8608 + 22324;
6895:			std::cin.get(24614);
6905:			exit();
6906:			13118 = stack.pop();
6919:			mem[29024] = 10093;
6929:			if (3193 != 0) { goto l132; }
6935:			fn36();
6955:			3759 = 17614 & 32048;
6961:			-
6963:			return;
6989:			std::cout << "19127";
7015:			23395 = (4141 > 18133) ? 1 : 0;
7030:			mem[4192] = 18786;
7033:			exit();
7046:			23 = (14644 > 28274) ? 1 : 0;
7094:			fn37();
7110:			-
7125:			6103 = 20384 + 1848;
7130:	l191:	
7161:			if (28930 != 0) { goto l133; }
7174:			18757 = (369 == 14707) ? 1 : 0;
7185:			exit();
7193:			29593 = (11235 > 25188) ? 1 : 0;
7226:			13476 = (28458 == 10170) ? 1 : 0;
7245:			26356 = mem[8469];
7279:			mem[28710] = 10459;
7286:			mem[32356] = 14694;
7289:			exit();
7303:			18740 = (105 == 15185) ? 1 : 0;
7313:			629 = stack.pop();
7350:			mem[19432] = 1377;
7354:			12781 = (27436 == 8892) ? 1 : 0;
7381:			17365 = (32229 > 14199) ? 1 : 0;
7407:			std::cin.get(8231);
7414:			mem[14194] = 29041;
7418:			8054 = (22884 == 4924) ? 1 : 0;
7430:			22289 = stack.pop();
7467:			if (16037 == 0) { goto l134; }
7473:			-
7475:			if (5040 == 0) { goto l135; }
7494:			-
7501:			667 = 16248 + 30779;
7509:			22982 = 4768 & 20326;
7535:			std::cin.get(20596);
7542:			mem[27750] = 10613;
7545:	l215:	std::cout << "7957";
7558:			return;
7559:			22907 = 4713 & 20293;
7569:			mem[9854] = 25417;
7577:			464 = 15021 % 30224;
7595:			10912 = stack.pop();
7601:			-
7603:			-
7622:			std::cout << "29060";
7673:			22815 = 5409 & 20785;
7687:			if (8571 == 0) { goto l136; }
7691:			4580 = stack.pop();
7738:			std::cout << "8383";
7757:			7856 = ~23874;
7765:			stack.push(1472);
7799:			stack.push(6468);
7801:			4867 = (20030 == 3365) ? 1 : 0;
7808:			15418 = 31525 | 13949;
7814:			-
7818:			mem[7756] = 24036;
7851:			if (740 == 0) { goto l137; }
7857:			-
7870:	fn53:	
7877:	l294:	
7878:			fn38();
7887:			-
7893:			if (7106 == 0) { goto l138; }
7911:			29557 = (12645 > 27868) ? 1 : 0;
7913:	fn111:	
7919:			if (24692 != 0) { goto l139; }
7925:			21831 = 4973 | 20861;
7929:			goto l140;
7937:	fn35:	
7943:			12666 = 28529 & 11615;
7947:			10661 = 26589 | 9699;
7979:			if (28328 == 0) { goto l141; }
7987:			25505 = 8671 % 24158;
7994:			std::cin.get(5801);
8006:			1250 = stack.pop();
8015:			14365 = 30337 & 14128;
8039:			7029 = (22583 > 5845) ? 1 : 0;
8047:			mem[4152] = 20172;
8053:			2898 = 18528 | 2356;
8057:			exit();
8058:			fn39();
8070:			14336 = (31034 > 13902) ? 1 : 0;
8083:	fn91:	
8113:			-
8115:			-
8118:			mem[5622] = 21857;
8134:			-
8143:			-
8157:	l139:	
8163:			return;
8164:			mem[1018] = 17305;
8175:			std::cin.get(16435);
8186:			-
8187:	l270:	
8199:			16692 = stack.pop();
8231:	l143:	
8235:			18093 = 1737;
8241:			-
8243:			return;
8246:			mem[2791] = 19837;
8308:	fn109:	
8314:			14885 = (32065 == 15406) ? 1 : 0;
8326:			18017 = (2403 == 18528) ? 1 : 0;
8337:			4713 = 21789;
8371:			if (16289 != 0) { goto l142; }
8390:			-
8405:			29663 = stack.pop();
8431:			goto l143;
8442:			fn40();
8454:			-
8458:			mem[5953] = 22957;
8491:			if (7914 == 0) { goto l144; }
8506:			-
8518:			exit();
8525:			29420 = ~14188;
8533:			if (2448 == 0) { goto l145; }
8557:	fn92:	
8559:			mem[20596] = 4805;
8587:			9652 = 26268 | 11235;
8593:			return;
8619:			2725 = 20431 + 4987;
8627:			if (10212 == 0) { goto l146; }
8653:			return;
8687:			mem[39] = 17794;
8693:			6481 = 23927 | 8561;
8711:			24942 = (9568 == 26896) ? 1 : 0;
8721:			goto l147;
8747:			stack.push(30390);
8755:			7084 = 24489 + 8789;
8774:			fn41();
8781:			if (3760 == 0) { goto l148; }
8807:			2936 = (20012 > 4804) ? 1 : 0;
8815:			12341 = (29894 > 15331) ? 1 : 0;
8825:			25372 = (9761 == 28004) ? 1 : 0;
8832:	l234:	
8836:			mem[22565] = 7957;
8849:			std::cin.get(23159);
8889:	fn95:	
8927:			fn42();
8943:			goto l149;
8953:			7426 = (25384 == 10596) ? 1 : 0;
8955:	l269:	
8967:			29042 = 14117 * 32081;
8977:			stack.push(11385);
9018:			28345 = (14124 > 32210) ? 1 : 0;
9022:			2210 = (20797 == 6054) ? 1 : 0;
9030:			fn43();
9071:			mem[4212] = 22213;
9094:			if (28672 != 0) { goto l150; }
9131:			if (15076 == 0) { goto l151; }
9139:			30640 = ~15572;
9142:			mem[19945] = 5501;
9146:			27553 = (13089 == 30973) ? 1 : 0;
9165:			fn44();
9170:			std::cin.get(7882);
9191:			return;
9209:			fn45();
9222:			14609 = (376 == 18784) ? 1 : 0;
9226:			mem[22877] = 8613;
9233:			mem[20579] = 6161;
9253:			if (29827 == 0) { goto l152; }
9267:			27575 = ~13260;
9270:	l271:	
9293:			18161 = 4422 | 22567;
9333:			10066 = 28272 | 14688;
9338:			4642 = 23857 + 9341;
9395:			24496 = ~9889;
9418:			mem[31172] = 17322;
9423:			-
9430:	fn127:	
9438:	l268:	
9456:			mem[27604] = 13794;
9465:			1303 = (20264 == 6502) ? 1 : 0;
9469:			11583 = (30496 == 16756) ? 1 : 0;
9489:			std::cin.get(29794);
9515:			32438 = 18646 & 5424;
9527:	l189:	
9532:	fn120:	
9542:			stack.push(22670);
9549:			25343 = mem[12098];
9557:			14807 = 672 & 20282;
9575:			31597 = (17450 > 3781) ? 1 : 0;
9583:			20596 = 6854;
9589:			4934 = 23648 | 10611;
9593:			exit();
9594:			2092 = (21808 == 7732) ? 1 : 0;
9607:			fn46();
9610:			mem[14429] = 1445;
9617:			mem[17968] = 4952;
9637:			if (9890 == 0) { goto l153; }
9651:			std::cout << "18336";
9670:	l296:	
9729:			22840 = 9528;
9735:			8551 = 27941 & 14673;
9739:			20904 = 7580 | 27106;
9771:			22244 = (8924 > 29043) ? 1 : 0;
9782:			mem[7921] = 28028;
9798:			26253 = (13681 == 421) ? 1 : 0;
9805:			std::cout << "32501";
9813:			26069 = 12477;
9821:	l163:	
9831:			19296 = (5677 > 25301) ? 1 : 0;
9849:			13059 = (32313 == 19812) ? 1 : 0;
9862:			fn47();
9899:			stack.push(17078);
9904:			goto l154;
9907:			std::cout << "12215";
9914:			fn48();
9933:			fn49();
9941:			if (31682 == 0) { goto l155; }
9967:			24632 = (12240 > 32232) ? 1 : 0;
9973:			13668 = 877 | 20849;
9978:			-
9990:			25354 = (12596 == 32625) ? 1 : 0;
10027:			12004 = (31954 > 19813) ? 1 : 0;
10042:			18092 = (5933 == 26031) ? 1 : 0;
10061:			6904 = 27484 * 14391;
10069:			4564 = 24293 & 12157;
10095:			4156 = 24240;
10103:			exit();
10105:			mem[10009] = 29731;
10110:			12346 = 289 + 20085;
10118:			std::cin.get(10309);
10122:			mem[25689] = 13740;
10129:			goto l156;
10155:			if (6884 == 0) { goto l157; }
10170:			fn50();
10197:			if (10180 == 0) { goto l158; }
10229:			8546 = 29034 | 16763;
10233:			if (24835 == 0) { goto l159; }
10246:			-
10247:			16692 = 4460;
10251:			421 = 20881 | 8700;
10262:	fn125:	
10283:			1706 = 22234 & 10613;
10291:			if (2985 == 0) { goto l160; }
10351:			exit();
10365:			std::cin.get(24356);
10379:			19867 = 7389 | 28602;
10384:			25387 = 12834 % 1309;
10393:			15837 = (3245 > 24091) ? 1 : 0;
10411:			stack.push(29361);
10419:			32704 = 20186 + 8277;
10438:			-
10442:			mem[20933] = 9125;
10445:			17584 = ~5719;
10453:			stack.push(21392);
10459:	l241:	
10489:			21791 = 10042 | 31031;
10503:			20849 = 9062;
10513:			mem[1072] = 22090;
10520:	fn114:	
10532:	l133:	
10539:			24235 = mem[12495];
10545:			-
10547:			if (29622 == 0) { goto l161; }
10573:			21237 = mem[10070];
10581:			exit();
10590:	fn74:	
10607:			exit();
10617:			fn51();
10630:			17408 = stack.pop();
10635:			26032 = 13970 | 2992;
10641:			22133 = stack.pop();
10698:			mem[26590] = 15271;
10709:			if (32710 == 0) { goto l162; }
10725:	l184:	
10735:			mem[38] = 21968;
10745:			18719 = 7482;
10758:			3345 = stack.pop();
10760:			fn52();
10777:			19332 = (8162 > 29284) ? 1 : 0;
10822:			7821 = stack.pop();
10837:			5589 = (26853 > 16227) ? 1 : 0;
10889:			if (21317 != 0) { goto l163; }
10897:			goto l164;
10916:	fn110:	
10950:			-
10972:			1020 = 22974 + 12140;
10981:	l171:	
10991:			stack.push(24636);
11015:			29053 = 18291;
11016:	fn115:	
11051:			if (3766 == 0) { goto l165; }
11057:			-
11066:			fn53();
11085:			2709 = 25447 + 14369;
11126:			mem[28791] = 18811;
11129:			30493 = 19555 * 9572;
11134:			std::cin.get(10279);
11143:			14715 = stack.pop();
11153:			std::cin.get(7806);
11164:	fn32:	
11187:			fn54();
11190:			mem[15844] = 5498;
11206:			13713 = stack.pop();
11213:			-
11239:			870 = (23338 > 12511) ? 1 : 0;
11257:			-
11258:			fn55();
11271:			375 = (22890 == 12610) ? 1 : 0;
11275:			24972 = 14744 | 4593;
11277:	fn133:	
11281:			exit();
11307:			stack.push(26278);
11315:			11180 = 972 * 23108;
11322:			exit();
11334:			fn56();
11341:			9904 = (339 == 22561) ? 1 : 0;
11349:			28115 = 17568 & 7988;
11381:			1860 = 24101 * 14695;
11385:			exit();
11386:			-
11399:			18801 = 8229 % 31569;
11409:			std::cin.get(16996);
11443:			8107 = 30349 + 20563;
11469:			return;
11474:	l141:	
11513:			9497 = 32547 | 22819;
11527:			4467 = 27429 % 17753;
11537:			5240 = 28242;
11544:			std::cout << "3402";
11563:			16032 = 6348 & 30053;
11571:			5047 = mem[27964];
11641:			24329 = 14445 + 5430;
11659:			17824 = 7826 | 31742;
11691:			10920 = 1949;
11699:			1963 = (24792 == 15376) ? 1 : 0;
11744:	l290:	
11769:			6429 = 29992 * 20836;
11793:	fn89:	
11853:			std::cin.get(24291);
11855:			-
11887:			goto l166;
11893:			24401 = 14955 | 6512;
11898:			-
11906:	fn41:	
11910:			fn57();
11913:			exit();
11921:			mem[2673] = 26974;
11955:			28577 = 19085 % 10335;
11983:			-
12000:			exit();
12007:			29539 = (20768 > 11459) ? 1 : 0;
12025:			if (3349 == 0) { goto l167; }
12039:			std::cout << "12657";
12057:			20355 = (11769 > 2593) ? 1 : 0;
12083:			-
12090:			std::cin.get(30398);
12102:			25745 = stack.pop();
12135:			7008 = (30765 > 22229) ? 1 : 0;
12143:			4156 = 28315;
12153:			goto l168;
12167:			mem[31072] = 22125;
12170:			mem[5214] = 30113;
12177:			exit();
12179:	l219:	
12181:	l255:	
12193:			mem[9150] = 242;
12203:			23212 = ~15183;
12205:	fn123:	
12211:			std::cin.get(22455);
12263:			17245 = (9009 > 144) ? 1 : 0;
12271:			std::cin.get(16445);
12277:			272 = stack.pop();
12281:			277 = 24941 | 16695;
12295:			exit();
12313:			917 = (25580 > 16951) ? 1 : 0;
12346:			std::cout << "27816";
12347:	fn84:	
12362:			mem[29889] = 22443;
12365:			return;
12367:			-
12373:			if (7582 == 0) { goto l169; }
12404:	l166:	
12409:			15124 = 6765 % 32048;
12422:			-
12423:			2407 = 26720 % 19216;
12433:			mem[21040] = 13641;
12441:			23966 = (15586 > 7734) ? 1 : 0;
12453:			if (27294 == 0) { goto l170; }
12467:			fn58();
12474:			std::cin.get(26891);
12476:			mem[10933] = 3125;
12486:			31639 = (23921 == 15584) ? 1 : 0;
12539:			14647 = 7037 & 32041;
12551:			fn59();
12561:			mem[9264] = 1608;
12621:			std::cin.get(13027);
12623:			-
12629:			if (18880 == 0) { goto l171; }
12653:	l159:	
12665:			12037 = 4159 * 30052;
12678:			13325 = (6417 == 31350) ? 1 : 0;
12689:			goto l172;
12704:	l222:	
12708:			mem[21861] = 13973;
12723:			mem[10145] = 2243;
12742:			if (2432 != 0) { goto l173; }
12746:			mem[6082] = 31666;
12751:			-
12783:			std::cout << "5";
12793:			return;
12806:			32069 = stack.pop();
12848:			exit();
12851:			7085 = 32718 | 25169;
12858:			22689 = stack.pop();
12864:			exit();
12870:			return;
12877:			20144 = 13658 + 6194;
12903:			2940 = (28192 > 21186) ? 1 : 0;
12922:			fn7();
12933:			24341 = mem[16913];
12945:			mem[6704] = 329;
12979:			return;
12982:			mem[16362] = 9570;
12986:			stack.push(21930);
13049:			23888 = 17209 | 10540;
13063:			29041 = 22379;
13073:			27761 = 21065;
13099:			20161 = (13518 > 7551) ? 1 : 0;
13116:			7598 = 572 | 26804;
13130:			mem[14018] = 8106;
13135:			-
13144:	l230:	
13150:	fn122:	
13159:			23399 = (16433 > 9941) ? 1 : 0;
13177:			return;
13191:			exit();
13201:			mem[15920] = 10079;
13227:			stack.push(15010);
13254:			if (9611 != 0) { goto l174; }
13261:			if (30967 == 0) { goto l175; }
13301:			12612 = 6509 | 369;
13318:			fn60();
13329:			std::cin.get(4220);
13337:			21393 = (15277 > 8759) ? 1 : 0;
13363:			27620 = ~21442;
13370:			-
13389:			1784 = 29008 + 22644;
13415:	fn61:	
13429:			26489 = 20086 | 14712;
13433:			2846 = (29225 == 23985) ? 1 : 0;
13437:			12088 = 5680 + 372;
13446:			if (24133 != 0) { goto l176; }
13457:			mem[25187] = 19741;
13483:			4768 = stack.pop();
13494:			mem[7153] = 1404;
13510:			13192 = stack.pop();
13543:			if (21312 != 0) { goto l177; }
13551:			mem[8308] = 3043;
13558:			mem[1860] = 29047;
13561:			goto l178;
13575:			4465 = stack.pop();
13585:			fn61();
13593:			1944 = (29164 > 23095) ? 1 : 0;
13611:			stack.push(32433);
13616:	l201:	
13619:			21430 = 15812 * 9796;
13628:			if (4540 == 0) { goto l179; }
13636:			26018 = 19970 & 14487;
13655:	fn52:	
13688:			fn62();
13695:			294 = 27194;
13713:			goto l180;
13721:			24964 = (19173 > 13857) ? 1 : 0;
13773:			-
13781:			if (4053 == 0) { goto l181; }
13807:			61 = 28120;
13813:			2428 = 30060 | 24947;
13817:			14596 = 9581 | 4404;
13828:	l259:	
13867:			if (22244 == 0) { goto l182; }
13875:			std::cin.get(15265);
13878:			mem[32489] = 28029;
13909:			if (9616 == 0) { goto l183; }
13945:			-
13956:			stack.push(8228);
13958:			stack.push(31232);
13965:	l214:	
13969:			stack.push(10876);
13995:			17059 = (12757 == 8036) ? 1 : 0;
14022:			20421 = stack.pop();
14026:			mem[1482] = 29601;
14029:			19632 = 14935 + 10278;
14037:			if (15298 == 0) { goto l184; }
14063:			if (24692 != 0) { goto l185; }
14073:			11522 = 6969 * 2348;
14087:			mem[12640] = 8045;
14097:			std::cin.get(31868);
14107:	l266:	
14123:			11937 = 7325;
14150:			-
14162:	l213:	
14191:			4216 = (32405 > 28657) ? 1 : 0;
14197:			11089 = 6249 | 2400;
14201:			26399 = 21560 | 17699;
14215:			fn63();
14225:			20088 = 16216;
14256:	fn106:	
14263:	fn54:	
14285:			26879 = (22592 == 18470) ? 1 : 0;
14330:			4389 = (289 == 29053) ? 1 : 0;
14342:			20805 = stack.pop();
14379:			1764 = (30428 > 27006) ? 1 : 0;
14387:			if (2992 == 0) { goto l186; }
14394:			std::cin.get(7405);
14427:			if (8234 == 0) { goto l187; }
14453:			6003 = 1636 | 31074;
14457:			exit();
14459:			15656 = 11326 & 7999;
14466:			fn64();
14471:			exit();
14481:			29304 = 25940;
14507:			29352 = 26065 & 22320;
14522:			fn65();
14534:			stack.push(27530);
14575:			stack.push(8245);
14585:	fn44:	mem[5395] = 1829;
14599:			fn66();
14602:			mem[10073] = 6572;
14629:			12423 = 8896 + 5991;
14677:			10709 = 6839 + 3955;
14695:	l150:	
14703:			20596 = 17089;
14713:			20252 = stack.pop();
14727:			6502 = (2666 == 32581) ? 1 : 0;
14753:			mem[19390] = 15602;
14794:			mem[18370] = 15266;
14805:			16337 = (13233 > 10036) ? 1 : 0;
14831:			mem[116] = 30147;
14839:			8478 = mem[5425];
14854:			27917 = (24957 == 21878) ? 1 : 0;
14858:			mem[15711] = 12715;
14865:			goto l188;
14897:			-
14899:			23465 = (20431 == 16991) ? 1 : 0;
14906:			-
14918:			fn67();
14922:			mem[20705] = 18347;
14928:			3226 = 869 | 30621;
14969:			17173 = 13933 | 11552;
14982:			-
14992:			exit();
15001:			26015 = (22763 > 20068) ? 1 : 0;
15025:			-
15027:			return;
15034:			-
15045:	fn56:	
15055:			10355 = 8155 | 5396;
15081:			7391 = 4750 + 2223;
15093:			9561 = 7019 | 4404;
15097:			32080 = (29482 == 26934) ? 1 : 0;
15121:			3170 = 594;
15125:	fn94:	
15129:			16276 = (13794 > 10795) ? 1 : 0;
15144:	l256:	
15153:			-
15155:			fn68();
15174:			3269 = stack.pop();
15183:			-
15189:			400 = ~30369;
15213:			std::cout << "8724";
15215:			mem[4149] = 1734;
15226:			if (11304 != 0) { goto l189; }
15231:			309 = stack.pop();
15237:			19231 = 16394 + 14694;
15269:	fn121:	
15281:			-
15283:			14308 = 11461 + 9297;
15302:			std::cout << "5508";
15309:			std::cin.get(22782);
15354:			26917 = (24865 == 22831) ? 1 : 0;
15366:			2315 = (378 > 31084) ? 1 : 0;
15377:			return;
15414:			mem[4854] = 3445;
15418:			std::cin.get(29923);
15422:			22205 = (20785 == 18933) ? 1 : 0;
15430:			stack.push(6853);
15434:			mem[31961] = 30636;
15437:			std::cin.get(26339);
15439:			-
15445:			11715 = (9445 == 8053) ? 1 : 0;
15446:	l283:	
15471:			return;
15481:			exit();
15482:			stack.push(8813);
15495:			return;
15510:	fn43:	
15537:			-
15539:			return;
15546:			fn69();
15562:	l152:	
15579:			if (7246 != 0) { goto l190; }
15599:			if (8251 != 0) { goto l191; }
15606:			mem[30564] = 28980;
15609:			25873 = 24383 + 22819;
15622:			std::cin.get(5888);
15652:	l237:	
15653:			24725 = 23236 + 22375;
15667:			if (5032 == 0) { goto l192; }
15670:			mem[201] = 32123;
15671:	l177:	
15719:			31600 = (29738 > 28383) ? 1 : 0;
15740:			mem[3637] = 2869;
15751:			22836 = stack.pop();
15787:			10922 = (10202 == 9008) ? 1 : 0;
15793:			return;
15814:			12768 = (11623 == 9962) ? 1 : 0;
15856:	l272:	
15865:			fn70();
15878:			9485 = (8561 == 7461) ? 1 : 0;
15923:			mem[31716] = 30660;
15949:			std::cin.get(7934);
15957:			1477 = stack.pop();
15980:	fn128:	
15983:			exit();
15991:			6466 = mem[5124];
15994:			3617 = (3376 > 2173) ? 1 : 0;
16003:			29995 = (28728 == 28496) ? 1 : 0;
16007:			26982 = (25696 == 25360) ? 1 : 0;
16017:			if (19065 != 0) { goto l193; }
16054:			mem[26609] = 25980;
16077:			return;
16079:			-
16117:			21841 = 21285 | 20787;
16134:			stack.push(13073);
16137:			exit();
16145:			mem[7267] = 6729;
16159:			-
16160:			890 = 421 | 32701;
16171:			28388 = 27866 & 28002;
16177:			-
16193:	l293:	
16205:			return;
16213:			12757 = (12005 > 12130) ? 1 : 0;
16224:			exit();
16228:	l249:	
16246:			mem[2156] = 2407;
16250:			fn71();
16263:			goto l194;
16273:			return;
16314:			std::cout << "21414";
16341:			exit();
16356:	fn58:	
16377:			fn72();
16381:			16696 = 16688 + 16756;
16391:			16754 = 16677 * 16708;
16423:	l252:	
16454:			-
16461:			if (22244 == 0) { goto l195; }
16469:	fn17:	
16476:			if (24818 == 0) { goto l196; }
16495:			if (28733 != 0) { goto l197; }
16501:			30530 = 30314 | 31099;
16505:			if (31491 == 0) { goto l198; }
16519:			2356 = 2161 + 2904;
16555:			stack.push(12962);
16563:			16299 = mem[16066];
16582:			fn73();
16589:			std::cin.get(25843);
16617:	fn134:	
16623:			exit();
16631:			12610 = mem[13060];
16634:			14113 = (14640 > 15229) ? 1 : 0;
16643:			18731 = (19256 == 19792) ? 1 : 0;
16647:			20838 = (21344 == 21776) ? 1 : 0;
16657:			if (25721 != 0) { goto l199; }
16682:	l243:	
16694:			mem[14577] = 15740;
16701:	fn108:	
16717:			return;
16719:			-
16734:	fn72:	
16757:			25412 = 25709 | 26993;
16775:			6523 = 6775 % 8004;
16786:			std::cin.get(15178);
16811:			stack.push(2737);
16817:			-
16819:			std::cout << "10212";
16848:	l137:	
16853:			exit();
16889:			fn74();
16893:			14655 = (15648 == 16756) ? 1 : 0;
16902:			-
16907:			29098 = 30088 | 31229;
16913:			if (2096 != 0) { goto l200; }
16939:			stack.push(30390);
16966:			28298 = stack.pop();
16981:			goto l201;
16985:	l132:	
17014:			mem[21094] = 22907;
17017:			25348 = 26175 % 27947;
17030:			stack.push(8773);
17034:			mem[13913] = 15788;
17041:			exit();
17047:			fn75();
17067:			stack.push(25257);
17075:			fn76();
17103:			-
17109:			19358 = 20928;
17115:	l182:	
17138:			return;
17142:			mem[2916] = 4454;
17145:			exit();
17169:			11312 = 12894;
17206:			mem[5347] = 7544;
17237:			exit();
17263:			if (4212 != 0) { goto l202; }
17273:			fn77();
17287:			14689 = (15977 == 18244) ? 1 : 0;
17291:			21896 = 23186 | 25587;
17313:	fn50:	
17323:	fn68:	
17331:			std::cout << "30640";
17357:			14526 = 16447 + 18526;
17365:			30684 = 32682 % 1915;
17383:			893 = (2870 > 4240) ? 1 : 0;
17391:			if (16435 != 0) { goto l203; }
17402:			std::cin.get(6440);
17442:			24009 = (25644 == 27748) ? 1 : 0;
17451:			9904 = 11933;
17459:			std::cin.get(27562);
17462:			mem[748] = 3450;
17465:	fn39:	
17466:			stack.push(9384);
17478:			-
17482:			mem[11517] = 14253;
17485:			fn78();
17493:			stack.push(3548);
17519:			if (28731 != 0) { goto l204; }
17530:			fn79();
17542:			15941 = stack.pop();
17547:			28069 = 29849 | 32767;
17553:			mem[8820] = 11549;
17579:			4788 = 7629 & 10104;
17606:			std::cin.get(5004);
17613:			if (21757 == 0) { goto l205; }
17621:			9180 = 11702 & 14136;
17647:			8245 = 11228;
17655:			exit();
17657:			exit();
17658:			fn80();
17671:			4454 = (7018 == 9541) ? 1 : 0;
17681:			29816 = 32344;
17684:	l265:	
17685:	fn100:	
17713:			-
17715:			std::cin.get(21411);
17741:			fn81();
17749:			stack.push(14787);
17775:			fn82();
17785:			16130 = (18470 == 21802) ? 1 : 0;
17794:	l287:	
17798:			fn83();
17801:			28498 = 30796;
17835:			if (27319 == 0) { goto l206; }
17850:			-
17853:	fn105:	
17862:			8586 = 11617 + 14071;
17866:			mem[20442] = 23461;
17868:	l161:	
17869:			28862 = (31765 == 2164) ? 1 : 0;
17913:			31006 = 1322 & 4452;
17926:			5393 = stack.pop();
17949:			10880 = 14068 & 17722;
17960:	l221:	
17963:			22187 = 25294;
17968:			exit();
17997:			32446 = mem[3349];
18025:			stack.push(25282);
18031:			fn84();
18042:			stack.push(15928);
18054:			-
18073:			21892 = (24812 > 28198) ? 1 : 0;
18091:			stack.push(17076);
18092:	l224:	
18102:			mem[22512] = 25959;
18127:			-
18159:			if (24636 != 0) { goto l207; }
18165:	fn78:	
18176:			20230 = 23829;
18183:			12647 = (16165 == 19793) ? 1 : 0;
18187:			27059 = 30607 | 1529;
18197:	l168:	
18219:			11967 = stack.pop();
18227:			std::cout << "9136";
18234:			-
18240:	l154:	
18287:			mem[4212] = 7891;
18297:			10012 = (13411 == 17764) ? 1 : 0;
18311:			return;
18329:			2457 = (5886 > 9828) ? 1 : 0;
18344:			std::cout << "27817";
18347:			6832 = stack.pop();
18362:			stack.push(931);
18378:			mem[31708] = 2993;
18381:			std::cin.get(10468);
18415:			if (16419 != 0) { goto l208; }
18425:			fn85();
18438:			12613 = stack.pop();
18443:			422 = 4488 | 8676;
18449:			std::cin.get(24672);
18475:			1712 = stack.pop();
18480:			22625 = stack.pop();
18490:			stack.push(31907);
18506:			mem[1244] = 6065;
18509:			std::cin.get(14052);
18543:			28710 = (218 > 5108) ? 1 : 0;
18553:			6992 = (10799 == 15670) ? 1 : 0;
18566:			30283 = (2327 == 6246) ? 1 : 0;
18592:	l276:	
18611:			32682 = mem[3725];
18628:			mem[9893] = 14361;
18671:			stack.push(8251);
18673:	fn112:	
18678:			mem[8042] = 12666;
18694:			stack.push(16151);
18737:			-
18746:			fn86();
18765:			std::cin.get(21236);
18773:			27081 = stack.pop();
18777:	l193:	
18780:			27337 = stack.pop();
18788:	l176:	
18809:			mem[3865] = 8249;
18811:	fn119:	
18812:	fn99:	
18823:			fn87();
18859:			if (19172 == 0) { goto l209; }
18867:			-
18870:			mem[8678] = 13691;
18886:			22981 = 28006 + 32490;
18896:	l203:	
18917:	l155:	
18927:			std::cin.get(39);
18937:			18692 = 23870 * 29028;
18950:			std::cin.get(19712);
18953:			2386 = 7489 & 12721;
18987:			13992 = mem[19144];
18998:			mem[5797] = 11613;
19014:			24214 = (30004 == 2538) ? 1 : 0;
19021:			std::cout << "28405";
19023:			-
19062:			mem[16996] = 22836;
19065:			if (773 != 0) { goto l210; }
19078:			fn88();
19089:			31349 = 4433;
19116:	l145:	
19126:	l246:	
19142:			std::cout << "26500";
19146:			mem[15813] = 21413;
19149:			31920 = ~4631;
19157:			stack.push(11202);
19175:			13158 = (18720 > 23764) ? 1 : 0;
19193:			15618 = 21295 * 27001;
19197:			5432 = 11068 + 16679;
19207:			goto l211;
19217:			goto l212;
19225:			32657 = (5615 > 10795) ? 1 : 0;
19239:	fn130:	
19251:			17380 = ~22991;
19266:			4789 = (11053 == 16830) ? 1 : 0;
19285:			16852 = stack.pop();
19322:			if (3108 != 0) { goto l189; }
19334:			std::cout << "8192";
19338:			mem[31835] = 5541;
19345:			if (7807 != 0) { goto l213; }
19371:			stack.push(31415);
19379:			-
19386:			23487 = (29477 == 2227) ? 1 : 0;
19407:			-
19413:			22467 = (28645 == 1910) ? 1 : 0;
19450:			18797 = (24877 == 31022) ? 1 : 0;
19473:			28770 = 2130;
19479:	fn83:	
19499:			stack.push(26282);
19504:	l212:	24669 = (30953 == 4878) ? 1 : 0;
19538:	l273:	
19574:			mem[7797] = 14694;
19577:			27412 = 568 * 7463;
19590:			fn89();
19627:			21160 = 28110 & 1840;
19633:			-
19635:			if (8118 == 0) { goto l214; }
19642:			-
19654:			if (900 == 0) { goto l215; }
19669:			exit();
19705:			9489 = 16185 | 22884;
19718:			stack.push(30486);
19736:	l140:	
19737:			26576 = 492 + 6734;
19743:	fn129:	
19763:			std::cout << "5047";
19788:	l282:	
19789:			17123 = 24341 + 30773;
19797:			6597 = 12982 & 20337;
19830:			mem[3168] = 10621;
19833:			stack.push(24344);
19853:	l135:	
19883:			stack.push(10934);
19891:			1953 = ~8392;
19903:	fn48:	
19910:			-
19914:	l170:	
19961:			6425 = 13606 + 20769;
19974:			std::cin.get(1349);
19985:			mem[14384] = 21589;
20079:			goto l166;
20085:			24401 = 31350 | 6452;
20089:			fn90();
20106:			mem[15941] = 23997;
20113:			mem[2660] = 10580;
20139:			673 = 8651 + 16249;
20145:			-
20147:			return;
20154:			-
20166:			fn91();
20207:			std::cin.get(24608);
20217:			3408 = 11055;
20235:			10657 = 18324 | 26103;
20261:			if (14493 != 0) { goto l216; }
20275:			25572 = (449 == 7765) ? 1 : 0;
20294:			std::cin.get(9413);
20298:			mem[7897] = 16300;
20335:			goto l217;
20342:			mem[26731] = 2427;
20346:			if (25644 != 0) { goto l218; }
20359:			31028 = 5745 + 14168;
20369:			11896 = 20253;
20395:			23216 = 31700 & 7039;
20401:			-
20403:			-
20410:			exit();
20417:	l185:	
20422:			std::cin.get(11717);
20429:			2296 = 10320 + 18548;
20470:			mem[8548] = 16743;
20474:			fn92();
20487:			16753 = 24869 | 323;
20497:			fn93();
20528:	fn117:	
20534:			mem[10999] = 19825;
20538:			11428 = (20278 > 28600) ? 1 : 0;
20550:			12949 = stack.pop();
20564:	l285:	
20570:	l275:	
20591:			28721 = 4295;
20596:	fn82:	
20601:			fn94();
20614:			26129 = stack.pop();
20625:			std::cin.get(21092);
20651:			12983 = (21917 == 30581) ? 1 : 0;
20659:			16356 = (24257 == 85) ? 1 : 0;
20678:			std::cout << "15242";
20719:			8308 = 17372;
20743:			fn59();
20746:			mem[14168] = 22967;
20794:			fn95();
20810:			mem[19151] = 28598;
20813:			std::cin.get(13045);
20839:			15229 = (23595 > 32400) ? 1 : 0;
20840:	l291:	
20847:			std::cout << "20533";
20852:	l233:	
20853:			9055 = 17507 | 26932;
20856:	fn66:	
20858:			-
20860:	fn59:	
20907:			if (2720 == 0) { goto l219; }
20912:			-
20922:			stack.push(8121);
20934:			-
20941:			16629 = 25670 + 2080;
20956:	l208:	
20986:			fn96();
20999:			exit();
21027:	fn79:	
21033:	fn64:	
21035:			if (30375 == 0) { goto l220; }
21043:			std::cin.get(7095);
21069:			std::cin.get(20213);
21110:			mem[12903] = 22897;
21114:			goto l221;
21126:			524 = (10619 == 19563) ? 1 : 0;
21137:			6773 = (16723 > 25783) ? 1 : 0;
21145:			17872 = (26842 > 3628) ? 1 : 0;
21171:			std::cout << "4011";
21174:			mem[32743] = 9585;
21178:			fn97();
21205:			if (3036 == 0) { goto l222; }
21242:			808 = (10536 == 20280) ? 1 : 0;
21255:			mem[29048] = 5985;
21258:			mem[25433] = 2469;
21269:	fn90:	
21291:			if (20196 == 0) { goto l223; }
21299:			945 = ~10689;
21306:			std::cin.get(3821);
21318:			fn98();
21333:			if (8663 == 0) { goto l224; }
21351:			23326 = 79 % 9977;
21359:			exit();
21365:			31561 = 8298 | 18785;
21370:			15400 = stack.pop();
21372:	fn36:	
21383:			14714 = 24101 & 1873;
21393:			if (15998 != 0) { goto l225; }
21408:	l162:	
21419:			15011 = stack.pop();
21425:			-
21434:			-
21446:			-
21461:			if (14292 == 0) { goto l226; }
21487:			16445 = 27098;
21497:			20740 = 31013 & 8489;
21511:			exit();
21514:			mem[31044] = 8624;
21547:			9956 = 20178 + 31072;
21555:			if (27553 != 0) { goto l227; }
21578:			mem[3289] = 14252;
21589:			if (19921 == 0) { goto l228; }
21607:			11120 = (21024 > 31428) ? 1 : 0;
21621:			26438 = 3684 | 14712;
21625:			mem[2837] = 12909;
21639:			fn99();
21649:			if (25136 != 0) { goto l229; }
21675:			4769 = ~15821;
21681:			-
21683:			24548 = (1753 == 12376) ? 1 : 0;
21690:			-
21702:			std::cout << "29578";
21717:			25560 = ~3492;
21743:			return;
21753:			fn100();
21766:			fn101();
21771:			14757 = 25502 | 3556;
21777:			std::cin.get(13412);
21839:			-
21844:	l148:	
21845:			31191 = (8877 == 20320) ? 1 : 0;
21871:			mem[20535] = 31425;
21877:			21342 = 31850 | 10526;
21881:			32542 = (10274 == 21801) ? 1 : 0;
21894:			11273 = (22896 > 549) ? 1 : 0;
21905:			if (1657 != 0) { goto l230; }
21913:			24978 = (2808 > 13872) ? 1 : 0;
21946:			-
21965:			12515 = ~23632;
21973:			4057 = 15287 % 26489;
22010:			25890 = 4401 + 15740;
22022:			stack.push(29974);
22026:			mem[9566] = 20909;
22033:			22645 = 1105;
22059:			if (22248 == 0) { goto l231; }
22067:			std::cin.get(15287);
22074:			28834 = (7984 == 19388) ? 1 : 0;
22086:			std::cout << "1680";
22133:			16223 = 27241 | 6512;
22169:			5513 = (16610 > 28209) ? 1 : 0;
22187:			17058 = 29075 % 7984;
22195:			12193 = mem[23244];
22210:			if (22968 != 0) { goto l232; }
22214:			fn102();
22220:	l216:	
22265:			11542 = 23405 * 2356;
22278:			fn103();
22296:	fn77:	
22318:	fn131:	
22321:			-
22330:			-
22346:			mem[20175] = 32673;
22375:			7015 = (18474 > 30352) ? 1 : 0;
22383:			mem[4213] = 16021;
22389:			11101 = 22640 | 2407;
22393:			fn104();
22407:			31085 = (9765 == 22273) ? 1 : 0;
22425:			18839 = (30434 > 9771) ? 1 : 0;
22443:			6821 = 19411;
22451:			6070 = 17602 + 29760;
22462:			if (8624 != 0) { goto l233; }
22470:			std::cin.get(7621);
22511:			std::cin.get(16420);
22518:			mem[4465] = 16763;
22522:			return;
22535:			16692 = (29032 == 8521) ? 1 : 0;
22545:			exit();
22553:			9181 = (21421 > 560) ? 1 : 0;
22571:			1713 = mem[14041];
22598:			goto l234;
22605:			30453 = mem[10566];
22631:			27509 = (6699 > 19156) ? 1 : 0;
22646:			mem[18039] = 31101;
22663:			exit();
22681:			32135 = (11496 > 24164) ? 1 : 0;
22714:			23021 = (2864 == 15029) ? 1 : 0;
22726:			-
22733:			mem[1214] = 13887;
22759:			4962 = (17700 > 29893) ? 1 : 0;
22767:			std::cin.get(8231);
22791:			20832 = 811 & 13584;
22795:			6529 = 19356 | 32243;
22801:			if (17535 != 0) { goto l235; }
22808:	fn70:	
22827:			24240 = 4253;
22833:			-
22835:			return;
22838:			mem[2283] = 15713;
22842:			return;
22877:	l195:	
22895:			mem[20596] = 720;
22901:			854 = 13418 | 26977;
22905:			20244 = 109 % 13605;
22908:	fn46:	
22919:			6517 = 19062 + 32579;
22923:			26027 = 5775 | 19442;
22955:			if (19127 == 0) { goto l236; }
22963:			26529 = ~6337;
22970:			return;
22980:	l131:	
22991:			-
22992:			15773 = stack.pop();
22997:			16351 = ~29616;
23013:	l138:	
23023:			mem[116] = 13779;
23033:			if (2309 != 0) { goto l237; }
23046:			std::cout << "11530";
23057:			26751 = 7240;
23083:			13985 = (27293 > 8561) ? 1 : 0;
23091:			-
23100:			13225 = 26224 | 6835;
23125:			21954 = 2231 & 16237;
23161:			17181 = 30248 & 11575;
23175:			10599 = 23589 + 4953;
23185:			if (14975 != 0) { goto l238; }
23219:			mem[20404] = 705;
23221:	l130:	
23226:			fn105();
23238:			if (18304 != 0) { goto l239; }
23245:			15615 = 29205 + 10296;
23279:			std::cin.get(24614);
23285:			9540 = 23405 | 4465;
23290:			exit();
23302:			15117 = (29041 == 10021) ? 1 : 0;
23347:			17313 = ~31176;
23354:	l274:	
23366:			-
23417:			14101 = 27757 | 9515;
23430:			75 = stack.pop();
23433:			10100 = mem[23628];
23436:	fn73:	
23449:			6559 = (20223 > 1574) ? 1 : 0;
23475:			fn106();
23494:			21957 = stack.pop();
23496:	l160:	
23498:			mem[13273] = 27564;
23509:			6097 = 20406;
23535:			if (16438 != 0) { goto l240; }
23545:			fn107();
23551:			fn108();
23558:			std::cin.get(18698);
23569:			return;
23577:			29648 = (11209 > 25131) ? 1 : 0;
23622:			23176 = stack.pop();
23629:			return;
23663:			if (28705 != 0) { goto l241; }
23674:			25197 = stack.pop();
23687:			18811 = stack.pop();
23690:			mem[29278] = 11691;
23697:	fn98:	
23703:			23413 = 4700;
23731:			8164 = mem[22233];
23738:			stack.push(12719);
23754:			mem[18885] = 929;
23765:			17369 = 32162;
23791:			fn109();
23797:			32089 = 14193 | 28986;
23803:			22839 = (4989 == 19748) ? 1 : 0;
23851:			16047 = 30877;
23852:	fn37:	
23866:			fn110();
23878:			exit();
23885:			700 = (16149 == 30752) ? 1 : 0;
23893:			22997 = 4768 % 20344;
23919:			fn82();
23926:	l136:	
23930:			return;
23942:			7172 = (22904 > 4713) ? 1 : 0;
23947:			17838 = 32392 | 15331;
23953:			mem[9830] = 25436;
23985:			-
23987:			2020 = ~16600;
24010:			mem[24526] = 7077;
24013:			std::cout << "4272";
24021:			28629 = (11237 > 26491) ? 1 : 0;
24053:			26961 = 9591 | 24955;
24057:			mem[22814] = 5417;
24071:			8551 = 23845;
24081:			std::cin.get(30818);
24085:	l205:	
24113:			-
24115:			std::cout << "31716";
24122:			exit();
24134:			std::cout << "30336";
24141:			fn111();
24143:			-
24149:			1503 = stack.pop();
24181:			8007 = 23149 | 6513;
24185:			4944 = 19972 % 3428;
24199:			26932 = (9335 == 25439) ? 1 : 0;
24235:			740 = 16860 % 32560;
24262:			exit();
24271:			-
24277:			7132 = 22972;
24303:			24636 = 8156;
24325:			13585 = 29468 + 12596;
24330:			27415 = (10724 == 26546) ? 1 : 0;
24363:			28321 = 11471 + 28025;
24369:			-
24371:			-
24378:			5869 = stack.pop();
24390:			std::cout << "1161";
24403:	l257:	
24405:			if (12688 == 0) { goto l242; }
24433:	l284:	
24441:			1795 = (17517 == 1324) ? 1 : 0;
24455:			exit();
24458:			mem[13325] = 30092;
24502:			mem[5611] = 21883;
24518:			-
24525:			fn112();
24542:	l209:	
24549:	l226:	
24566:			mem[370] = 16753;
24570:			if (296 != 0) { goto l243; }
24586:			mem[324] = 16816;
24629:	l149:	
24646:			4805 = stack.pop();
24661:			23952 = 7339 % 24443;
24669:	l175:	
24679:			27514 = (10784 > 27349) ? 1 : 0;
24697:			fn113();
24711:			exit();
24721:			goto l244;
24732:			exit();
24740:			mem[27493] = 10901;
24747:			if (12962 == 0) { goto l245; }
24753:			-
24755:			16289 = mem[32397];
24760:	l144:	
24774:			7062 = (23866 > 7333) ? 1 : 0;
24778:			mem[8674] = 25514;
24789:			exit();
24825:			13596 = stack.pop();
24836:			2925 = 19716 | 3853;
24843:			22925 = 7133 | 24035;
24857:	fn85:	30623 = (14819 > 31265) ? 1 : 0;
24883:			13217 = 30175 + 13840;
24900:			7615 = 24144 % 8338;
24906:			mem[10948] = 28592;
24911:			-
24917:			if (2448 == 0) { goto l246; }
24928:			26608 = stack.pop();
24949:			25425 = 9329 | 26932;
24953:			goto l247;
24967:			exit();
24977:			std::cout << "13872";
25003:			2736 = 20378 & 4963;
25011:			10212 = 26841 + 11352;
25018:			32672 = (17190 > 1208) ? 1 : 0;
25037:			190 = 17429 + 2164;
25045:			stack.push(8130);
25071:			std::cin.get(54);
25077:			6495 = 23915 | 8500;
25081:			fn114();
25095:			24954 = (9569 == 26896) ? 1 : 0;
25131:			goto l248;
25137:			return;
25142:			mem[26340] = 11623;
25146:			if (30888 != 0) { goto l249; }
25199:			std::cin.get(12322);
25259:			25271 = 10653 & 28529;
25293:			7344 = (25178 == 10298) ? 1 : 0;
25301:			19344 = stack.pop();
25327:			mem[24692] = 10198;
25333:	fn81:	
25337:			exit();
25338:			stack.push(25406);
25350:			fn115();
25360:	fn124:	
25361:			11384 = 29276;
25369:			24468 = (9698 > 27179) ? 1 : 0;
25387:			if (20200 == 0) { goto l250; }
25393:			-
25395:			return;
25402:			28397 = stack.pop();
25414:			15557 = 1382 + 19440;
25421:			if (10980 == 0) { goto l251; }
25429:			25041 = 9910;
25455:			mem[4130] = 22228;
25468:			10799 = (29493 > 14453) ? 1 : 0;
25483:			return;
25515:			stack.push(15076);
25521:			-
25523:	l196:	-
25530:			27629 = stack.pop();
25542:			std::cout << "17805";
25575:			892 = (19242 > 4293) ? 1 : 0;
25583:			goto l252;
25590:			mem[14698] = 353;
25593:			fn116();
25597:			std::cin.get(12598);
25606:			-
25617:			fn117();
25651:			27626 = ~13187;
25658:			fn118();
25666:			if (10424 != 0) { goto l253; }
25670:			stack.push(19072);
25685:			3541 = (21733 > 8057) ? 1 : 0;
25717:			10079 = 28272 | 14688;
25722:			4645 = (23841 == 9341) ? 1 : 0;
25735:			fn119();
25745:			8828 = mem[27992];
25751:			23348 = 8786 & 28057;
25779:			24481 = mem[9869];
25780:	fn118:	
25786:			-
25798:			std::cin.get(21395);
25816:	l165:	
25839:			8308 = (27612 > 13796) ? 1 : 0;
25849:			stack.push(1305);
25856:			std::cout << "2874";
25862:			18182 = (4479 > 23332) ? 1 : 0;
25866:			28492 = (14758 == 926) ? 1 : 0;
25873:			return;
25918:			1218 = 20784 * 7095;
25951:			fn120();
25960:			mem[17457] = 3793;
25967:			if (20539 != 0) { goto l254; }
25974:			mem[23557] = 10516;
25992:			std::cin.get(8709);
26002:			mem[4925] = 23748;
26017:			std::cout << "31657";
26042:			stack.push(22434);
26058:			mem[4034] = 23466;
26069:			stack.push(20418);
26087:			9013 = (28523 > 14480) ? 1 : 0;
26119:			8563 = 27941 % 14623;
26161:			-
26163:			fn121();
26174:			701 = (20785 == 7669) ? 1 : 0;
26182:			-
26189:			-
26191:			-
26201:	l199:	
26229:			32598 = 19040 | 6513;
26233:			fn122();
26238:			12861 = (305 == 19573) ? 1 : 0;
26246:			6656 = stack.pop();
26251:			7600 = 26770 | 14256;
26257:			27184 = 14677;
26291:			fn123();
26302:			957 = (20785 == 7413) ? 1 : 0;
26310:			28557 = stack.pop();
26317:			3249 = ~23103;
26325:			std::cin.get(31711);
26351:			if (24696 != 0) { goto l255; }
26358:			mem[875] = 20833;
26361:			if (27922 == 0) { goto l256; }
26374:			fn124();
26377:	fn101:	
26378:			mem[6985] = 27051;
26411:			11956 = 31954 & 19810;
26445:			std::cout << "6885";
26448:	fn104:	
26453:			4496 = stack.pop();
26460:	l225:	
26485:			27408 = 14417 | 2428;
26489:			exit();
26502:			fn125();
26513:			if (3685 != 0) { goto l257; }
26521:			2512 = (22212 > 9776) ? 1 : 0;
26547:			6071 = 25741 | 13407;
26570:			mem[15307] = 2984;
26573:			return;
26575:			-
26581:			10196 = stack.pop();
26620:			20777 = 8560 | 28979;
26631:			return;
26641:			exit();
26649:			25491 = (13281 > 557) ? 1 : 0;
26672:	l188:	
26694:			-
26701:			return;
26703:			-
26709:			15825 = (3243 > 24432) ? 1 : 0;
26715:			if (8270 != 0) { goto l258; }
26735:			mem[28710] = 16611;
26742:			mem[9847] = 31099;
26745:			6941 = 27233 * 15716;
26758:			goto l259;
26769:			exit();
26788:			15225 = 2768 | 24023;
26810:			14782 = (2916 == 23213) ? 1 : 0;
26824:			11473 = ~32344;
26829:			17649 = 5696 % 26680;
26837:			stack.push(21442);
26841:	l146:	
26853:			29308 = 23788 & 3726;
26860:			exit();
26894:			return;
26895:			32252 = (12264 > 6643) ? 1 : 0;
26903:	l90:	
26904:			19511 = stack.pop();
26909:			mem[24274] = 10540;
26930:			8575 = 31471 + 19596;
26936:			-
26940:			23007 = 9066 | 30176;
26959:			28957 = mem[17329];
26962:			return;
26969:	l278:	
26971:			if (30763 == 0) { goto l260; }
26999:			18655 = 7092;
27006:			if (9500 == 0) { goto l261; }
27015:			if (4189 != 0) { goto l262; }
27041:			std::cin.get(665);
27059:			goto l263;
27090:			std::cin.get(2850);
27099:			std::cin.get(30043);
27103:			-
27117:	l91:	
27127:			2794 = (30052 == 16606) ? 1 : 0;
27137:	l262:	
27156:	fn16:	
27166:			goto l264;
27180:			-
27227:			6739 = (25758 > 258) ? 1 : 0;
27235:			15431 = 2702;
27282:			std::cout << "28212";
27297:			fn126();
27300:			3933 = ~8948;
27311:			if (30800 != 0) { goto l265; }
27319:			25734 = 30950 + 17494;
27328:			fn127();
27338:			exit();
27355:			26803 = 924 & 21442;
27386:			6605 = 25536 & 13781;
27420:			goto l266;
27427:	l167:	
27429:			exit();
27432:			stack.push(20214);
27474:			3056 = 9409 + 23909;
27489:			26911 = ~4231;
27493:			goto l267;
27543:			26397 = 19488;
27553:			if (24468 == 0) { goto l268; }
27557:			goto l269;
27563:	l292:	
27566:			19696 = 5213 & 32056;
27582:			std::cin.get(13790);
27592:			11969 = 30323 + 24485;
27599:	l157:	
27600:			28130 = 13569 & 699;
27616:			mem[22160] = 16071;
27620:			if (14213 != 0) { goto l270; }
27625:			31927 = 17633;
27630:			goto l271;
27639:			exit();
27644:			exit();
27656:			exit();
27657:			32055 = (17696 == 11718) ? 1 : 0;
27672:			5985 = (32761 > 18312) ? 1 : 0;
27685:			exit();
27694:			goto l272;
27720:			8578 = (2108 > 20713) ? 1 : 0;
27739:			goto l273;
27752:			stack.push(20036);
27767:			return;
27768:			23650 = (10108 > 3593) ? 1 : 0;
27774:			std::cin.get(27158);
27780:			if (28672 != 0) { goto l274; }
27783:			1305 = 27663 % 14114;
27792:			mem[10082] = 3601;
27812:			exit();
27813:			mem[30459] = 22964;
27816:			stack.push(2689);
27832:			-
27836:			if (3792 != 0) { goto l275; }
27850:			26022 = 20437 | 4409;
27867:			20557 = 15303 & 7571;
27881:			goto l276;
27895:			stack.push(15643);
27899:			if (5418 != 0) { goto l277; }
27906:			std::cin.get(793);
27912:			stack.push(9998);
27915:	l281:	
27937:			std::cin.get(30170);
27950:			-
27952:			mem[20086] = 4240;
27972:			exit();
27976:			13249 = (5177 > 32424) ? 1 : 0;
27986:			stack.push(17848);
27992:			stack.push(26081);
27999:			goto l278;
28006:	l173:	
28008:			6145 = 25269 + 18407;
28014:			exit();
28024:			20082 = (4977 > 29705) ? 1 : 0;
28033:			31507 = mem[23575];
28040:			stack.push(20244);
28050:			15911 = 24989;
28056:			2357 = ~11502;
28060:			fn128();
28072:			8091 = (29373 > 22118) ? 1 : 0;
28098:			25512 = 16230;
28105:			if (21424 != 0) { goto l279; }
28108:			stack.push(18152);
28125:			std::cout << "15428";
28129:			19280 = (26527 == 974) ? 1 : 0;
28135:			if (12090 != 0) { goto l280; }
28142:			10277 = 3159 + 20962;
28151:			goto l281;
28158:			if (26971 != 0) { goto l282; }
28163:			15683 = 347 * 25956;
28170:			fn129();
28178:			-
28184:			18219 = 25531 | 3982;
28189:			29339 = 7818;
28203:			5851 = 20879 & 29204;
28225:	l263:	
28232:			12939 = 20341 * 27596;
28242:			9130 = ~1746;
28255:			26954 = 19911 % 4301;
28259:			23062 = 16016 + 7660;
28270:			if (22823 != 0) { goto l283; }
28279:			exit();
28280:			if (30830 != 0) { goto l284; }
28283:			std::cout << "278";
28288:			goto l285;
28292:			23605 = 8968 & 1591;
28305:			fn130();
28310:	l264:	
28312:			fn131();
28317:			if (10715 != 0) { goto l286; }
28325:			5101 = 28907 * 19995;
28331:	l242:	
28346:			std::cin.get(32216);
28361:			std::cout << "14245";
28366:			3041 = ~27044;
28376:			32694 = 23975 | 8963;
28383:			fn132();
28392:			23644 = 8608 * 1978;
28407:			9474 = mem[23422];
28417:			2318 = (12035 > 19818) ? 1 : 0;
28424:			31499 = 6461 % 16243;
28432:			2680 = 10241 * 20014;
28440:			1343 = (15278 == 22940) ? 1 : 0;
28447:	l247:	
28449:			13713 = ~27625;
28456:			goto l287;
28480:			std::cout << "16349";
28484:			14730 = 5687 | 29899;
28488:			if (13250 != 0) { goto l288; }
28515:			7772 = (31961 > 24044) ? 1 : 0;
28526:			stack.push(13160);
28535:			2312 = (26232 > 18282) ? 1 : 0;
28540:			mem[25181] = 17227;
28543:			336 = 24148;
28547:			32068 = 23121 + 15201;
28552:			22040 = mem[14120];
28560:			exit();
28562:			3899 = 27843 | 19949;
28577:			3549 = (11972 == 20036) ? 1 : 0;
28592:			5958 = stack.pop();
28616:			29057 = 20852 & 12493;
28628:	l207:	
28635:			22613 = 14793 % 6611;
28639:			22849 = 16021 + 7812;
28654:			mem[31849] = 23621;
28690:			goto l289;
28701:			stack.push(6084);
28705:			4293 = stack.pop();
28708:			mem[12669] = 1202;
28722:			21409 = 29516 + 4921;
28737:			10380 = (18517 > 27600) ? 1 : 0;
28745:			11433 = 19569 % 28505;
28750:			exit();
28777:			if (2703 != 0) { goto l290; }
28782:			12670 = 20490;
28791:			22786 = mem[30846];
28799:			8521 = 16452 % 25415;
28805:			std::cout << "26487";
28816:			21352 = 29186 * 5418;
28826:	l258:	
28829:			16587 = 25547 % 1348;
28833:			18396 = (26263 == 2130) ? 1 : 0;
28840:			11977 = (20960 > 29465) ? 1 : 0;
28845:			15041 = 7031 | 30161;
28850:			exit();
28878:			19374 = ~9664;
28881:	l197:	
28897:			2895 = 25992 | 18319;
28902:			31988 = 24261 % 14486;
28906:			std::cin.get(31602);
28914:			return;
28942:			stack.push(12843);
28949:	fn107:	
28955:			14279 = 4483 & 29506;
28959:			18646 = 10903;
28962:			exit();
28978:			7340 = (32321 == 22579) ? 1 : 0;
29004:			-
29006:			23205 = (13783 == 6007) ? 1 : 0;
29010:	l238:	
29032:			19017 = 10419 * 13796;
29047:			exit();
29048:	l211:	
29064:			fn133();
29080:			mem[31270] = 18426;
29093:			stack.push(24824);
29102:			25329 = 20047 + 11065;
29112:			fn134();
29113:	fn69:	
29138:			25791 = (16604 == 11296) ? 1 : 0;
29160:			fn135();
29166:			std::cout << "19000";
29175:			30482 = 21286 % 16189;
29179:			exit();
29187:			mem[1882] = 25413;
29192:			4936 = 32553 * 23343;
29207:			if (29976 == 0) { goto l291; }
29213:			11484 = stack.pop();
29220:			28180 = 19189 + 22189;
29230:			-
29260:			std::cout << "13560";
29262:			goto l292;
29271:			return;
29277:			17730 = 8386 | 15316;
29281:			29268 = stack.pop();
29285:			7975 = 31411 + 21908;
29292:			std::cout << "24042";
29298:			std::cout << "k";
29326:			13355 = 3793;
29332:			std::cout << "5501";
29343:			31619 = 22160 & 12610;
29347:			26335 = 16787 % 23667;
29362:			30447 = 20816;
29388:			std::cout << "10237";
29390:			stack.push(7331);
29403:			8258 = 8093 & 30147;
29407:			18753 = 9346 + 654;
29416:			return;
29421:	fn86:	
29441:			if (16715 != 0) { goto l293; }
29448:			6914 = 28976 + 28543;
29457:			8296 = 7791 | 29846;
29464:			-
29465:	l251:	
29469:			31440 = 20614 | 18770;
29473:			7629 = ~31617;
29480:			20948 = stack.pop();
29514:			31408 = 21442 & 18535;
29522:			if (8611 != 0) { goto l294; }
29528:			6578 = stack.pop();
29531:			17430 = 8859 & 7117;
29533:	l280:	
29540:	l253:	
29595:			std::cin.get(13522);
29599:			stack.push(6087);
29602:			27138 = ~29396;
29627:			std::cout << "16841";
29631:			9163 = 17419 % 27870;
29646:			goto l295;
29648:	l153:	
29655:			-
29658:			20179 = (22170 == 32579) ? 1 : 0;
29662:			23830 = ~14623;
29682:			29025 = ~26970;
29710:			stack.push(20773);
29727:			if (19907 == 0) { goto l296; }
29731:			exit();
29746:			3068 = 25438 & 23355;
29751:			stack.push(1410);
29778:			21672 = (15820 > 8824) ? 1 : 0;
29784:			return;
29800:			exit();
29815:			32349 = 26402 + 19511;
29828:			19210 = stack.pop();
29833:			23608 = ~17701;
29842:			return;
29853:			if (6104 == 0) { goto l297; }
29860:			29715 = stack.pop();
29864:			4482 = 1713;
29878:	l228:	
29896:			exit();
29897:	l223:	
29904:			std::cout << "5360";
29906:			return;
29920:			std::cout << "11142";
29924:			21127 = stack.pop();
29928:			31309 = 25509;
29936:			std::cout << "19617";
29944:			19490 = 17687 | 4613;
29948:			15940 = ~20569;
29957:			if (115 != 0) { goto l298; }
29961:			22578 = 29222 & 1244;
29970:			-
29976:			8303 = 15100 & 19592;
29981:			return;
29986:	l289:	
30008:			23215 = 28018 % 1990;
30034:			1215 = ~8139;
30043:			stack.push(17728);
