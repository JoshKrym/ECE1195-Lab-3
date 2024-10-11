/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
typedef void (*funcp)(char *, char *);
extern void execute_2(char*, char *);
extern void execute_3(char*, char *);
extern void execute_4(char*, char *);
extern void execute_5(char*, char *);
extern void execute_6(char*, char *);
extern void execute_7(char*, char *);
extern void execute_8(char*, char *);
extern void execute_9(char*, char *);
extern void execute_22(char*, char *);
extern void execute_23(char*, char *);
extern void execute_24(char*, char *);
extern void execute_1863(char*, char *);
extern void execute_26(char*, char *);
extern void execute_30(char*, char *);
extern void execute_32(char*, char *);
extern void execute_35(char*, char *);
extern void execute_37(char*, char *);
extern void execute_40(char*, char *);
extern void execute_42(char*, char *);
extern void execute_45(char*, char *);
extern void execute_47(char*, char *);
extern void execute_50(char*, char *);
extern void execute_52(char*, char *);
extern void execute_55(char*, char *);
extern void execute_57(char*, char *);
extern void execute_60(char*, char *);
extern void execute_62(char*, char *);
extern void execute_65(char*, char *);
extern void execute_67(char*, char *);
extern void execute_70(char*, char *);
extern void execute_72(char*, char *);
extern void execute_75(char*, char *);
extern void execute_77(char*, char *);
extern void execute_80(char*, char *);
extern void execute_82(char*, char *);
extern void execute_85(char*, char *);
extern void execute_87(char*, char *);
extern void execute_90(char*, char *);
extern void execute_92(char*, char *);
extern void execute_95(char*, char *);
extern void execute_97(char*, char *);
extern void execute_100(char*, char *);
extern void execute_102(char*, char *);
extern void execute_105(char*, char *);
extern void execute_107(char*, char *);
extern void execute_110(char*, char *);
extern void execute_112(char*, char *);
extern void execute_115(char*, char *);
extern void execute_117(char*, char *);
extern void execute_120(char*, char *);
extern void execute_122(char*, char *);
extern void execute_125(char*, char *);
extern void execute_127(char*, char *);
extern void execute_130(char*, char *);
extern void execute_132(char*, char *);
extern void execute_135(char*, char *);
extern void execute_137(char*, char *);
extern void execute_140(char*, char *);
extern void execute_142(char*, char *);
extern void execute_145(char*, char *);
extern void execute_147(char*, char *);
extern void execute_150(char*, char *);
extern void execute_152(char*, char *);
extern void execute_155(char*, char *);
extern void execute_157(char*, char *);
extern void execute_160(char*, char *);
extern void execute_162(char*, char *);
extern void execute_165(char*, char *);
extern void execute_167(char*, char *);
extern void execute_170(char*, char *);
extern void execute_172(char*, char *);
extern void execute_175(char*, char *);
extern void execute_177(char*, char *);
extern void execute_180(char*, char *);
extern void execute_182(char*, char *);
extern void execute_185(char*, char *);
extern void execute_187(char*, char *);
extern void execute_190(char*, char *);
extern void execute_192(char*, char *);
extern void execute_195(char*, char *);
extern void execute_197(char*, char *);
extern void execute_200(char*, char *);
extern void execute_202(char*, char *);
extern void execute_205(char*, char *);
extern void execute_207(char*, char *);
extern void execute_210(char*, char *);
extern void execute_212(char*, char *);
extern void execute_215(char*, char *);
extern void execute_217(char*, char *);
extern void execute_220(char*, char *);
extern void execute_222(char*, char *);
extern void execute_225(char*, char *);
extern void execute_227(char*, char *);
extern void execute_230(char*, char *);
extern void execute_232(char*, char *);
extern void execute_235(char*, char *);
extern void execute_237(char*, char *);
extern void execute_240(char*, char *);
extern void execute_242(char*, char *);
extern void execute_245(char*, char *);
extern void execute_247(char*, char *);
extern void execute_250(char*, char *);
extern void execute_252(char*, char *);
extern void execute_255(char*, char *);
extern void execute_257(char*, char *);
extern void execute_260(char*, char *);
extern void execute_262(char*, char *);
extern void execute_265(char*, char *);
extern void execute_267(char*, char *);
extern void execute_270(char*, char *);
extern void execute_272(char*, char *);
extern void execute_275(char*, char *);
extern void execute_277(char*, char *);
extern void execute_280(char*, char *);
extern void execute_282(char*, char *);
extern void execute_285(char*, char *);
extern void execute_287(char*, char *);
extern void execute_290(char*, char *);
extern void execute_292(char*, char *);
extern void execute_295(char*, char *);
extern void execute_297(char*, char *);
extern void execute_300(char*, char *);
extern void execute_302(char*, char *);
extern void execute_305(char*, char *);
extern void execute_307(char*, char *);
extern void execute_310(char*, char *);
extern void execute_312(char*, char *);
extern void execute_315(char*, char *);
extern void execute_317(char*, char *);
extern void execute_320(char*, char *);
extern void execute_322(char*, char *);
extern void execute_325(char*, char *);
extern void execute_327(char*, char *);
extern void execute_330(char*, char *);
extern void execute_332(char*, char *);
extern void execute_335(char*, char *);
extern void execute_337(char*, char *);
extern void execute_340(char*, char *);
extern void execute_342(char*, char *);
extern void execute_345(char*, char *);
extern void execute_29(char*, char *);
extern void execute_475(char*, char *);
extern void execute_476(char*, char *);
extern void execute_927(char*, char *);
extern void execute_349(char*, char *);
extern void execute_351(char*, char *);
extern void execute_353(char*, char *);
extern void execute_355(char*, char *);
extern void execute_357(char*, char *);
extern void execute_359(char*, char *);
extern void execute_361(char*, char *);
extern void execute_363(char*, char *);
extern void execute_365(char*, char *);
extern void execute_367(char*, char *);
extern void execute_369(char*, char *);
extern void execute_371(char*, char *);
extern void execute_373(char*, char *);
extern void execute_375(char*, char *);
extern void execute_377(char*, char *);
extern void execute_379(char*, char *);
extern void execute_381(char*, char *);
extern void execute_383(char*, char *);
extern void execute_385(char*, char *);
extern void execute_387(char*, char *);
extern void execute_389(char*, char *);
extern void execute_391(char*, char *);
extern void execute_393(char*, char *);
extern void execute_395(char*, char *);
extern void execute_397(char*, char *);
extern void execute_399(char*, char *);
extern void execute_401(char*, char *);
extern void execute_403(char*, char *);
extern void execute_405(char*, char *);
extern void execute_407(char*, char *);
extern void execute_409(char*, char *);
extern void execute_411(char*, char *);
extern void execute_413(char*, char *);
extern void execute_415(char*, char *);
extern void execute_417(char*, char *);
extern void execute_419(char*, char *);
extern void execute_421(char*, char *);
extern void execute_423(char*, char *);
extern void execute_425(char*, char *);
extern void execute_427(char*, char *);
extern void execute_429(char*, char *);
extern void execute_431(char*, char *);
extern void execute_433(char*, char *);
extern void execute_435(char*, char *);
extern void execute_437(char*, char *);
extern void execute_439(char*, char *);
extern void execute_441(char*, char *);
extern void execute_443(char*, char *);
extern void execute_445(char*, char *);
extern void execute_447(char*, char *);
extern void execute_449(char*, char *);
extern void execute_451(char*, char *);
extern void execute_453(char*, char *);
extern void execute_455(char*, char *);
extern void execute_457(char*, char *);
extern void execute_459(char*, char *);
extern void execute_461(char*, char *);
extern void execute_463(char*, char *);
extern void execute_465(char*, char *);
extern void execute_467(char*, char *);
extern void execute_469(char*, char *);
extern void execute_471(char*, char *);
extern void execute_473(char*, char *);
extern void execute_926(char*, char *);
extern void execute_479(char*, char *);
extern void execute_480(char*, char *);
extern void execute_481(char*, char *);
extern void execute_482(char*, char *);
extern void execute_483(char*, char *);
extern void execute_1379(char*, char *);
extern void execute_1382(char*, char *);
extern void execute_1384(char*, char *);
extern void execute_1387(char*, char *);
extern void execute_1389(char*, char *);
extern void execute_1392(char*, char *);
extern void execute_1394(char*, char *);
extern void execute_1397(char*, char *);
extern void execute_1399(char*, char *);
extern void execute_1402(char*, char *);
extern void execute_1404(char*, char *);
extern void execute_1407(char*, char *);
extern void execute_1409(char*, char *);
extern void execute_1412(char*, char *);
extern void execute_1414(char*, char *);
extern void execute_1417(char*, char *);
extern void execute_1419(char*, char *);
extern void execute_1422(char*, char *);
extern void execute_1424(char*, char *);
extern void execute_1427(char*, char *);
extern void execute_1429(char*, char *);
extern void execute_1432(char*, char *);
extern void execute_1434(char*, char *);
extern void execute_1437(char*, char *);
extern void execute_1439(char*, char *);
extern void execute_1442(char*, char *);
extern void execute_1444(char*, char *);
extern void execute_1447(char*, char *);
extern void execute_1449(char*, char *);
extern void execute_1452(char*, char *);
extern void execute_1454(char*, char *);
extern void execute_1457(char*, char *);
extern void execute_1459(char*, char *);
extern void execute_1462(char*, char *);
extern void execute_1464(char*, char *);
extern void execute_1467(char*, char *);
extern void execute_1469(char*, char *);
extern void execute_1472(char*, char *);
extern void execute_1474(char*, char *);
extern void execute_1477(char*, char *);
extern void execute_1479(char*, char *);
extern void execute_1482(char*, char *);
extern void execute_1484(char*, char *);
extern void execute_1487(char*, char *);
extern void execute_1489(char*, char *);
extern void execute_1492(char*, char *);
extern void execute_1494(char*, char *);
extern void execute_1497(char*, char *);
extern void execute_1499(char*, char *);
extern void execute_1502(char*, char *);
extern void execute_1504(char*, char *);
extern void execute_1507(char*, char *);
extern void execute_1509(char*, char *);
extern void execute_1512(char*, char *);
extern void execute_1514(char*, char *);
extern void execute_1517(char*, char *);
extern void execute_1519(char*, char *);
extern void execute_1522(char*, char *);
extern void execute_1524(char*, char *);
extern void execute_1527(char*, char *);
extern void execute_1529(char*, char *);
extern void execute_1532(char*, char *);
extern void execute_1534(char*, char *);
extern void execute_1537(char*, char *);
extern void execute_1539(char*, char *);
extern void execute_1542(char*, char *);
extern void execute_1544(char*, char *);
extern void execute_1547(char*, char *);
extern void execute_1549(char*, char *);
extern void execute_1552(char*, char *);
extern void execute_1554(char*, char *);
extern void execute_1557(char*, char *);
extern void execute_1559(char*, char *);
extern void execute_1562(char*, char *);
extern void execute_1564(char*, char *);
extern void execute_1567(char*, char *);
extern void execute_1569(char*, char *);
extern void execute_1572(char*, char *);
extern void execute_1574(char*, char *);
extern void execute_1577(char*, char *);
extern void execute_1579(char*, char *);
extern void execute_1582(char*, char *);
extern void execute_1584(char*, char *);
extern void execute_1587(char*, char *);
extern void execute_1589(char*, char *);
extern void execute_1592(char*, char *);
extern void execute_1594(char*, char *);
extern void execute_1597(char*, char *);
extern void execute_1599(char*, char *);
extern void execute_1602(char*, char *);
extern void execute_1604(char*, char *);
extern void execute_1607(char*, char *);
extern void execute_1609(char*, char *);
extern void execute_1612(char*, char *);
extern void execute_1614(char*, char *);
extern void execute_1617(char*, char *);
extern void execute_1619(char*, char *);
extern void execute_1622(char*, char *);
extern void execute_1624(char*, char *);
extern void execute_1627(char*, char *);
extern void execute_1629(char*, char *);
extern void execute_1632(char*, char *);
extern void execute_1634(char*, char *);
extern void execute_1637(char*, char *);
extern void execute_1639(char*, char *);
extern void execute_1642(char*, char *);
extern void execute_1644(char*, char *);
extern void execute_1647(char*, char *);
extern void execute_1649(char*, char *);
extern void execute_1652(char*, char *);
extern void execute_1654(char*, char *);
extern void execute_1657(char*, char *);
extern void execute_1659(char*, char *);
extern void execute_1662(char*, char *);
extern void execute_1664(char*, char *);
extern void execute_1667(char*, char *);
extern void execute_1669(char*, char *);
extern void execute_1672(char*, char *);
extern void execute_1674(char*, char *);
extern void execute_1677(char*, char *);
extern void execute_1679(char*, char *);
extern void execute_1682(char*, char *);
extern void execute_1684(char*, char *);
extern void execute_1687(char*, char *);
extern void execute_1689(char*, char *);
extern void execute_1692(char*, char *);
extern void execute_1694(char*, char *);
extern void execute_1697(char*, char *);
extern void execute_1700(char*, char *);
extern void execute_1701(char*, char *);
extern void execute_1703(char*, char *);
extern void execute_1706(char*, char *);
extern void execute_1708(char*, char *);
extern void execute_1711(char*, char *);
extern void execute_1713(char*, char *);
extern void execute_1716(char*, char *);
extern void execute_1718(char*, char *);
extern void execute_1721(char*, char *);
extern void execute_1723(char*, char *);
extern void execute_1726(char*, char *);
extern void execute_1728(char*, char *);
extern void execute_1731(char*, char *);
extern void execute_1733(char*, char *);
extern void execute_1736(char*, char *);
extern void execute_1738(char*, char *);
extern void execute_1741(char*, char *);
extern void execute_1743(char*, char *);
extern void execute_1746(char*, char *);
extern void execute_1748(char*, char *);
extern void execute_1751(char*, char *);
extern void execute_1753(char*, char *);
extern void execute_1756(char*, char *);
extern void execute_1758(char*, char *);
extern void execute_1761(char*, char *);
extern void execute_1763(char*, char *);
extern void execute_1766(char*, char *);
extern void execute_1768(char*, char *);
extern void execute_1771(char*, char *);
extern void execute_1773(char*, char *);
extern void execute_1776(char*, char *);
extern void execute_1778(char*, char *);
extern void execute_1781(char*, char *);
extern void execute_1783(char*, char *);
extern void execute_1786(char*, char *);
extern void execute_1788(char*, char *);
extern void execute_1791(char*, char *);
extern void execute_1793(char*, char *);
extern void execute_1796(char*, char *);
extern void execute_1798(char*, char *);
extern void execute_1801(char*, char *);
extern void execute_1803(char*, char *);
extern void execute_1806(char*, char *);
extern void execute_1808(char*, char *);
extern void execute_1811(char*, char *);
extern void execute_1813(char*, char *);
extern void execute_1816(char*, char *);
extern void execute_1818(char*, char *);
extern void execute_1821(char*, char *);
extern void execute_1823(char*, char *);
extern void execute_1826(char*, char *);
extern void execute_1828(char*, char *);
extern void execute_1831(char*, char *);
extern void execute_1833(char*, char *);
extern void execute_1836(char*, char *);
extern void execute_1838(char*, char *);
extern void execute_1841(char*, char *);
extern void execute_1843(char*, char *);
extern void execute_1846(char*, char *);
extern void execute_1848(char*, char *);
extern void execute_1851(char*, char *);
extern void execute_1853(char*, char *);
extern void execute_1856(char*, char *);
extern void execute_1858(char*, char *);
extern void execute_1861(char*, char *);
extern void vlog_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
extern void transaction_34(char*, char*, unsigned, unsigned, unsigned);
extern void vhdl_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
funcp funcTab[410] = {(funcp)execute_2, (funcp)execute_3, (funcp)execute_4, (funcp)execute_5, (funcp)execute_6, (funcp)execute_7, (funcp)execute_8, (funcp)execute_9, (funcp)execute_22, (funcp)execute_23, (funcp)execute_24, (funcp)execute_1863, (funcp)execute_26, (funcp)execute_30, (funcp)execute_32, (funcp)execute_35, (funcp)execute_37, (funcp)execute_40, (funcp)execute_42, (funcp)execute_45, (funcp)execute_47, (funcp)execute_50, (funcp)execute_52, (funcp)execute_55, (funcp)execute_57, (funcp)execute_60, (funcp)execute_62, (funcp)execute_65, (funcp)execute_67, (funcp)execute_70, (funcp)execute_72, (funcp)execute_75, (funcp)execute_77, (funcp)execute_80, (funcp)execute_82, (funcp)execute_85, (funcp)execute_87, (funcp)execute_90, (funcp)execute_92, (funcp)execute_95, (funcp)execute_97, (funcp)execute_100, (funcp)execute_102, (funcp)execute_105, (funcp)execute_107, (funcp)execute_110, (funcp)execute_112, (funcp)execute_115, (funcp)execute_117, (funcp)execute_120, (funcp)execute_122, (funcp)execute_125, (funcp)execute_127, (funcp)execute_130, (funcp)execute_132, (funcp)execute_135, (funcp)execute_137, (funcp)execute_140, (funcp)execute_142, (funcp)execute_145, (funcp)execute_147, (funcp)execute_150, (funcp)execute_152, (funcp)execute_155, (funcp)execute_157, (funcp)execute_160, (funcp)execute_162, (funcp)execute_165, (funcp)execute_167, (funcp)execute_170, (funcp)execute_172, (funcp)execute_175, (funcp)execute_177, (funcp)execute_180, (funcp)execute_182, (funcp)execute_185, (funcp)execute_187, (funcp)execute_190, (funcp)execute_192, (funcp)execute_195, (funcp)execute_197, (funcp)execute_200, (funcp)execute_202, (funcp)execute_205, (funcp)execute_207, (funcp)execute_210, (funcp)execute_212, (funcp)execute_215, (funcp)execute_217, (funcp)execute_220, (funcp)execute_222, (funcp)execute_225, (funcp)execute_227, (funcp)execute_230, (funcp)execute_232, (funcp)execute_235, (funcp)execute_237, (funcp)execute_240, (funcp)execute_242, (funcp)execute_245, (funcp)execute_247, (funcp)execute_250, (funcp)execute_252, (funcp)execute_255, (funcp)execute_257, (funcp)execute_260, (funcp)execute_262, (funcp)execute_265, (funcp)execute_267, (funcp)execute_270, (funcp)execute_272, (funcp)execute_275, (funcp)execute_277, (funcp)execute_280, (funcp)execute_282, (funcp)execute_285, (funcp)execute_287, (funcp)execute_290, (funcp)execute_292, (funcp)execute_295, (funcp)execute_297, (funcp)execute_300, (funcp)execute_302, (funcp)execute_305, (funcp)execute_307, (funcp)execute_310, (funcp)execute_312, (funcp)execute_315, (funcp)execute_317, (funcp)execute_320, (funcp)execute_322, (funcp)execute_325, (funcp)execute_327, (funcp)execute_330, (funcp)execute_332, (funcp)execute_335, (funcp)execute_337, (funcp)execute_340, (funcp)execute_342, (funcp)execute_345, (funcp)execute_29, (funcp)execute_475, (funcp)execute_476, (funcp)execute_927, (funcp)execute_349, (funcp)execute_351, (funcp)execute_353, (funcp)execute_355, (funcp)execute_357, (funcp)execute_359, (funcp)execute_361, (funcp)execute_363, (funcp)execute_365, (funcp)execute_367, (funcp)execute_369, (funcp)execute_371, (funcp)execute_373, (funcp)execute_375, (funcp)execute_377, (funcp)execute_379, (funcp)execute_381, (funcp)execute_383, (funcp)execute_385, (funcp)execute_387, (funcp)execute_389, (funcp)execute_391, (funcp)execute_393, (funcp)execute_395, (funcp)execute_397, (funcp)execute_399, (funcp)execute_401, (funcp)execute_403, (funcp)execute_405, (funcp)execute_407, (funcp)execute_409, (funcp)execute_411, (funcp)execute_413, (funcp)execute_415, (funcp)execute_417, (funcp)execute_419, (funcp)execute_421, (funcp)execute_423, (funcp)execute_425, (funcp)execute_427, (funcp)execute_429, (funcp)execute_431, (funcp)execute_433, (funcp)execute_435, (funcp)execute_437, (funcp)execute_439, (funcp)execute_441, (funcp)execute_443, (funcp)execute_445, (funcp)execute_447, (funcp)execute_449, (funcp)execute_451, (funcp)execute_453, (funcp)execute_455, (funcp)execute_457, (funcp)execute_459, (funcp)execute_461, (funcp)execute_463, (funcp)execute_465, (funcp)execute_467, (funcp)execute_469, (funcp)execute_471, (funcp)execute_473, (funcp)execute_926, (funcp)execute_479, (funcp)execute_480, (funcp)execute_481, (funcp)execute_482, (funcp)execute_483, (funcp)execute_1379, (funcp)execute_1382, (funcp)execute_1384, (funcp)execute_1387, (funcp)execute_1389, (funcp)execute_1392, (funcp)execute_1394, (funcp)execute_1397, (funcp)execute_1399, (funcp)execute_1402, (funcp)execute_1404, (funcp)execute_1407, (funcp)execute_1409, (funcp)execute_1412, (funcp)execute_1414, (funcp)execute_1417, (funcp)execute_1419, (funcp)execute_1422, (funcp)execute_1424, (funcp)execute_1427, (funcp)execute_1429, (funcp)execute_1432, (funcp)execute_1434, (funcp)execute_1437, (funcp)execute_1439, (funcp)execute_1442, (funcp)execute_1444, (funcp)execute_1447, (funcp)execute_1449, (funcp)execute_1452, (funcp)execute_1454, (funcp)execute_1457, (funcp)execute_1459, (funcp)execute_1462, (funcp)execute_1464, (funcp)execute_1467, (funcp)execute_1469, (funcp)execute_1472, (funcp)execute_1474, (funcp)execute_1477, (funcp)execute_1479, (funcp)execute_1482, (funcp)execute_1484, (funcp)execute_1487, (funcp)execute_1489, (funcp)execute_1492, (funcp)execute_1494, (funcp)execute_1497, (funcp)execute_1499, (funcp)execute_1502, (funcp)execute_1504, (funcp)execute_1507, (funcp)execute_1509, (funcp)execute_1512, (funcp)execute_1514, (funcp)execute_1517, (funcp)execute_1519, (funcp)execute_1522, (funcp)execute_1524, (funcp)execute_1527, (funcp)execute_1529, (funcp)execute_1532, (funcp)execute_1534, (funcp)execute_1537, (funcp)execute_1539, (funcp)execute_1542, (funcp)execute_1544, (funcp)execute_1547, (funcp)execute_1549, (funcp)execute_1552, (funcp)execute_1554, (funcp)execute_1557, (funcp)execute_1559, (funcp)execute_1562, (funcp)execute_1564, (funcp)execute_1567, (funcp)execute_1569, (funcp)execute_1572, (funcp)execute_1574, (funcp)execute_1577, (funcp)execute_1579, (funcp)execute_1582, (funcp)execute_1584, (funcp)execute_1587, (funcp)execute_1589, (funcp)execute_1592, (funcp)execute_1594, (funcp)execute_1597, (funcp)execute_1599, (funcp)execute_1602, (funcp)execute_1604, (funcp)execute_1607, (funcp)execute_1609, (funcp)execute_1612, (funcp)execute_1614, (funcp)execute_1617, (funcp)execute_1619, (funcp)execute_1622, (funcp)execute_1624, (funcp)execute_1627, (funcp)execute_1629, (funcp)execute_1632, (funcp)execute_1634, (funcp)execute_1637, (funcp)execute_1639, (funcp)execute_1642, (funcp)execute_1644, (funcp)execute_1647, (funcp)execute_1649, (funcp)execute_1652, (funcp)execute_1654, (funcp)execute_1657, (funcp)execute_1659, (funcp)execute_1662, (funcp)execute_1664, (funcp)execute_1667, (funcp)execute_1669, (funcp)execute_1672, (funcp)execute_1674, (funcp)execute_1677, (funcp)execute_1679, (funcp)execute_1682, (funcp)execute_1684, (funcp)execute_1687, (funcp)execute_1689, (funcp)execute_1692, (funcp)execute_1694, (funcp)execute_1697, (funcp)execute_1700, (funcp)execute_1701, (funcp)execute_1703, (funcp)execute_1706, (funcp)execute_1708, (funcp)execute_1711, (funcp)execute_1713, (funcp)execute_1716, (funcp)execute_1718, (funcp)execute_1721, (funcp)execute_1723, (funcp)execute_1726, (funcp)execute_1728, (funcp)execute_1731, (funcp)execute_1733, (funcp)execute_1736, (funcp)execute_1738, (funcp)execute_1741, (funcp)execute_1743, (funcp)execute_1746, (funcp)execute_1748, (funcp)execute_1751, (funcp)execute_1753, (funcp)execute_1756, (funcp)execute_1758, (funcp)execute_1761, (funcp)execute_1763, (funcp)execute_1766, (funcp)execute_1768, (funcp)execute_1771, (funcp)execute_1773, (funcp)execute_1776, (funcp)execute_1778, (funcp)execute_1781, (funcp)execute_1783, (funcp)execute_1786, (funcp)execute_1788, (funcp)execute_1791, (funcp)execute_1793, (funcp)execute_1796, (funcp)execute_1798, (funcp)execute_1801, (funcp)execute_1803, (funcp)execute_1806, (funcp)execute_1808, (funcp)execute_1811, (funcp)execute_1813, (funcp)execute_1816, (funcp)execute_1818, (funcp)execute_1821, (funcp)execute_1823, (funcp)execute_1826, (funcp)execute_1828, (funcp)execute_1831, (funcp)execute_1833, (funcp)execute_1836, (funcp)execute_1838, (funcp)execute_1841, (funcp)execute_1843, (funcp)execute_1846, (funcp)execute_1848, (funcp)execute_1851, (funcp)execute_1853, (funcp)execute_1856, (funcp)execute_1858, (funcp)execute_1861, (funcp)vlog_transfunc_eventcallback, (funcp)transaction_34, (funcp)vhdl_transfunc_eventcallback};
const int NumRelocateId= 410;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/Multiplication_behav/xsim.reloc",  (void **)funcTab, 410);
	iki_vhdl_file_variable_register(dp + 136856);
	iki_vhdl_file_variable_register(dp + 136912);


	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/Multiplication_behav/xsim.reloc");
}

	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net

void wrapper_func_0(char *dp)

{

}

void simulate(char *dp)
{
		iki_schedule_processes_at_time_zero(dp, "xsim.dir/Multiplication_behav/xsim.reloc");
	wrapper_func_0(dp);

	iki_execute_processes();

	// Schedule resolution functions for the multiply driven Verilog nets that have strength
	// Schedule transaction functions for the singly driven Verilog nets that have strength

}
#include "iki_bridge.h"
void relocate(char *);

void sensitize(char *);

void simulate(char *);

extern SYSTEMCLIB_IMP_DLLSPEC void local_register_implicit_channel(int, char*);
extern void implicit_HDL_SCinstatiate();

extern SYSTEMCLIB_IMP_DLLSPEC int xsim_argc_copy ;
extern SYSTEMCLIB_IMP_DLLSPEC char** xsim_argv_copy ;

int main(int argc, char **argv)
{
    iki_heap_initialize("ms", "isimmm", 0, 2147483648) ;
    iki_set_sv_type_file_path_name("xsim.dir/Multiplication_behav/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/Multiplication_behav/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/Multiplication_behav/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
