/***************************
4103056037 李易儒 第4次作業 5/15
***************************/






// OpenGGL.cpp : 定義主控台應用程式的進入點。

#include "stdafx.h"


#include <stdlib.h>

#define total 1962
static GLfloat spin = 0.0;
static char spinMode = 'x';
static int flag = 1;
static int jump = 0;
static int fjump = 0;
static int spaceIsClicked = 0;
static int year = 0, day = 0;
static int leftAttack = 0;
static float planetShoot = 0;
static int rightAttack = 0;
static int rightSwing = 0;


void setupinitPointers(void)
{
	float xx, yy;

	xx = 1500;
	yy = 750 / 221 * 750 / 3;

	float national2a;
	national2a = (317 - 86);

	float chungh;
	chungh = (499 - 260);

	float chungn;
	chungn = (615 - 260);

	float chungg;
	chungg = (670 - 201);

	float hsingi;
	hsingi = (878 - 176);

	float hsingn;
	hsingn = (906 - 260);

	float hsingg;
	hsingg = (995 - 705);

	float universityn;
	universityn = (1117 - 260);

	float uni;
	uni = (1173 - 176);

	float universitys;
	universitys = (1376 - 853);

	float universi;
	universi = (1400 - 176);

	float universityt;
	universityt = (1424 - 140);

	static GLfloat vertices[] = { 13 / xx, 1 - (716 / yy),
		13 / xx, 1 - (604 / yy),
		23 / xx, 1 - (716 / yy),

		13 / xx, 1 - (604 / yy),
		23 / xx, 1 - (716 / yy),
		23 / xx, 1 - (604 / yy),

		23 / xx, 1 - (604 / yy),
		60 / xx, 1 - (716 / yy),
		23 / xx, 1 - (629 / yy),

		23 / xx, 1 - (604 / yy),
		60 / xx, 1 - (716 / yy),
		60 / xx, 1 - (691 / yy),

		60 / xx, 1 - (716 / yy),
		60 / xx, 1 - (604 / yy),
		68 / xx, 1 - (604 / yy),

		60 / xx, 1 - (716 / yy),
		68 / xx, 1 - (716 / yy),
		68 / xx, 1 - (604 / yy),

		//N


		86 / xx, 1 - (656 / yy),
		87 / xx, 1 - (646 / yy),
		94 / xx, 1 - (658 / yy),

		87 / xx, 1 - (646 / yy),
		94 / xx, 1 - (658 / yy),
		98 / xx, 1 - (636 / yy),

		94 / xx, 1 - (658 / yy),
		98 / xx, 1 - (636 / yy),
		102 / xx, 1 - (646 / yy),

		98 / xx, 1 - (636 / yy),
		102 / xx, 1 - (646 / yy),
		117 / xx, 1 - (636 / yy),

		102 / xx, 1 - (646 / yy),
		117 / xx, 1 - (636 / yy),
		113 / xx, 1 - (646 / yy),

		117 / xx, 1 - (636 / yy),
		113 / xx, 1 - (646 / yy),
		128 / xx, 1 - (649 / yy),

		113 / xx, 1 - (646 / yy),
		128 / xx, 1 - (649 / yy),
		118 / xx, 1 - (656 / yy),

		128 / xx, 1 - (649 / yy),
		118 / xx, 1 - (656 / yy),
		128 / xx, 1 - (655 / yy),

		118 / xx, 1 - (656 / yy),
		128 / xx, 1 - (655 / yy),
		128 / xx, 1 - (717 / yy),

		118 / xx, 1 - (656 / yy),
		128 / xx, 1 - (717 / yy),
		118 / xx, 1 - (716 / yy),

		118 / xx, 1 - (663 / yy),
		118 / xx, 1 - (677 / yy),
		100 / xx, 1 - (682 / yy),

		118 / xx, 1 - (663 / yy),
		100 / xx, 1 - (682 / yy),
		92 / xx, 1 - (672 / yy),

		100 / xx, 1 - (682 / yy),
		92 / xx, 1 - (672 / yy),
		93 / xx, 1 - (694 / yy),

		92 / xx, 1 - (672 / yy),
		93 / xx, 1 - (694 / yy),
		84 / xx, 1 - (691 / yy),

		93 / xx, 1 - (694 / yy),
		84 / xx, 1 - (691 / yy),
		88 / xx, 1 - (715 / yy),

		93 / xx, 1 - (694 / yy),
		88 / xx, 1 - (715 / yy),
		94 / xx, 1 - (703 / yy),

		88 / xx, 1 - (715 / yy),
		94 / xx, 1 - (703 / yy),
		101 / xx, 1 - (708 / yy),

		88 / xx, 1 - (715 / yy),
		101 / xx, 1 - (708 / yy),
		101 / xx, 1 - (718 / yy),

		101 / xx, 1 - (708 / yy),
		101 / xx, 1 - (718 / yy),
		109 / xx, 1 - (706 / yy),

		101 / xx, 1 - (718 / yy),
		109 / xx, 1 - (706 / yy),
		113 / xx, 1 - (715 / yy),

		109 / xx, 1 - (706 / yy),
		113 / xx, 1 - (715 / yy),
		116 / xx, 1 - (694 / yy),

		113 / xx, 1 - (715 / yy),
		116 / xx, 1 - (694 / yy),
		120 / xx, 1 - (704 / yy),

		118 / xx, 1 - (677 / yy),
		116 / xx, 1 - (649 / yy),
		120 / xx, 1 - (704 / yy),

		//a

		140 / xx, 1 - (636 / yy),
		163 / xx, 1 - (646 / yy),
		140 / xx, 1 - (646 / yy),

		140 / xx, 1 - (636 / yy),
		163 / xx, 1 - (646 / yy),
		163 / xx, 1 - (636 / yy),

		146 / xx, 1 - (615 / yy),
		155 / xx, 1 - (606 / yy),
		155 / xx, 1 - (615 / yy),

		146 / xx, 1 - (615 / yy),
		155 / xx, 1 - (615 / yy),
		155 / xx, 1 - (702 / yy),

		146 / xx, 1 - (615 / yy),
		155 / xx, 1 - (702 / yy),
		146 / xx, 1 - (707 / yy),

		155 / xx, 1 - (702 / yy),
		146 / xx, 1 - (707 / yy),
		149 / xx, 1 - (711 / yy),

		155 / xx, 1 - (702 / yy),
		149 / xx, 1 - (711 / yy),
		160 / xx, 1 - (707 / yy),

		149 / xx, 1 - (711 / yy),
		160 / xx, 1 - (707 / yy),
		156 / xx, 1 - (716 / yy),

		160 / xx, 1 - (707 / yy),
		156 / xx, 1 - (716 / yy),
		165 / xx, 1 - (716 / yy),

		160 / xx, 1 - (707 / yy),
		165 / xx, 1 - (716 / yy),
		165 / xx, 1 - (709 / yy),

		//t

		176 / xx, 1 - (604 / yy),
		187 / xx, 1 - (621 / yy),
		187 / xx, 1 - (604 / yy),

		176 / xx, 1 - (604 / yy),
		187 / xx, 1 - (621 / yy),
		176 / xx, 1 - (621 / yy),

		176 / xx, 1 - (634 / yy),
		187 / xx, 1 - (716 / yy),
		176 / xx, 1 - (716 / yy),

		187 / xx, 1 - (634 / yy),
		176 / xx, 1 - (634 / yy),
		187 / xx, 1 - (716 / yy),

		//i

		201 / xx, 1 - (657 / yy),
		217 / xx, 1 - (648 / yy),
		212 / xx, 1 - (655 / yy),

		217 / xx, 1 - (648 / yy),
		208 / xx, 1 - (642 / yy),
		201 / xx, 1 - (657 / yy),

		217 / xx, 1 - (648 / yy),
		208 / xx, 1 - (642 / yy),
		215 / xx, 1 - (635 / yy),

		217 / xx, 1 - (648 / yy),
		215 / xx, 1 - (635 / yy),
		236 / xx, 1 - (637 / yy),

		217 / xx, 1 - (648 / yy),
		236 / xx, 1 - (637 / yy),
		229 / xx, 1 - (645 / yy),

		215 / xx, 1 - (635 / yy),
		222 / xx, 1 - (633 / yy),
		236 / xx, 1 - (637 / yy),

		236 / xx, 1 - (637 / yy),
		229 / xx, 1 - (645 / yy),
		242 / xx, 1 - (647 / yy),

		229 / xx, 1 - (645 / yy),
		242 / xx, 1 - (647 / yy),
		235 / xx, 1 - (657 / yy),

		242 / xx, 1 - (647 / yy),
		235 / xx, 1 - (657 / yy),
		245 / xx, 1 - (664 / yy),

		235 / xx, 1 - (657 / yy),
		245 / xx, 1 - (664 / yy),
		238 / xx, 1 - (678 / yy),

		245 / xx, 1 - (664 / yy),
		238 / xx, 1 - (678 / yy),
		246 / xx, 1 - (688 / yy),

		238 / xx, 1 - (678 / yy),
		246 / xx, 1 - (688 / yy),
		235 / xx, 1 - (691 / yy),

		246 / xx, 1 - (688 / yy),
		235 / xx, 1 - (691 / yy),
		242 / xx, 1 - (704 / yy),

		235 / xx, 1 - (691 / yy),
		242 / xx, 1 - (704 / yy),
		230 / xx, 1 - (705 / yy),

		242 / xx, 1 - (704 / yy),
		230 / xx, 1 - (705 / yy),
		233 / xx, 1 - (714 / yy),

		230 / xx, 1 - (705 / yy),
		233 / xx, 1 - (714 / yy),
		224 / xx, 1 - (708 / yy),

		233 / xx, 1 - (714 / yy),
		224 / xx, 1 - (708 / yy),
		215 / xx, 1 - (716 / yy),

		224 / xx, 1 - (708 / yy),
		215 / xx, 1 - (716 / yy),
		216 / xx, 1 - (704 / yy),

		215 / xx, 1 - (716 / yy),
		216 / xx, 1 - (704 / yy),
		206 / xx, 1 - (706 / yy),

		216 / xx, 1 - (704 / yy),
		206 / xx, 1 - (706 / yy),
		211 / xx, 1 - (692 / yy),

		206 / xx, 1 - (706 / yy),
		211 / xx, 1 - (692 / yy),
		201 / xx, 1 - (694 / yy),

		211 / xx, 1 - (692 / yy),
		201 / xx, 1 - (694 / yy),
		209 / xx, 1 - (678 / yy),

		201 / xx, 1 - (694 / yy),
		209 / xx, 1 - (678 / yy),
		202 / xx, 1 - (670 / yy),

		209 / xx, 1 - (678 / yy),
		202 / xx, 1 - (670 / yy),
		211 / xx, 1 - (656 / yy),

		202 / xx, 1 - (670 / yy),
		211 / xx, 1 - (656 / yy),
		202 / xx, 1 - (657 / yy),

		//o

		260 / xx, 1 - (636 / yy),
		269 / xx, 1 - (715 / yy),
		260 / xx, 1 - (715 / yy),

		260 / xx, 1 - (636 / yy),
		269 / xx, 1 - (715 / yy),
		269 / xx, 1 - (636 / yy),

		269 / xx, 1 - (645 / yy),
		268 / xx, 1 - (676 / yy),
		271 / xx, 1 - (658 / yy),

		269 / xx, 1 - (645 / yy),
		271 / xx, 1 - (658 / yy),
		277 / xx, 1 - (647 / yy),

		269 / xx, 1 - (645 / yy),
		277 / xx, 1 - (647 / yy),
		277 / xx, 1 - (638 / yy),

		277 / xx, 1 - (647 / yy),
		277 / xx, 1 - (637 / yy),
		284 / xx, 1 - (647 / yy),

		277 / xx, 1 - (636 / yy),
		284 / xx, 1 - (647 / yy),
		291 / xx, 1 - (635 / yy),

		284 / xx, 1 - (647 / yy),
		291 / xx, 1 - (635 / yy),
		299 / xx, 1 - (643 / yy),

		291 / xx, 1 - (635 / yy),
		299 / xx, 1 - (643 / yy),
		292 / xx, 1 - (654 / yy),

		299 / xx, 1 - (643 / yy),
		292 / xx, 1 - (654 / yy),
		302 / xx, 1 - (660 / yy),

		292 / xx, 1 - (654 / yy),
		302 / xx, 1 - (660 / yy),
		292 / xx, 1 - (716 / yy),

		302 / xx, 1 - (660 / yy),
		292 / xx, 1 - (716 / yy),
		302 / xx, 1 - (716 / yy),

		//n

		(86 + national2a) / xx, 1 - (656 / yy),
		(87 + national2a) / xx, 1 - (646 / yy),
		(94 + national2a) / xx, 1 - (658 / yy),

		(87 + national2a) / xx, 1 - (646 / yy),
		(94 + national2a) / xx, 1 - (658 / yy),
		(98 + national2a) / xx, 1 - (636 / yy),

		(94 + national2a) / xx, 1 - (658 / yy),
		(98 + national2a) / xx, 1 - (636 / yy),
		(102 + national2a) / xx, 1 - (646 / yy),

		(98 + national2a) / xx, 1 - (636 / yy),
		(102 + national2a) / xx, 1 - (646 / yy),
		(117 + national2a) / xx, 1 - (636 / yy),

		(102 + national2a) / xx, 1 - (646 / yy),
		(117 + national2a) / xx, 1 - (636 / yy),
		(113 + national2a) / xx, 1 - (646 / yy),

		(117 + national2a) / xx, 1 - (636 / yy),
		(113 + national2a) / xx, 1 - (646 / yy),
		(128 + national2a) / xx, 1 - (649 / yy),

		(113 + national2a) / xx, 1 - (646 / yy),
		(128 + national2a) / xx, 1 - (649 / yy),
		(118 + national2a) / xx, 1 - (656 / yy),

		(128 + national2a) / xx, 1 - (649 / yy),
		(118 + national2a) / xx, 1 - (656 / yy),
		(128 + national2a) / xx, 1 - (655 / yy),

		(118 + national2a) / xx, 1 - (656 / yy),
		(128 + national2a) / xx, 1 - (655 / yy),
		(128 + national2a) / xx, 1 - (717 / yy),

		(118 + national2a) / xx, 1 - (656 / yy),
		(128 + national2a) / xx, 1 - (717 / yy),
		(118 + national2a) / xx, 1 - (716 / yy),

		(118 + national2a) / xx, 1 - (663 / yy),
		(118 + national2a) / xx, 1 - (677 / yy),
		(100 + national2a) / xx, 1 - (682 / yy),

		(118 + national2a) / xx, 1 - (663 / yy),
		(100 + national2a) / xx, 1 - (682 / yy),
		(92 + national2a) / xx, 1 - (672 / yy),

		(100 + national2a) / xx, 1 - (682 / yy),
		(92 + national2a) / xx, 1 - (672 / yy),
		(93 + national2a) / xx, 1 - (694 / yy),

		(92 + national2a) / xx, 1 - (672 / yy),
		(93 + national2a) / xx, 1 - (694 / yy),
		(84 + national2a) / xx, 1 - (691 / yy),

		(93 + national2a) / xx, 1 - (694 / yy),
		(84 + national2a) / xx, 1 - (691 / yy),
		(88 + national2a) / xx, 1 - (715 / yy),

		(93 + national2a) / xx, 1 - (694 / yy),
		(88 + national2a) / xx, 1 - (715 / yy),
		(94 + national2a) / xx, 1 - (703 / yy),

		(88 + national2a) / xx, 1 - (715 / yy),
		(94 + national2a) / xx, 1 - (703 / yy),
		(101 + national2a) / xx, 1 - (708 / yy),

		(88 + national2a) / xx, 1 - (715 / yy),
		(101 + national2a) / xx, 1 - (708 / yy),
		(101 + national2a) / xx, 1 - (718 / yy),

		(101 + national2a) / xx, 1 - (708 / yy),
		(101 + national2a) / xx, 1 - (718 / yy),
		(109 + national2a) / xx, 1 - (706 / yy),

		(101 + national2a) / xx, 1 - (718 / yy),
		(109 + national2a) / xx, 1 - (706 / yy),
		(113 + national2a) / xx, 1 - (715 / yy),

		(109 + national2a) / xx, 1 - (706 / yy),
		(113 + national2a) / xx, 1 - (715 / yy),
		(116 + national2a) / xx, 1 - (694 / yy),

		(113 + national2a) / xx, 1 - (715 / yy),
		(116 + national2a) / xx, 1 - (694 / yy),
		(120 + national2a) / xx, 1 - (704 / yy),

		(118 + national2a) / xx, 1 - (677 / yy),
		(116 + national2a) / xx, 1 - (649 / yy),
		(120 + national2a) / xx, 1 - (704 / yy),


		//a


		376 / xx, 1 - (604 / yy),
		376 / xx, 1 - (716 / yy),
		386 / xx, 1 - (716 / yy),

		376 / xx, 1 - (604 / yy),
		386 / xx, 1 - (716 / yy),
		386 / xx, 1 - (604 / yy),

		//l

		483 / xx, 1 - (638 / yy),
		473 / xx, 1 - (638 / yy),
		481 / xx, 1 - (628 / yy),

		473 / xx, 1 - (638 / yy),
		481 / xx, 1 - (628 / yy),
		471 / xx, 1 - (629 / yy),

		481 / xx, 1 - (628 / yy),
		471 / xx, 1 - (629 / yy),
		473 / xx, 1 - (612 / yy),

		471 / xx, 1 - (629 / yy),
		473 / xx, 1 - (612 / yy),
		466 / xx, 1 - (621 / yy),

		473 / xx, 1 - (612 / yy),
		466 / xx, 1 - (621 / yy),
		460 / xx, 1 - (602 / yy),

		466 / xx, 1 - (621 / yy),
		460 / xx, 1 - (602 / yy),
		453 / xx, 1 - (617 / yy),

		460 / xx, 1 - (602 / yy),
		453 / xx, 1 - (617 / yy),
		448 / xx, 1 - (603 / yy),

		453 / xx, 1 - (617 / yy),
		448 / xx, 1 - (603 / yy),
		445 / xx, 1 - (619 / yy),

		448 / xx, 1 - (603 / yy),
		445 / xx, 1 - (619 / yy),
		434 / xx, 1 - (611 / yy),

		455 / xx, 1 - (619 / yy),
		434 / xx, 1 - (611 / yy),
		440 / xx, 1 - (627 / yy),

		434 / xx, 1 - (611 / yy),
		440 / xx, 1 - (627 / yy),
		426 / xx, 1 - (629 / yy),

		440 / xx, 1 - (627 / yy),
		426 / xx, 1 - (629 / yy),
		435 / xx, 1 - (640 / yy),

		426 / xx, 1 - (629 / yy),
		435 / xx, 1 - (640 / yy),
		423 / xx, 1 - (642 / yy),

		435 / xx, 1 - (640 / yy),
		423 / xx, 1 - (642 / yy),
		434 / xx, 1 - (652 / yy),

		423 / xx, 1 - (642 / yy),
		434 / xx, 1 - (652 / yy),
		422 / xx, 1 - (664 / yy),

		434 / xx, 1 - (652 / yy),
		422 / xx, 1 - (664 / yy),
		434 / xx, 1 - (676 / yy),

		422 / xx, 1 - (644 / yy),
		434 / xx, 1 - (676 / yy),
		426 / xx, 1 - (687 / yy),

		434 / xx, 1 - (676 / yy),
		426 / xx, 1 - (687 / yy),
		437 / xx, 1 - (690 / yy),

		426 / xx, 1 - (687 / yy),
		437 / xx, 1 - (690 / yy),
		433 / xx, 1 - (707 / yy),

		437 / xx, 1 - (690 / yy),
		433 / xx, 1 - (707 / yy),
		446 / xx, 1 - (701 / yy),

		433 / xx, 1 - (707 / yy),
		446 / xx, 1 - (701 / yy),
		446 / xx, 1 - (717 / yy),

		446 / xx, 1 - (701 / yy),
		446 / xx, 1 - (717 / yy),
		455 / xx, 1 - (705 / yy),

		446 / xx, 1 - (717 / yy),
		455 / xx, 1 - (705 / yy),
		458 / xx, 1 - (719 / yy),

		455 / xx, 1 - (705 / yy),
		458 / xx, 1 - (719 / yy),
		464 / xx, 1 - (700 / yy),

		458 / xx, 1 - (719 / yy),
		464 / xx, 1 - (700 / yy),
		471 / xx, 1 - (711 / yy),

		464 / xx, 1 - (700 / yy),
		471 / xx, 1 - (711 / yy),
		471 / xx, 1 - (691 / yy),

		471 / xx, 1 - (711 / yy),
		471 / xx, 1 - (691 / yy),
		484 / xx, 1 - (683 / yy),

		471 / xx, 1 - (691 / yy),
		484 / xx, 1 - (683 / yy),
		474 / xx, 1 - (678 / yy),

		//C
		(260 + chungh) / xx, 1 - (604 / yy),
		(269 + chungh) / xx, 1 - (715 / yy),
		(260 + chungh) / xx, 1 - (715 / yy),

		(260 + chungh) / xx, 1 - (604 / yy),
		(269 + chungh) / xx, 1 - (715 / yy),
		(269 + chungh) / xx, 1 - (604 / yy),

		(269 + chungh) / xx, 1 - (645 / yy),
		(268 + chungh) / xx, 1 - (676 / yy),
		(271 + chungh) / xx, 1 - (658 / yy),

		(269 + chungh) / xx, 1 - (645 / yy),
		(271 + chungh) / xx, 1 - (658 / yy),
		(277 + chungh) / xx, 1 - (647 / yy),

		(269 + chungh) / xx, 1 - (645 / yy),
		(277 + chungh) / xx, 1 - (647 / yy),
		(277 + chungh) / xx, 1 - (638 / yy),

		(277 + chungh) / xx, 1 - (647 / yy),
		(277 + chungh) / xx, 1 - (637 / yy),
		(284 + chungh) / xx, 1 - (647 / yy),

		(277 + chungh) / xx, 1 - (638 / yy),
		(284 + chungh) / xx, 1 - (647 / yy),
		(291 + chungh) / xx, 1 - (635 / yy),

		(284 + chungh) / xx, 1 - (647 / yy),
		(291 + chungh) / xx, 1 - (635 / yy),
		(299 + chungh) / xx, 1 - (643 / yy),

		(291 + chungh) / xx, 1 - (635 / yy),
		(299 + chungh) / xx, 1 - (643 / yy),
		(292 + chungh) / xx, 1 - (654 / yy),

		(299 + chungh) / xx, 1 - (643 / yy),
		(292 + chungh) / xx, 1 - (654 / yy),
		(302 + chungh) / xx, 1 - (660 / yy),

		(292 + chungh) / xx, 1 - (654 / yy),
		(302 + chungh) / xx, 1 - (660 / yy),
		(292 + chungh) / xx, 1 - (716 / yy),

		(302 + chungh) / xx, 1 - (660 / yy),
		(292 + chungh) / xx, 1 - (716 / yy),
		(302 + chungh) / xx, 1 - (716 / yy),

		//h

		555 / xx, 1 - (636 / yy),
		565 / xx, 1 - (636 / yy),
		565 / xx, 1 - (699 / yy),

		555 / xx, 1 - (636 / yy),
		557 / xx, 1 - (703 / yy),
		565 / xx, 1 - (699 / yy),

		557 / xx, 1 - (703 / yy),
		565 / xx, 1 - (699 / yy),
		566 / xx, 1 - (715 / yy),

		565 / xx, 1 - (699 / yy),
		566 / xx, 1 - (715 / yy),
		571 / xx, 1 - (707 / yy),

		566 / xx, 1 - (715 / yy),
		571 / xx, 1 - (707 / yy),
		575 / xx, 1 - (717 / yy),

		571 / xx, 1 - (707 / yy),
		575 / xx, 1 - (717 / yy),
		578 / xx, 1 - (708 / yy),

		575 / xx, 1 - (717 / yy),
		578 / xx, 1 - (708 / yy),
		583 / xx, 1 - (715 / yy),

		578 / xx, 1 - (708 / yy),
		583 / xx, 1 - (715 / yy),
		584 / xx, 1 - (701 / yy),

		583 / xx, 1 - (715 / yy),
		584 / xx, 1 - (701 / yy),
		588 / xx, 1 - (706 / yy),

		584 / xx, 1 - (701 / yy),
		588 / xx, 1 - (706 / yy),
		588 / xx, 1 - (684 / yy),

		588 / xx, 1 - (636 / yy),
		588 / xx, 1 - (716 / yy),
		598 / xx, 1 - (716 / yy),

		588 / xx, 1 - (636 / yy),
		598 / xx, 1 - (716 / yy),
		598 / xx, 1 - (636 / yy),

		//u
		(260 + chungn) / xx, 1 - (636 / yy),
		(269 + chungn) / xx, 1 - (715 / yy),
		(260 + chungn) / xx, 1 - (715 / yy),

		(260 + chungn) / xx, 1 - (636 / yy),
		(269 + chungn) / xx, 1 - (715 / yy),
		(269 + chungn) / xx, 1 - (636 / yy),

		(269 + chungn) / xx, 1 - (645 / yy),
		(268 + chungn) / xx, 1 - (676 / yy),
		(271 + chungn) / xx, 1 - (658 / yy),

		(269 + chungn) / xx, 1 - (645 / yy),
		(271 + chungn) / xx, 1 - (658 / yy),
		(277 + chungn) / xx, 1 - (647 / yy),

		(269 + chungn) / xx, 1 - (645 / yy),
		(277 + chungn) / xx, 1 - (647 / yy),
		(277 + chungn) / xx, 1 - (638 / yy),

		(277 + chungn) / xx, 1 - (647 / yy),
		(277 + chungn) / xx, 1 - (637 / yy),
		(284 + chungn) / xx, 1 - (647 / yy),

		(277 + chungn) / xx, 1 - (636 / yy),
		(284 + chungn) / xx, 1 - (647 / yy),
		(291 + chungn) / xx, 1 - (635 / yy),

		(284 + chungn) / xx, 1 - (647 / yy),
		(291 + chungn) / xx, 1 - (635 / yy),
		(299 + chungn) / xx, 1 - (643 / yy),

		(291 + chungn) / xx, 1 - (635 / yy),
		(299 + chungn) / xx, 1 - (643 / yy),
		(292 + chungn) / xx, 1 - (654 / yy),

		(299 + chungn) / xx, 1 - (643 / yy),
		(292 + chungn) / xx, 1 - (654 / yy),
		(302 + chungn) / xx, 1 - (660 / yy),

		(292 + chungn) / xx, 1 - (654 / yy),
		(302 + chungn) / xx, 1 - (660 / yy),
		(292 + chungn) / xx, 1 - (716 / yy),

		(302 + chungn) / xx, 1 - (660 / yy),
		(292 + chungn) / xx, 1 - (716 / yy),
		(302 + chungn) / xx, 1 - (716 / yy),

		//n
		(201 + chungg) / xx, 1 - (657 / yy),
		(217 + chungg) / xx, 1 - (648 / yy),
		(212 + chungg) / xx, 1 - (655 / yy),

		(217 + chungg) / xx, 1 - (648 / yy),
		(208 + chungg) / xx, 1 - (642 / yy),
		(201 + chungg) / xx, 1 - (657 / yy),

		(217 + chungg) / xx, 1 - (648 / yy),
		(208 + chungg) / xx, 1 - (642 / yy),
		(215 + chungg) / xx, 1 - (635 / yy),

		(217 + chungg) / xx, 1 - (648 / yy),
		(215 + chungg) / xx, 1 - (635 / yy),
		(236 + chungg) / xx, 1 - (637 / yy),

		(217 + chungg) / xx, 1 - (648 / yy),
		(236 + chungg) / xx, 1 - (637 / yy),
		(229 + chungg) / xx, 1 - (645 / yy),

		(215 + chungg) / xx, 1 - (635 / yy),
		(222 + chungg) / xx, 1 - (633 / yy),
		(236 + chungg) / xx, 1 - (637 / yy),

		(236 + chungg) / xx, 1 - (637 / yy),
		(229 + chungg) / xx, 1 - (645 / yy),
		(242 + chungg) / xx, 1 - (647 / yy),

		(229 + chungg) / xx, 1 - (645 / yy),
		(242 + chungg) / xx, 1 - (647 / yy),
		(235 + chungg) / xx, 1 - (657 / yy),

		(242 + chungg) / xx, 1 - (647 / yy),
		(235 + chungg) / xx, 1 - (657 / yy),
		(245 + chungg) / xx, 1 - (664 / yy),

		(235 + chungg) / xx, 1 - (657 / yy),
		(245 + chungg) / xx, 1 - (664 / yy),
		(238 + chungg) / xx, 1 - (678 / yy),

		(245 + chungg) / xx, 1 - (664 / yy),
		(238 + chungg) / xx, 1 - (678 / yy),
		(246 + chungg) / xx, 1 - (688 / yy),

		(238 + chungg) / xx, 1 - (678 / yy),
		(246 + chungg) / xx, 1 - (688 / yy),
		(235 + chungg) / xx, 1 - (691 / yy),

		(246 + chungg) / xx, 1 - (688 / yy),
		(235 + chungg) / xx, 1 - (691 / yy),
		(242 + chungg) / xx, 1 - (704 / yy),

		(235 + chungg) / xx, 1 - (691 / yy),
		(242 + chungg) / xx, 1 - (704 / yy),
		(230 + chungg) / xx, 1 - (705 / yy),

		(242 + chungg) / xx, 1 - (704 / yy),
		(230 + chungg) / xx, 1 - (705 / yy),
		(233 + chungg) / xx, 1 - (714 / yy),

		(230 + chungg) / xx, 1 - (705 / yy),
		(233 + chungg) / xx, 1 - (714 / yy),
		(224 + chungg) / xx, 1 - (708 / yy),

		(233 + chungg) / xx, 1 - (714 / yy),
		(224 + chungg) / xx, 1 - (708 / yy),
		(215 + chungg) / xx, 1 - (716 / yy),

		(224 + chungg) / xx, 1 - (708 / yy),
		(215 + chungg) / xx, 1 - (716 / yy),
		(216 + chungg) / xx, 1 - (704 / yy),

		(215 + chungg) / xx, 1 - (716 / yy),
		(216 + chungg) / xx, 1 - (704 / yy),
		(206 + chungg) / xx, 1 - (706 / yy),

		(216 + chungg) / xx, 1 - (704 / yy),
		(206 + chungg) / xx, 1 - (706 / yy),
		(211 + chungg) / xx, 1 - (692 / yy),

		(206 + chungg) / xx, 1 - (706 / yy),
		(211 + chungg) / xx, 1 - (692 / yy),
		(201 + chungg) / xx, 1 - (694 / yy),

		(211 + chungg) / xx, 1 - (692 / yy),
		(201 + chungg) / xx, 1 - (694 / yy),
		(209 + chungg) / xx, 1 - (678 / yy),

		(201 + chungg) / xx, 1 - (694 / yy),
		(209 + chungg) / xx, 1 - (678 / yy),
		(202 + chungg) / xx, 1 - (670 / yy),

		(209 + chungg) / xx, 1 - (678 / yy),
		(202 + chungg) / xx, 1 - (670 / yy),
		(211 + chungg) / xx, 1 - (656 / yy),

		(202 + chungg) / xx, 1 - (670 / yy),
		(211 + chungg) / xx, 1 - (656 / yy),
		(202 + chungg) / xx, 1 - (657 / yy),

		705 / xx, 1 - (636 / yy),
		713 / xx, 1 - (635 / yy),
		714 / xx, 1 - (726 / yy),

		705 / xx, 1 - (636 / yy),
		714 / xx, 1 - (726 / yy),
		705 / xx, 1 - (724 / yy),

		714 / xx, 1 - (726 / yy),
		705 / xx, 1 - (724 / yy),
		708 / xx, 1 - (738 / yy),

		705 / xx, 1 - (724 / yy),
		708 / xx, 1 - (738 / yy),
		698 / xx, 1 - (735 / yy),

		708 / xx, 1 - (738 / yy),
		698 / xx, 1 - (735 / yy),
		701 / xx, 1 - (746 / yy),

		698 / xx, 1 - (735 / yy),
		701 / xx, 1 - (746 / yy),
		693 / xx, 1 - (739 / yy),

		701 / xx, 1 - (746 / yy),
		693 / xx, 1 - (739 / yy),
		692 / xx, 1 - (750 / yy),

		693 / xx, 1 - (739 / yy),
		692 / xx, 1 - (750 / yy),
		683 / xx, 1 - (736 / yy),

		692 / xx, 1 - (750 / yy),
		683 / xx, 1 - (736 / yy),
		682 / xx, 1 - (747 / yy),

		683 / xx, 1 - (736 / yy),
		682 / xx, 1 - (747 / yy),
		676 / xx, 1 - (723 / yy),

		682 / xx, 1 - (747 / yy),
		676 / xx, 1 - (723 / yy),
		676 / xx, 1 - (744 / yy),

		676 / xx, 1 - (723 / yy),
		676 / xx, 1 - (744 / yy),
		671 / xx, 1 - (723 / yy),

		//g

		753 / xx, 1 - (603 / yy),
		763 / xx, 1 - (603 / yy),
		763 / xx, 1 - (716 / yy),

		753 / xx, 1 - (603 / yy),
		763 / xx, 1 - (716 / yy),
		753 / xx, 1 - (716 / yy),

		763 / xx, 1 - (652 / yy),
		763 / xx, 1 - (663 / yy),
		798 / xx, 1 - (652 / yy),

		763 / xx, 1 - (663 / yy),
		798 / xx, 1 - (652 / yy),
		798 / xx, 1 - (663 / yy),

		798 / xx, 1 - (603 / yy),
		798 / xx, 1 - (716 / yy),
		808 / xx, 1 - (716 / yy),

		798 / xx, 1 - (603 / yy),
		808 / xx, 1 - (716 / yy),
		808 / xx, 1 - (603 / yy),

		//H


		863 / xx, 1 - (657 / yy),
		853 / xx, 1 - (658 / yy),
		859 / xx, 1 - (642 / yy),

		853 / xx, 1 - (658 / yy),
		859 / xx, 1 - (642 / yy),
		848 / xx, 1 - (646 / yy),

		859 / xx, 1 - (642 / yy),
		848 / xx, 1 - (646 / yy),
		849 / xx, 1 - (634 / yy),

		848 / xx, 1 - (646 / yy),
		849 / xx, 1 - (634 / yy),
		838 / xx, 1 - (647 / yy),

		849 / xx, 1 - (634 / yy),
		838 / xx, 1 - (647 / yy),
		839 / xx, 1 - (633 / yy),

		838 / xx, 1 - (647 / yy),
		839 / xx, 1 - (633 / yy),
		831 / xx, 1 - (656 / yy),

		839 / xx, 1 - (633 / yy),
		831 / xx, 1 - (656 / yy),
		828 / xx, 1 - (638 / yy),

		831 / xx, 1 - (656 / yy),
		828 / xx, 1 - (638 / yy),
		824 / xx, 1 - (648 / yy),

		831 / xx, 1 - (656 / yy),
		824 / xx, 1 - (648 / yy),
		825 / xx, 1 - (662 / yy),

		831 / xx, 1 - (656 / yy),
		825 / xx, 1 - (662 / yy),
		827 / xx, 1 - (671 / yy),

		831 / xx, 1 - (656 / yy),
		827 / xx, 1 - (671 / yy),
		839 / xx, 1 - (664 / yy),

		827 / xx, 1 - (671 / yy),
		839 / xx, 1 - (664 / yy),
		838 / xx, 1 - (677 / yy),

		839 / xx, 1 - (664 / yy),
		838 / xx, 1 - (677 / yy),
		852 / xx, 1 - (670 / yy),

		838 / xx, 1 - (677 / yy),
		852 / xx, 1 - (670 / yy),
		850 / xx, 1 - (685 / yy),

		852 / xx, 1 - (670 / yy),
		850 / xx, 1 - (685 / yy),
		860 / xx, 1 - (674 / yy),

		850 / xx, 1 - (685 / yy),
		860 / xx, 1 - (674 / yy),
		855 / xx, 1 - (688 / yy),

		860 / xx, 1 - (674 / yy),
		855 / xx, 1 - (688 / yy),
		864 / xx, 1 - (683 / yy),

		855 / xx, 1 - (688 / yy),
		864 / xx, 1 - (683 / yy),
		855 / xx, 1 - (699 / yy),

		864 / xx, 1 - (683 / yy),
		855 / xx, 1 - (699 / yy),
		864 / xx, 1 - (697 / yy),

		855 / xx, 1 - (699 / yy),
		864 / xx, 1 - (697 / yy),
		860 / xx, 1 - (709 / yy),

		855 / xx, 1 - (699 / yy),
		860 / xx, 1 - (709 / yy),
		852 / xx, 1 - (714 / yy),

		855 / xx, 1 - (699 / yy),
		852 / xx, 1 - (714 / yy),
		843 / xx, 1 - (706 / yy),

		852 / xx, 1 - (714 / yy),
		843 / xx, 1 - (706 / yy),
		841 / xx, 1 - (716 / yy),

		843 / xx, 1 - (706 / yy),
		841 / xx, 1 - (716 / yy),
		838 / xx, 1 - (704 / yy),

		841 / xx, 1 - (716 / yy),
		838 / xx, 1 - (704 / yy),
		830 / xx, 1 - (711 / yy),

		838 / xx, 1 - (704 / yy),
		830 / xx, 1 - (711 / yy),
		832 / xx, 1 - (698 / yy),

		830 / xx, 1 - (711 / yy),
		832 / xx, 1 - (698 / yy),
		824 / xx, 1 - (703 / yy),

		832 / xx, 1 - (698 / yy),
		824 / xx, 1 - (703 / yy),
		831 / xx, 1 - (689 / yy),

		824 / xx, 1 - (703 / yy),
		831 / xx, 1 - (689 / yy),
		823 / xx, 1 - (691 / yy),


		//s

		(176 + hsingi) / xx, 1 - (604 / yy),
		(187 + hsingi) / xx, 1 - (621 / yy),
		(187 + hsingi) / xx, 1 - (604 / yy),

		(176 + hsingi) / xx, 1 - (604 / yy),
		(187 + hsingi) / xx, 1 - (621 / yy),
		(176 + hsingi) / xx, 1 - (621 / yy),

		(176 + hsingi) / xx, 1 - (634 / yy),
		(187 + hsingi) / xx, 1 - (716 / yy),
		(176 + hsingi) / xx, 1 - (716 / yy),

		(187 + hsingi) / xx, 1 - (634 / yy),
		(176 + hsingi) / xx, 1 - (634 / yy),
		(187 + hsingi) / xx, 1 - (716 / yy),

		//i


		(260 + hsingn) / xx, 1 - (636 / yy),
		(269 + hsingn) / xx, 1 - (715 / yy),
		(260 + hsingn) / xx, 1 - (715 / yy),

		(260 + hsingn) / xx, 1 - (636 / yy),
		(269 + hsingn) / xx, 1 - (715 / yy),
		(269 + hsingn) / xx, 1 - (636 / yy),

		(269 + hsingn) / xx, 1 - (645 / yy),
		(268 + hsingn) / xx, 1 - (676 / yy),
		(271 + hsingn) / xx, 1 - (658 / yy),

		(269 + hsingn) / xx, 1 - (645 / yy),
		(271 + hsingn) / xx, 1 - (658 / yy),
		(277 + hsingn) / xx, 1 - (647 / yy),

		(269 + hsingn) / xx, 1 - (645 / yy),
		(277 + hsingn) / xx, 1 - (647 / yy),
		(277 + hsingn) / xx, 1 - (638 / yy),

		(277 + hsingn) / xx, 1 - (647 / yy),
		(277 + hsingn) / xx, 1 - (637 / yy),
		(284 + hsingn) / xx, 1 - (647 / yy),

		(277 + hsingn) / xx, 1 - (636 / yy),
		(284 + hsingn) / xx, 1 - (647 / yy),
		(291 + hsingn) / xx, 1 - (635 / yy),

		(284 + hsingn) / xx, 1 - (647 / yy),
		(291 + hsingn) / xx, 1 - (635 / yy),
		(299 + hsingn) / xx, 1 - (643 / yy),

		(291 + hsingn) / xx, 1 - (635 / yy),
		(299 + hsingn) / xx, 1 - (643 / yy),
		(292 + hsingn) / xx, 1 - (654 / yy),

		(299 + hsingn) / xx, 1 - (643 / yy),
		(292 + hsingn) / xx, 1 - (654 / yy),
		(302 + hsingn) / xx, 1 - (660 / yy),

		(292 + hsingn) / xx, 1 - (654 / yy),
		(302 + hsingn) / xx, 1 - (660 / yy),
		(292 + hsingn) / xx, 1 - (716 / yy),

		(302 + hsingn) / xx, 1 - (660 / yy),
		(292 + hsingn) / xx, 1 - (716 / yy),
		(302 + hsingn) / xx, 1 - (716 / yy),

		//n

		(201 + chungg + hsingg) / xx, 1 - (657 / yy),
		(217 + chungg + hsingg) / xx, 1 - (648 / yy),
		(212 + chungg + hsingg) / xx, 1 - (655 / yy),

		(217 + chungg + hsingg) / xx, 1 - (648 / yy),
		(208 + chungg + hsingg) / xx, 1 - (642 / yy),
		(201 + chungg + hsingg) / xx, 1 - (657 / yy),

		(217 + chungg + hsingg) / xx, 1 - (648 / yy),
		(208 + chungg + hsingg) / xx, 1 - (642 / yy),
		(215 + chungg + hsingg) / xx, 1 - (635 / yy),

		(217 + chungg + hsingg) / xx, 1 - (648 / yy),
		(215 + chungg + hsingg) / xx, 1 - (635 / yy),
		(236 + chungg + hsingg) / xx, 1 - (637 / yy),

		(217 + chungg + hsingg) / xx, 1 - (648 / yy),
		(236 + chungg + hsingg) / xx, 1 - (637 / yy),
		(229 + chungg + hsingg) / xx, 1 - (645 / yy),

		(215 + chungg + hsingg) / xx, 1 - (635 / yy),
		(222 + chungg + hsingg) / xx, 1 - (633 / yy),
		(236 + chungg + hsingg) / xx, 1 - (637 / yy),

		(236 + chungg + hsingg) / xx, 1 - (637 / yy),
		(229 + chungg + hsingg) / xx, 1 - (645 / yy),
		(242 + chungg + hsingg) / xx, 1 - (647 / yy),

		(229 + chungg + hsingg) / xx, 1 - (645 / yy),
		(242 + chungg + hsingg) / xx, 1 - (647 / yy),
		(235 + chungg + hsingg) / xx, 1 - (657 / yy),

		(242 + chungg + hsingg) / xx, 1 - (647 / yy),
		(235 + chungg + hsingg) / xx, 1 - (657 / yy),
		(245 + chungg + hsingg) / xx, 1 - (664 / yy),

		(235 + chungg + hsingg) / xx, 1 - (657 / yy),
		(245 + chungg + hsingg) / xx, 1 - (664 / yy),
		(238 + chungg + hsingg) / xx, 1 - (678 / yy),

		(245 + chungg + hsingg) / xx, 1 - (664 / yy),
		(238 + chungg + hsingg) / xx, 1 - (678 / yy),
		(246 + chungg + hsingg) / xx, 1 - (688 / yy),

		(238 + chungg + hsingg) / xx, 1 - (678 / yy),
		(246 + chungg + hsingg) / xx, 1 - (688 / yy),
		(235 + chungg + hsingg) / xx, 1 - (691 / yy),

		(246 + chungg + hsingg) / xx, 1 - (688 / yy),
		(235 + chungg + hsingg) / xx, 1 - (691 / yy),
		(242 + chungg + hsingg) / xx, 1 - (704 / yy),

		(235 + chungg + hsingg) / xx, 1 - (691 / yy),
		(242 + chungg + hsingg) / xx, 1 - (704 / yy),
		(230 + chungg + hsingg) / xx, 1 - (705 / yy),

		(242 + chungg + hsingg) / xx, 1 - (704 / yy),
		(230 + chungg + hsingg) / xx, 1 - (705 / yy),
		(233 + chungg + hsingg) / xx, 1 - (714 / yy),

		(230 + chungg + hsingg) / xx, 1 - (705 / yy),
		(233 + chungg + hsingg) / xx, 1 - (714 / yy),
		(224 + chungg + hsingg) / xx, 1 - (708 / yy),

		(233 + chungg + hsingg) / xx, 1 - (714 / yy),
		(224 + chungg + hsingg) / xx, 1 - (708 / yy),
		(215 + chungg + hsingg) / xx, 1 - (716 / yy),

		(224 + chungg + hsingg) / xx, 1 - (708 / yy),
		(215 + chungg + hsingg) / xx, 1 - (716 / yy),
		(216 + chungg + hsingg) / xx, 1 - (704 / yy),

		(215 + chungg + hsingg) / xx, 1 - (716 / yy),
		(216 + chungg + hsingg) / xx, 1 - (704 / yy),
		(206 + chungg + hsingg) / xx, 1 - (706 / yy),

		(216 + chungg + hsingg) / xx, 1 - (704 / yy),
		(206 + chungg + hsingg) / xx, 1 - (706 / yy),
		(211 + chungg + hsingg) / xx, 1 - (692 / yy),

		(206 + chungg + hsingg) / xx, 1 - (706 / yy),
		(211 + chungg + hsingg) / xx, 1 - (692 / yy),
		(201 + chungg + hsingg) / xx, 1 - (694 / yy),

		(211 + chungg + hsingg) / xx, 1 - (692 / yy),
		(201 + chungg + hsingg) / xx, 1 - (694 / yy),
		(209 + chungg + hsingg) / xx, 1 - (678 / yy),

		(201 + chungg + hsingg) / xx, 1 - (694 / yy),
		(209 + chungg + hsingg) / xx, 1 - (678 / yy),
		(202 + chungg + hsingg) / xx, 1 - (670 / yy),

		(209 + chungg + hsingg) / xx, 1 - (678 / yy),
		(202 + chungg + hsingg) / xx, 1 - (670 / yy),
		(211 + chungg + hsingg) / xx, 1 - (656 / yy),

		(202 + chungg + hsingg) / xx, 1 - (670 / yy),
		(211 + chungg + hsingg) / xx, 1 - (656 / yy),
		(202 + chungg + hsingg) / xx, 1 - (657 / yy),


		(705 + hsingg) / xx, 1 - (636 / yy),
		(713 + hsingg) / xx, 1 - (635 / yy),
		(714 + hsingg) / xx, 1 - (726 / yy),

		(705 + hsingg) / xx, 1 - (636 / yy),
		(714 + hsingg) / xx, 1 - (726 / yy),
		(705 + hsingg) / xx, 1 - (724 / yy),

		(714 + hsingg) / xx, 1 - (726 / yy),
		(705 + hsingg) / xx, 1 - (724 / yy),
		(708 + hsingg) / xx, 1 - (738 / yy),

		(705 + hsingg) / xx, 1 - (724 / yy),
		(708 + hsingg) / xx, 1 - (738 / yy),
		(698 + hsingg) / xx, 1 - (735 / yy),

		(708 + hsingg) / xx, 1 - (738 / yy),
		(698 + hsingg) / xx, 1 - (735 / yy),
		(701 + hsingg) / xx, 1 - (746 / yy),

		(698 + hsingg) / xx, 1 - (735 / yy),
		(701 + hsingg) / xx, 1 - (746 / yy),
		(693 + hsingg) / xx, 1 - (739 / yy),

		(701 + hsingg) / xx, 1 - (746 / yy),
		(693 + hsingg) / xx, 1 - (739 / yy),
		(692 + hsingg) / xx, 1 - (750 / yy),

		(693 + hsingg) / xx, 1 - (739 / yy),
		(692 + hsingg) / xx, 1 - (750 / yy),
		(683 + hsingg) / xx, 1 - (736 / yy),

		(692 + hsingg) / xx, 1 - (750 / yy),
		(683 + hsingg) / xx, 1 - (736 / yy),
		(682 + hsingg) / xx, 1 - (747 / yy),

		(683 + hsingg) / xx, 1 - (736 / yy),
		(682 + hsingg) / xx, 1 - (747 / yy),
		(676 + hsingg) / xx, 1 - (723 / yy),

		(682 + hsingg) / xx, 1 - (747 / yy),
		(676 + hsingg) / xx, 1 - (723 / yy),
		(676 + hsingg) / xx, 1 - (744 / yy),

		(676 + hsingg) / xx, 1 - (723 / yy),
		(676 + hsingg) / xx, 1 - (744 / yy),
		(671 + hsingg) / xx, 1 - (723 / yy),


		//g


		1053 / xx, 1 - (604 / yy),
		1043 / xx, 1 - (604 / yy),
		1054 / xx, 1 - (691 / yy),

		1043 / xx, 1 - (604 / yy),
		1054 / xx, 1 - (691 / yy),
		1045 / xx, 1 - (690 / yy),

		1054 / xx, 1 - (691 / yy),
		1045 / xx, 1 - (690 / yy),
		1051 / xx, 1 - (708 / yy),

		1054 / xx, 1 - (691 / yy),
		1051 / xx, 1 - (708 / yy),
		1063 / xx, 1 - (704 / yy),

		1051 / xx, 1 - (708 / yy),
		1063 / xx, 1 - (704 / yy),
		1060 / xx, 1 - (716 / yy),

		1063 / xx, 1 - (704 / yy),
		1060 / xx, 1 - (716 / yy),
		1073 / xx, 1 - (706 / yy),

		1060 / xx, 1 - (716 / yy),
		1073 / xx, 1 - (706 / yy),
		1075 / xx, 1 - (718 / yy),

		1073 / xx, 1 - (706 / yy),
		1075 / xx, 1 - (718 / yy),
		1082 / xx, 1 - (699 / yy),

		1075 / xx, 1 - (718 / yy),
		1082 / xx, 1 - (699 / yy),
		1084 / xx, 1 - (714 / yy),

		1082 / xx, 1 - (699 / yy),
		1084 / xx, 1 - (714 / yy),
		1087 / xx, 1 - (692 / yy),

		1084 / xx, 1 - (714 / yy),
		1087 / xx, 1 - (692 / yy),
		1094 / xx, 1 - (701 / yy),

		1087 / xx, 1 - (692 / yy),
		1094 / xx, 1 - (701 / yy),
		1089 / xx, 1 - (675 / yy),

		1094 / xx, 1 - (701 / yy),
		1089 / xx, 1 - (675 / yy),
		1097 / xx, 1 - (690 / yy),

		1089 / xx, 1 - (675 / yy),
		1097 / xx, 1 - (690 / yy),
		1088 / xx, 1 - (603 / yy),

		1097 / xx, 1 - (690 / yy),
		1088 / xx, 1 - (603 / yy),
		1098 / xx, 1 - (603 / yy),



		//U
		(260 + universityn) / xx, 1 - (636 / yy),
		(269 + universityn) / xx, 1 - (715 / yy),
		(260 + universityn) / xx, 1 - (715 / yy),

		(260 + universityn) / xx, 1 - (636 / yy),
		(269 + universityn) / xx, 1 - (715 / yy),
		(269 + universityn) / xx, 1 - (636 / yy),

		(269 + universityn) / xx, 1 - (645 / yy),
		(268 + universityn) / xx, 1 - (676 / yy),
		(271 + universityn) / xx, 1 - (658 / yy),

		(269 + universityn) / xx, 1 - (645 / yy),
		(271 + universityn) / xx, 1 - (658 / yy),
		(277 + universityn) / xx, 1 - (647 / yy),

		(269 + universityn) / xx, 1 - (645 / yy),
		(277 + universityn) / xx, 1 - (647 / yy),
		(277 + universityn) / xx, 1 - (638 / yy),

		(277 + universityn) / xx, 1 - (647 / yy),
		(277 + universityn) / xx, 1 - (637 / yy),
		(284 + universityn) / xx, 1 - (647 / yy),

		(277 + universityn) / xx, 1 - (636 / yy),
		(284 + universityn) / xx, 1 - (647 / yy),
		(291 + universityn) / xx, 1 - (635 / yy),

		(284 + universityn) / xx, 1 - (647 / yy),
		(291 + universityn) / xx, 1 - (635 / yy),
		(299 + universityn) / xx, 1 - (643 / yy),

		(291 + universityn) / xx, 1 - (635 / yy),
		(299 + universityn) / xx, 1 - (643 / yy),
		(292 + universityn) / xx, 1 - (654 / yy),

		(299 + universityn) / xx, 1 - (643 / yy),
		(292 + universityn) / xx, 1 - (654 / yy),
		(302 + universityn) / xx, 1 - (660 / yy),

		(292 + universityn) / xx, 1 - (654 / yy),
		(302 + universityn) / xx, 1 - (660 / yy),
		(292 + universityn) / xx, 1 - (716 / yy),

		(302 + universityn) / xx, 1 - (660 / yy),
		(292 + universityn) / xx, 1 - (716 / yy),
		(302 + universityn) / xx, 1 - (716 / yy),
		//n
		(176 + uni) / xx, 1 - (604 / yy),
		(187 + uni) / xx, 1 - (621 / yy),
		(187 + uni) / xx, 1 - (604 / yy),

		(176 + uni) / xx, 1 - (604 / yy),
		(187 + uni) / xx, 1 - (621 / yy),
		(176 + uni) / xx, 1 - (621 / yy),

		(176 + uni) / xx, 1 - (634 / yy),
		(187 + uni) / xx, 1 - (716 / yy),
		(176 + uni) / xx, 1 - (716 / yy),

		(187 + uni) / xx, 1 - (634 / yy),
		(176 + uni) / xx, 1 - (634 / yy),
		(187 + uni) / xx, 1 - (716 / yy),

		//i



		1195 / xx, 1 - (635 / yy),
		1206 / xx, 1 - (635 / yy),
		1214 / xx, 1 - (715 / yy),

		1206 / xx, 1 - (635 / yy),
		1214 / xx, 1 - (715 / yy),
		1224 / xx, 1 - (715 / yy),

		1214 / xx, 1 - (715 / yy),
		1224 / xx, 1 - (715 / yy),
		1233 / xx, 1 - (635 / yy),

		1224 / xx, 1 - (715 / yy),
		1233 / xx, 1 - (635 / yy),
		1243 / xx, 1 - (635 / yy),

		//v

		1261 / xx, 1 - (680 / yy),
		1262 / xx, 1 - (670 / yy),
		1297 / xx, 1 - (680 / yy),

		1262 / xx, 1 - (670 / yy),
		1297 / xx, 1 - (680 / yy),
		1288 / xx, 1 - (669 / yy),

		1288 / xx, 1 - (669 / yy),
		1297 / xx, 1 - (680 / yy),
		1296 / xx, 1 - (659 / yy),

		1288 / xx, 1 - (669 / yy),
		1296 / xx, 1 - (659 / yy),
		1286 / xx, 1 - (662 / yy),

		1296 / xx, 1 - (659 / yy),
		1286 / xx, 1 - (662 / yy),
		1292 / xx, 1 - (647 / yy),

		1286 / xx, 1 - (662 / yy),
		1292 / xx, 1 - (647 / yy),
		1284 / xx, 1 - (652 / yy),

		1292 / xx, 1 - (647 / yy),
		1284 / xx, 1 - (652 / yy),
		1285 / xx, 1 - (636 / yy),

		1284 / xx, 1 - (652 / yy),
		1285 / xx, 1 - (636 / yy),
		1277 / xx, 1 - (646 / yy),

		1285 / xx, 1 - (636 / yy),
		1277 / xx, 1 - (646 / yy),
		1270 / xx, 1 - (635 / yy),

		1277 / xx, 1 - (646 / yy),
		1270 / xx, 1 - (635 / yy),
		1269 / xx, 1 - (647 / yy),

		1270 / xx, 1 - (635 / yy),
		1269 / xx, 1 - (647 / yy),
		1260 / xx, 1 - (639 / yy),

		1269 / xx, 1 - (647 / yy),
		1260 / xx, 1 - (639 / yy),
		1266 / xx, 1 - (651 / yy),

		1260 / xx, 1 - (639 / yy),
		1266 / xx, 1 - (651 / yy),
		1254 / xx, 1 - (652 / yy),

		1266 / xx, 1 - (651 / yy),
		1254 / xx, 1 - (652 / yy),
		1262 / xx, 1 - (659 / yy),

		1254 / xx, 1 - (652 / yy),
		1262 / xx, 1 - (659 / yy),
		1252 / xx, 1 - (667 / yy),

		1262 / xx, 1 - (659 / yy),
		1252 / xx, 1 - (667 / yy),
		1261 / xx, 1 - (670 / yy),

		1252 / xx, 1 - (667 / yy),
		1261 / xx, 1 - (670 / yy),
		1252 / xx, 1 - (684 / yy),

		1261 / xx, 1 - (670 / yy),
		1252 / xx, 1 - (684 / yy),
		1261 / xx, 1 - (680 / yy),

		1252 / xx, 1 - (684 / yy),
		1261 / xx, 1 - (680 / yy),
		1261 / xx, 1 - (687 / yy),

		1261 / xx, 1 - (687 / yy),
		1254 / xx, 1 - (703 / yy),
		1252 / xx, 1 - (683 / yy),

		1261 / xx, 1 - (687 / yy),
		1254 / xx, 1 - (703 / yy),
		1266 / xx, 1 - (701 / yy),

		1254 / xx, 1 - (703 / yy),
		1266 / xx, 1 - (701 / yy),
		1261 / xx, 1 - (712 / yy),

		1266 / xx, 1 - (701 / yy),
		1261 / xx, 1 - (712 / yy),
		1272 / xx, 1 - (706 / yy),

		1261 / xx, 1 - (712 / yy),
		1272 / xx, 1 - (706 / yy),
		1273 / xx, 1 - (717 / yy),

		1272 / xx, 1 - (706 / yy),
		1273 / xx, 1 - (717 / yy),
		1279 / xx, 1 - (706 / yy),

		1273 / xx, 1 - (717 / yy),
		1279 / xx, 1 - (706 / yy),
		1286 / xx, 1 - (715 / yy),

		1279 / xx, 1 - (706 / yy),
		1286 / xx, 1 - (715 / yy),
		1284 / xx, 1 - (700 / yy),

		1286 / xx, 1 - (715 / yy),
		1284 / xx, 1 - (700 / yy),
		1293 / xx, 1 - (703 / yy),

		1284 / xx, 1 - (700 / yy),
		1293 / xx, 1 - (703 / yy),
		1287 / xx, 1 - (691 / yy),

		1293 / xx, 1 - (703 / yy),
		1287 / xx, 1 - (691 / yy),
		1296 / xx, 1 - (692 / yy),



		//e

		1310 / xx, 1 - (635 / yy),
		1310 / xx, 1 - (716 / yy),
		1320 / xx, 1 - (716 / yy),

		1310 / xx, 1 - (635 / yy),
		1320 / xx, 1 - (716 / yy),
		1320 / xx, 1 - (635 / yy),

		1319 / xx, 1 - (647 / yy),
		1321 / xx, 1 - (671 / yy),
		1324 / xx, 1 - (659 / yy),

		1319 / xx, 1 - (647 / yy),
		1324 / xx, 1 - (659 / yy),
		1324 / xx, 1 - (650 / yy),

		1319 / xx, 1 - (647 / yy),
		1324 / xx, 1 - (650 / yy),
		1322 / xx, 1 - (639 / yy),

		1324 / xx, 1 - (650 / yy),
		1322 / xx, 1 - (639 / yy),
		1331 / xx, 1 - (649 / yy),

		1322 / xx, 1 - (639 / yy),
		1331 / xx, 1 - (649 / yy),
		1332 / xx, 1 - (635 / yy),

		1331 / xx, 1 - (649 / yy),
		1329 / xx, 1 - (635 / yy),
		1337 / xx, 1 - (653 / yy),

		1329 / xx, 1 - (635 / yy),
		1337 / xx, 1 - (653 / yy),
		1339 / xx, 1 - (638 / yy),


		//r


		(863 + universitys) / xx, 1 - (657 / yy),
		(853 + universitys) / xx, 1 - (658 / yy),
		(859 + universitys) / xx, 1 - (642 / yy),

		(853 + universitys) / xx, 1 - (658 / yy),
		(859 + universitys) / xx, 1 - (642 / yy),
		(848 + universitys) / xx, 1 - (646 / yy),

		(859 + universitys) / xx, 1 - (642 / yy),
		(848 + universitys) / xx, 1 - (646 / yy),
		(849 + universitys) / xx, 1 - (634 / yy),

		(848 + universitys) / xx, 1 - (646 / yy),
		(849 + universitys) / xx, 1 - (634 / yy),
		(838 + universitys) / xx, 1 - (647 / yy),

		(849 + universitys) / xx, 1 - (634 / yy),
		(838 + universitys) / xx, 1 - (647 / yy),
		(839 + universitys) / xx, 1 - (633 / yy),

		(838 + universitys) / xx, 1 - (647 / yy),
		(839 + universitys) / xx, 1 - (633 / yy),
		(831 + universitys) / xx, 1 - (656 / yy),

		(839 + universitys) / xx, 1 - (633 / yy),
		(831 + universitys) / xx, 1 - (656 / yy),
		(828 + universitys) / xx, 1 - (638 / yy),

		(831 + universitys) / xx, 1 - (656 / yy),
		(828 + universitys) / xx, 1 - (638 / yy),
		(824 + universitys) / xx, 1 - (648 / yy),

		(831 + universitys) / xx, 1 - (656 / yy),
		(824 + universitys) / xx, 1 - (648 / yy),
		(825 + universitys) / xx, 1 - (662 / yy),

		(831 + universitys) / xx, 1 - (656 / yy),
		(825 + universitys) / xx, 1 - (662 / yy),
		(827 + universitys) / xx, 1 - (671 / yy),

		(831 + universitys) / xx, 1 - (656 / yy),
		(827 + universitys) / xx, 1 - (671 / yy),
		(839 + universitys) / xx, 1 - (664 / yy),

		(827 + universitys) / xx, 1 - (671 / yy),
		(839 + universitys) / xx, 1 - (664 / yy),
		(838 + universitys) / xx, 1 - (677 / yy),

		(839 + universitys) / xx, 1 - (664 / yy),
		(838 + universitys) / xx, 1 - (677 / yy),
		(852 + universitys) / xx, 1 - (670 / yy),

		(838 + universitys) / xx, 1 - (677 / yy),
		(852 + universitys) / xx, 1 - (670 / yy),
		(850 + universitys) / xx, 1 - (685 / yy),

		(852 + universitys) / xx, 1 - (670 / yy),
		(850 + universitys) / xx, 1 - (685 / yy),
		(860 + universitys) / xx, 1 - (674 / yy),

		(850 + universitys) / xx, 1 - (685 / yy),
		(860 + universitys) / xx, 1 - (674 / yy),
		(855 + universitys) / xx, 1 - (688 / yy),

		(860 + universitys) / xx, 1 - (674 / yy),
		(855 + universitys) / xx, 1 - (688 / yy),
		(864 + universitys) / xx, 1 - (683 / yy),

		(855 + universitys) / xx, 1 - (688 / yy),
		(864 + universitys) / xx, 1 - (683 / yy),
		(855 + universitys) / xx, 1 - (699 / yy),

		(864 + universitys) / xx, 1 - (683 / yy),
		(855 + universitys) / xx, 1 - (699 / yy),
		(864 + universitys) / xx, 1 - (697 / yy),

		(855 + universitys) / xx, 1 - (699 / yy),
		(864 + universitys) / xx, 1 - (697 / yy),
		(860 + universitys) / xx, 1 - (709 / yy),

		(855 + universitys) / xx, 1 - (699 / yy),
		(860 + universitys) / xx, 1 - (709 / yy),
		(852 + universitys) / xx, 1 - (714 / yy),

		(855 + universitys) / xx, 1 - (699 / yy),
		(852 + universitys) / xx, 1 - (714 / yy),
		(843 + universitys) / xx, 1 - (706 / yy),

		(852 + universitys) / xx, 1 - (714 / yy),
		(843 + universitys) / xx, 1 - (706 / yy),
		(841 + universitys) / xx, 1 - (716 / yy),

		(843 + universitys) / xx, 1 - (706 / yy),
		(841 + universitys) / xx, 1 - (716 / yy),
		(838 + universitys) / xx, 1 - (704 / yy),

		(841 + universitys) / xx, 1 - (716 / yy),
		(838 + universitys) / xx, 1 - (704 / yy),
		(830 + universitys) / xx, 1 - (711 / yy),

		(838 + universitys) / xx, 1 - (704 / yy),
		(830 + universitys) / xx, 1 - (711 / yy),
		(832 + universitys) / xx, 1 - (698 / yy),

		(830 + universitys) / xx, 1 - (711 / yy),
		(832 + universitys) / xx, 1 - (698 / yy),
		(824 + universitys) / xx, 1 - (703 / yy),

		(832 + universitys) / xx, 1 - (698 / yy),
		(824 + universitys) / xx, 1 - (703 / yy),
		(831 + universitys) / xx, 1 - (689 / yy),

		(824 + universitys) / xx, 1 - (703 / yy),
		(831 + universitys) / xx, 1 - (689 / yy),
		(823 + universitys) / xx, 1 - (691 / yy),


		//s
		(176 + universi) / xx, 1 - (604 / yy),
		(187 + universi) / xx, 1 - (621 / yy),
		(187 + universi) / xx, 1 - (604 / yy),

		(176 + universi) / xx, 1 - (604 / yy),
		(187 + universi) / xx, 1 - (621 / yy),
		(176 + universi) / xx, 1 - (621 / yy),

		(176 + universi) / xx, 1 - (634 / yy),
		(187 + universi) / xx, 1 - (716 / yy),
		(176 + universi) / xx, 1 - (716 / yy),

		(187 + universi) / xx, 1 - (634 / yy),
		(176 + universi) / xx, 1 - (634 / yy),
		(187 + universi) / xx, 1 - (716 / yy),

		//i

		(140 + universityt) / xx, 1 - (636 / yy),
		(163 + universityt) / xx, 1 - (646 / yy),
		(140 + universityt) / xx, 1 - (646 / yy),

		(140 + universityt) / xx, 1 - (636 / yy),
		(163 + universityt) / xx, 1 - (646 / yy),
		(163 + universityt) / xx, 1 - (636 / yy),

		(146 + universityt) / xx, 1 - (615 / yy),
		(155 + universityt) / xx, 1 - (606 / yy),
		(155 + universityt) / xx, 1 - (615 / yy),

		(146 + universityt) / xx, 1 - (615 / yy),
		(155 + universityt) / xx, 1 - (615 / yy),
		(155 + universityt) / xx, 1 - (702 / yy),

		(146 + universityt) / xx, 1 - (615 / yy),
		(155 + universityt) / xx, 1 - (702 / yy),
		(146 + universityt) / xx, 1 - (707 / yy),

		(155 + universityt) / xx, 1 - (702 / yy),
		(146 + universityt) / xx, 1 - (707 / yy),
		(149 + universityt) / xx, 1 - (711 / yy),

		(155 + universityt) / xx, 1 - (702 / yy),
		(149 + universityt) / xx, 1 - (711 / yy),
		(160 + universityt) / xx, 1 - (707 / yy),

		(149 + universityt) / xx, 1 - (711 / yy),
		(160 + universityt) / xx, 1 - (707 / yy),
		(156 + universityt) / xx, 1 - (716 / yy),

		(160 + universityt) / xx, 1 - (707 / yy),
		(156 + universityt) / xx, 1 - (716 / yy),
		(165 + universityt) / xx, 1 - (716 / yy),

		(160 + universityt) / xx, 1 - (707 / yy),
		(165 + universityt) / xx, 1 - (716 / yy),
		(165 + universityt) / xx, 1 - (709 / yy),


		//t


		1454 / xx, 1 - (635 / yy),
		1463 / xx, 1 - (635 / yy),
		1477 / xx, 1 - (736 / yy),

		1463 / xx, 1 - (635 / yy),
		1477 / xx, 1 - (736 / yy),
		1481 / xx, 1 - (720 / yy),

		1481 / xx, 1 - (720 / yy),
		1492 / xx, 1 - (634 / yy),
		1477 / xx, 1 - (703 / yy),

		1481 / xx, 1 - (720 / yy),
		1492 / xx, 1 - (634 / yy),
		1499 / xx, 1 - (635 / yy),

		1473 / xx, 1 - (718 / yy),
		1477 / xx, 1 - (736 / yy),
		1468 / xx, 1 - (735 / yy),

		1477 / xx, 1 - (736 / yy),
		1468 / xx, 1 - (735 / yy),
		1471 / xx, 1 - (746 / yy),

		1468 / xx, 1 - (735 / yy),
		1471 / xx, 1 - (746 / yy),
		1458 / xx, 1 - (734 / yy),

		1471 / xx, 1 - (746 / yy),
		1458 / xx, 1 - (734 / yy),
		1459 / xx, 1 - (746 / yy),

		//y




		5 / xx, 1 - (100 / yy),
		138 / xx, 1 - (53 / yy),
		7 / xx, 1 - (130 / yy),
		138 / xx, 1 - (53 / yy),
		7 / xx, 1 - (130 / yy),
		147 / xx, 1 - (70 / yy),

		147 / xx, 1 - (70 / yy),
		154 / xx, 1 - (338 / yy),
		137 / xx, 1 - (328 / yy),

		137 / xx, 1 - (328 / yy),
		147 / xx, 1 - (70 / yy),
		135 / xx, 1 - (80 / yy),
		122 / xx, 1 - (318 / yy),
		138 / xx, 1 - (361 / yy),
		153 / xx, 1 - (340 / yy),

		24 / xx, 1 - (122 / yy),
		5 / xx, 1 - (130 / yy),
		5 / xx, 1 - (329 / yy),
		24 / xx, 1 - (122 / yy),
		20 / xx, 1 - (322 / yy),
		5 / xx, 1 - (329 / yy),

		127 / xx, 1 - (283 / yy),
		128 / xx, 1 - (309 / yy),
		11 / xx, 1 - (325 / yy),
		127 / xx, 1 - (283 / yy),
		17 / xx, 1 - (296 / yy),
		11 / xx, 1 - (325 / yy),

		24 / xx, 1 - (122 / yy),
		44 / xx, 1 - (169 / yy),
		20 / xx, 1 - (204 / yy),

		36 / xx, 1 - (148 / yy),
		44 / xx, 1 - (169 / yy),
		121 / xx, 1 - (108 / yy),
		44 / xx, 1 - (169 / yy),
		121 / xx, 1 - (108 / yy),
		127 / xx, 1 - (121 / yy),

		97 / xx, 1 - (90 / yy),
		131 / xx, 1 - (135 / yy),
		109 / xx, 1 - (137 / yy),
		97 / xx, 1 - (90 / yy),
		131 / xx, 1 - (135 / yy),
		113 / xx, 1 - (83 / yy),

		91 / xx, 1 - (93 / yy),
		94 / xx, 1 - (120 / yy),
		74 / xx, 1 - (100 / yy),
		74 / xx, 1 - (100 / yy),
		94 / xx, 1 - (120 / yy),
		78 / xx, 1 - (127 / yy),

		96 / xx, 1 - (138 / yy),
		130 / xx, 1 - (266 / yy),
		83 / xx, 1 - (146 / yy),
		83 / xx, 1 - (146 / yy),
		130 / xx, 1 - (266 / yy),
		120 / xx, 1 - (277 / yy),

		132 / xx, 1 - (245 / yy),
		130 / xx, 1 - (266 / yy),
		118 / xx, 1 - (225 / yy),

		130 / xx, 1 - (266 / yy),
		120 / xx, 1 - (277 / yy),
		130 / xx, 1 - (276 / yy),

		21 / xx, 1 - (225 / yy),
		20 / xx, 1 - (235 / yy),
		56 / xx, 1 - (162 / yy),
		56 / xx, 1 - (162 / yy),
		20 / xx, 1 - (235 / yy),
		72 / xx, 1 - (152 / yy),

		48 / xx, 1 - (192 / yy),
		86 / xx, 1 - (155 / yy),
		20 / xx, 1 - (235 / yy),
		86 / xx, 1 - (155 / yy),
		20 / xx, 1 - (235 / yy),
		90 / xx, 1 - (171 / yy),

		90 / xx, 1 - (171 / yy),
		43 / xx, 1 - (216 / yy),
		24 / xx, 1 - (252 / yy),
		90 / xx, 1 - (171 / yy),
		24 / xx, 1 - (252 / yy),
		28 / xx, 1 - (278 / yy),

		70 / xx, 1 - (215 / yy),
		96 / xx, 1 - (202 / yy),
		28 / xx, 1 - (278 / yy),
		96 / xx, 1 - (202 / yy),
		28 / xx, 1 - (278 / yy),
		96 / xx, 1 - (227 / yy),

		110 / xx, 1 - (243 / yy),
		126 / xx, 1 - (171 / yy),
		114 / xx, 1 - (146 / yy),
		114 / xx, 1 - (146 / yy),
		110 / xx, 1 - (243 / yy),
		86 / xx, 1 - (290 / yy),

		86 / xx, 1 - (290 / yy),
		98 / xx, 1 - (229 / yy),
		56 / xx, 1 - (291 / yy),
		//國

		261 / xx, 1 - (74 / yy),
		261 / xx, 1 - (104 / yy),
		306 / xx, 1 - (109 / yy),
		306 / xx, 1 - (109 / yy),
		261 / xx, 1 - (104 / yy),
		279 / xx, 1 - (132 / yy),

		219 / xx, 1 - (150 / yy),
		328 / xx, 1 - (121 / yy),
		330 / xx, 1 - (151 / yy),
		219 / xx, 1 - (150 / yy),
		330 / xx, 1 - (151 / yy),
		221 / xx, 1 - (193 / yy),

		279 / xx, 1 - (134 / yy),
		306 / xx, 1 - (108 / yy),
		304 / xx, 1 - (129 / yy),

		278 / xx, 1 - (170 / yy),
		247 / xx, 1 - (247 / yy),
		243 / xx, 1 - (216 / yy),
		278 / xx, 1 - (170 / yy),
		247 / xx, 1 - (247 / yy),
		292 / xx, 1 - (167 / yy),

		279 / xx, 1 - (190 / yy),
		320 / xx, 1 - (179 / yy),
		247 / xx, 1 - (247 / yy),

		315 / xx, 1 - (184 / yy),
		324 / xx, 1 - (172 / yy),
		332 / xx, 1 - (192 / yy),

		318 / xx, 1 - (186 / yy),
		289 / xx, 1 - (281 / yy),
		335 / xx, 1 - (197 / yy),
		318 / xx, 1 - (186 / yy),
		289 / xx, 1 - (281 / yy),
		266 / xx, 1 - (287 / yy),

		216 / xx, 1 - (291 / yy),
		361 / xx, 1 - (300 / yy),
		356 / xx, 1 - (280 / yy),
		216 / xx, 1 - (291 / yy),
		361 / xx, 1 - (300 / yy),
		234 / xx, 1 - (324 / yy),

		//立

		402 / xx, 1 - (124 / yy),
		419 / xx, 1 - (223 / yy),
		387 / xx, 1 - (128 / yy),
		387 / xx, 1 - (128 / yy),
		419 / xx, 1 - (223 / yy),
		405 / xx, 1 - (228 / yy),

		405 / xx, 1 - (128 / yy),
		489 / xx, 1 - (98 / yy),
		473 / xx, 1 - (96 / yy),
		405 / xx, 1 - (128 / yy),
		489 / xx, 1 - (98 / yy),
		431 / xx, 1 - (145 / yy),

		473 / xx, 1 - (60 / yy),
		471 / xx, 1 - (443 / yy),
		487 / xx, 1 - (53 / yy),
		487 / xx, 1 - (53 / yy),
		471 / xx, 1 - (443 / yy),
		493 / xx, 1 - (430 / yy),


		486 / xx, 1 - (98 / yy),
		530 / xx, 1 - (94 / yy),
		514 / xx, 1 - (116 / yy),
		486 / xx, 1 - (98 / yy),
		514 / xx, 1 - (116 / yy),
		487 / xx, 1 - (115 / yy),

		531 / xx, 1 - (101 / yy),
		539 / xx, 1 - (115 / yy),
		440 / xx, 1 - (223 / yy),
		531 / xx, 1 - (101 / yy),
		440 / xx, 1 - (223 / yy),
		441 / xx, 1 - (196 / yy),

		443 / xx, 1 - (223 / yy),
		471 / xx, 1 - (191 / yy),
		506 / xx, 1 - (203 / yy),
		471 / xx, 1 - (191 / yy),
		506 / xx, 1 - (203 / yy),
		510 / xx, 1 - (181 / yy),


		//中
		598 / xx, 1 - (91 / yy),
		612 / xx, 1 - (84 / yy),
		616 / xx, 1 - (234 / yy),
		598 / xx, 1 - (91 / yy),
		616 / xx, 1 - (234 / yy),
		603 / xx, 1 - (236 / yy),

		614 / xx, 1 - (83 / yy),
		623 / xx, 1 - (98 / yy),
		632 / xx, 1 - (86 / yy),

		623 / xx, 1 - (98 / yy),
		632 / xx, 1 - (86 / yy),
		633 / xx, 1 - (216 / yy),
		623 / xx, 1 - (96 / yy),
		633 / xx, 1 - (216 / yy),
		622 / xx, 1 - (221 / yy),

		700 / xx, 1 - (194 / yy),
		697 / xx, 1 - (214 / yy),
		541 / xx, 1 - (241 / yy),
		541 / xx, 1 - (241 / yy),
		697 / xx, 1 - (214 / yy),
		539 / xx, 1 - (277 / yy),

		539 / xx, 1 - (277 / yy),
		594 / xx, 1 - (251 / yy),
		549 / xx, 1 - (293 / yy),

		700 / xx, 1 - (191 / yy),
		745 / xx, 1 - (214 / yy),
		696 / xx, 1 - (212 / yy),
		700 / xx, 1 - (191 / yy),
		745 / xx, 1 - (214 / yy),
		732 / xx, 1 - (188 / yy),

		732 / xx, 1 - (188 / yy),
		745 / xx, 1 - (214 / yy),
		755 / xx, 1 - (193 / yy),
		732 / xx, 1 - (188 / yy),
		755 / xx, 1 - (193 / yy),
		747 / xx, 1 - (176 / yy),

		575 / xx, 1 - (274 / yy),
		600 / xx, 1 - (291 / yy),
		601 / xx, 1 - (331 / yy),
		600 / xx, 1 - (291 / yy),
		601 / xx, 1 - (331 / yy),
		621 / xx, 1 - (309 / yy),

		600 / xx, 1 - (291 / yy),
		621 / xx, 1 - (309 / yy),
		638 / xx, 1 - (291 / yy),
		600 / xx, 1 - (291 / yy),
		638 / xx, 1 - (291 / yy),
		636 / xx, 1 - (271 / yy),

		643 / xx, 1 - (271 / yy),
		666 / xx, 1 - (259 / yy),
		646 / xx, 1 - (281 / yy),
		701 / xx, 1 - (251 / yy),
		746 / xx, 1 - (293 / yy),
		741 / xx, 1 - (344 / yy),

		642 / xx, 1 - (77 / yy),
		682 / xx, 1 - (49 / yy),
		688 / xx, 1 - (58 / yy),
		688 / xx, 1 - (58 / yy),
		642 / xx, 1 - (77 / yy),
		685 / xx, 1 - (85 / yy),


		653 / xx, 1 - (80 / yy),
		650 / xx, 1 - (211 / yy),
		642 / xx, 1 - (77 / yy),
		642 / xx, 1 - (77 / yy),
		650 / xx, 1 - (211 / yy),
		643 / xx, 1 - (213 / yy),

		685 / xx, 1 - (87 / yy),
		675 / xx, 1 - (200 / yy),
		666 / xx, 1 - (84 / yy),
		666 / xx, 1 - (84 / yy),
		675 / xx, 1 - (200 / yy),
		666 / xx, 1 - (206 / yy),

		653 / xx, 1 - (113 / yy),
		666 / xx, 1 - (102 / yy),
		667 / xx, 1 - (152 / yy),

		653 / xx, 1 - (113 / yy),
		658 / xx, 1 - (140 / yy),
		662 / xx, 1 - (129 / yy),

		653 / xx, 1 - (113 / yy),
		658 / xx, 1 - (140 / yy),
		653 / xx, 1 - (129 / yy),
		662 / xx, 1 - (129 / yy),
		652 / xx, 1 - (160 / yy),
		660 / xx, 1 - (164 / yy),

		662 / xx, 1 - (163 / yy),
		652 / xx, 1 - (160 / yy),
		651 / xx, 1 - (176 / yy),
		651 / xx, 1 - (176 / yy),
		669 / xx, 1 - (155 / yy),
		657 / xx, 1 - (190 / yy),


		660 / xx, 1 - (195 / yy),
		649 / xx, 1 - (209 / yy),
		668 / xx, 1 - (202 / yy),

		687 / xx, 1 - (76 / yy),
		685 / xx, 1 - (94 / yy),
		722 / xx, 1 - (52 / yy),
		685 / xx, 1 - (94 / yy),
		722 / xx, 1 - (52 / yy),
		700 / xx, 1 - (92 / yy),

		700 / xx, 1 - (92 / yy),
		722 / xx, 1 - (52 / yy),
		693 / xx, 1 - (199 / yy),
		693 / xx, 1 - (199 / yy),
		722 / xx, 1 - (52 / yy),
		702 / xx, 1 - (192 / yy),

		682 / xx, 1 - (114 / yy),
		681 / xx, 1 - (129 / yy),
		698 / xx, 1 - (135 / yy),
		681 / xx, 1 - (129 / yy),
		698 / xx, 1 - (135 / yy),
		694 / xx, 1 - (164 / yy),

		694 / xx, 1 - (164 / yy),
		690 / xx, 1 - (150 / yy),
		683 / xx, 1 - (149 / yy),
		683 / xx, 1 - (149 / yy),
		676 / xx, 1 - (150 / yy),
		693 / xx, 1 - (195 / yy),
		693 / xx, 1 - (195 / yy),
		676 / xx, 1 - (150 / yy),
		686 / xx, 1 - (186 / yy),

		//興

		803 / xx, 1 - (172 / yy),
		796 / xx, 1 - (184 / yy),
		820 / xx, 1 - (180 / yy),

		796 / xx, 1 - (184 / yy),
		801 / xx, 1 - (219 / yy),
		820 / xx, 1 - (180 / yy),

		801 / xx, 1 - (219 / yy),
		820 / xx, 1 - (180 / yy),
		810 / xx, 1 - (226 / yy),

		810 / xx, 1 - (226 / yy),
		820 / xx, 1 - (180 / yy),
		836 / xx, 1 - (198 / yy),

		836 / xx, 1 - (198 / yy),
		820 / xx, 1 - (180 / yy),
		888 / xx, 1 - (162 / yy),

		888 / xx, 1 - (162 / yy),
		820 / xx, 1 - (180 / yy),
		892 / xx, 1 - (133 / yy),

		892 / xx, 1 - (133 / yy),
		888 / xx, 1 - (162 / yy),
		913 / xx, 1 - (137 / yy),

		913 / xx, 1 - (137 / yy),
		888 / xx, 1 - (162 / yy),
		908 / xx, 1 - (162 / yy),

		870 / xx, 1 - (148 / yy),
		880 / xx, 1 - (144 / yy),
		879 / xx, 1 - (113 / yy),

		879 / xx, 1 - (113 / yy),
		888 / xx, 1 - (57 / yy),
		888 / xx, 1 - (114 / yy),

		888 / xx, 1 - (114 / yy),
		883 / xx, 1 - (142 / yy),
		891 / xx, 1 - (137 / yy),

		862 / xx, 1 - (179 / yy),
		874 / xx, 1 - (171 / yy),
		865 / xx, 1 - (247 / yy),
		862 / xx, 1 - (179 / yy),
		865 / xx, 1 - (247 / yy),
		846 / xx, 1 - (237 / yy),

		846 / xx, 1 - (237 / yy),
		865 / xx, 1 - (247 / yy),
		850 / xx, 1 - (282 / yy),
		850 / xx, 1 - (282 / yy),
		846 / xx, 1 - (237 / yy),
		810 / xx, 1 - (286 / yy),

		882 / xx, 1 - (221 / yy),
		911 / xx, 1 - (257 / yy),
		939 / xx, 1 - (259 / yy),

		911 / xx, 1 - (257 / yy),
		939 / xx, 1 - (259 / yy),
		915 / xx, 1 - (284 / yy),

		915 / xx, 1 - (284 / yy),
		911 / xx, 1 - (257 / yy),
		890 / xx, 1 - (281 / yy),

		915 / xx, 1 - (284 / yy),
		939 / xx, 1 - (259 / yy),
		938 / xx, 1 - (276 / yy),

		938 / xx, 1 - (276 / yy),
		915 / xx, 1 - (284 / yy),
		931 / xx, 1 - (301 / yy),

		//大


		1013 / xx, 1 - (43 / yy),
		1020 / xx, 1 - (69 / yy),
		1015 / xx, 1 - (65 / yy),
		1013 / xx, 1 - (43 / yy),
		1015 / xx, 1 - (65 / yy),
		1006 / xx, 1 - (85 / yy),
		1013 / xx, 1 - (43 / yy),
		1006 / xx, 1 - (85 / yy),
		1000 / xx, 1 - (78 / yy),
		990 / xx, 1 - (62 / yy),
		1018 / xx, 1 - (110 / yy),
		990 / xx, 1 - (170 / yy),
		1006 / xx, 1 - (85 / yy),
		1017 / xx, 1 - (87 / yy),
		1018 / xx, 1 - (110 / yy),
		1006 / xx, 1 - (135 / yy),
		1026 / xx, 1 - (122 / yy),
		1005 / xx, 1 - (170 / yy),
		1006 / xx, 1 - (135 / yy),
		990 / xx, 1 - (168 / yy),
		1006 / xx, 1 - (201 / yy),
		990 / xx, 1 - (168 / yy),
		1006 / xx, 1 - (201 / yy),
		990 / xx, 1 - (204 / yy),

		967 / xx, 1 - (294 / yy),
		958 / xx, 1 - (275 / yy),
		984 / xx, 1 - (230 / yy),

		958 / xx, 1 - (275 / yy),
		984 / xx, 1 - (230 / yy),
		961 / xx, 1 - (246 / yy),

		984 / xx, 1 - (230 / yy),
		961 / xx, 1 - (246 / yy),
		980 / xx, 1 - (208 / yy),

		984 / xx, 1 - (230 / yy),
		980 / xx, 1 - (208 / yy),
		1002 / xx, 1 - (217 / yy),

		980 / xx, 1 - (208 / yy),
		1002 / xx, 1 - (217 / yy),
		1103 / xx, 1 - (151 / yy),

		1002 / xx, 1 - (217 / yy),
		1103 / xx, 1 - (151 / yy),
		1096 / xx, 1 - (174 / yy),

		1103 / xx, 1 - (151 / yy),
		1096 / xx, 1 - (174 / yy),
		1116 / xx, 1 - (163 / yy),

		1096 / xx, 1 - (174 / yy),
		1116 / xx, 1 - (163 / yy),
		1124 / xx, 1 - (184 / yy),

		1124 / xx, 1 - (184 / yy),
		1096 / xx, 1 - (174 / yy),
		1116 / xx, 1 - (198 / yy),

		1116 / xx, 1 - (198 / yy),
		1096 / xx, 1 - (174 / yy),
		1101 / xx, 1 - (197 / yy),

		1101 / xx, 1 - (197 / yy),
		1096 / xx, 1 - (174 / yy),
		1082 / xx, 1 - (208 / yy),

		1047 / xx, 1 - (50 / yy),
		1056 / xx, 1 - (64 / yy),
		1036 / xx, 1 - (90 / yy),
		1056 / xx, 1 - (64 / yy),
		1036 / xx, 1 - (90 / yy),
		1050 / xx, 1 - (82 / yy),

		1036 / xx, 1 - (90 / yy),
		1022 / xx, 1 - (87 / yy),
		1020 / xx, 1 - (97 / yy),

		1036 / xx, 1 - (90 / yy),
		1049 / xx, 1 - (82 / yy),
		1050 / xx, 1 - (92 / yy),

		1036 / xx, 1 - (90 / yy),
		1050 / xx, 1 - (92 / yy),
		1020 / xx, 1 - (97 / yy),

		1027 / xx, 1 - (110 / yy),
		1050 / xx, 1 - (92 / yy),
		1020 / xx, 1 - (100 / yy),

		1027 / xx, 1 - (108 / yy),
		1050 / xx, 1 - (89 / yy),
		1040 / xx, 1 - (109 / yy),

		1040 / xx, 1 - (109 / yy),
		1030 / xx, 1 - (110 / yy),
		1022 / xx, 1 - (142 / yy),

		1040 / xx, 1 - (109 / yy),
		1050 / xx, 1 - (90 / yy),
		1037 / xx, 1 - (140 / yy),

		1037 / xx, 1 - (140 / yy),
		1029 / xx, 1 - (133 / yy),
		1023 / xx, 1 - (145 / yy),

		1037 / xx, 1 - (141 / yy),
		1023 / xx, 1 - (145 / yy),
		1030 / xx, 1 - (163 / yy),

		1025 / xx, 1 - (161 / yy),
		1022 / xx, 1 - (183 / yy),
		1047 / xx, 1 - (170 / yy),


		1047 / xx, 1 - (115 / yy),
		1050 / xx, 1 - (118 / yy),
		1038 / xx, 1 - (141 / yy),

		1038 / xx, 1 - (141 / yy),
		1050 / xx, 1 - (118 / yy),
		1046 / xx, 1 - (149 / yy),

		1039 / xx, 1 - (141 / yy),
		1031 / xx, 1 - (166 / yy),
		1050 / xx, 1 - (155 / yy),

		1031 / xx, 1 - (166 / yy),
		1050 / xx, 1 - (155 / yy),
		1048 / xx, 1 - (171 / yy),

		1091 / xx, 1 - (48 / yy),
		1066 / xx, 1 - (77 / yy),
		1085 / xx, 1 - (102 / yy),

		1066 / xx, 1 - (77 / yy),
		1058 / xx, 1 - (72 / yy),
		1057 / xx, 1 - (84 / yy),

		1066 / xx, 1 - (92 / yy),
		1066 / xx, 1 - (77 / yy),
		1057 / xx, 1 - (84 / yy),

		1066 / xx, 1 - (92 / yy),
		1066 / xx, 1 - (77 / yy),
		1078 / xx, 1 - (90 / yy),

		1078 / xx, 1 - (90 / yy),
		1086 / xx, 1 - (103 / yy),
		1080 / xx, 1 - (165 / yy),

		1060 / xx, 1 - (108 / yy),
		1081 / xx, 1 - (98 / yy),
		1053 / xx, 1 - (147 / yy),

		1053 / xx, 1 - (147 / yy),
		1081 / xx, 1 - (98 / yy),
		1078 / xx, 1 - (164 / yy),

		1061 / xx, 1 - (175 / yy),
		1063 / xx, 1 - (157 / yy),
		1078 / xx, 1 - (164 / yy),


		1060 / xx, 1 - (193 / yy),
		1031 / xx, 1 - (226 / yy),
		1065 / xx, 1 - (212 / yy),

		1031 / xx, 1 - (226 / yy),
		1065 / xx, 1 - (212 / yy),
		1063 / xx, 1 - (231 / yy),

		1031 / xx, 1 - (226 / yy),
		1051 / xx, 1 - (232 / yy),
		1040 / xx, 1 - (238 / yy),

		1063 / xx, 1 - (231 / yy),
		1051 / xx, 1 - (232 / yy),
		1041 / xx, 1 - (260 / yy),

		1041 / xx, 1 - (260 / yy),
		1063 / xx, 1 - (231 / yy),
		1068 / xx, 1 - (251 / yy),

		1019 / xx, 1 - (273 / yy),
		1008 / xx, 1 - (265 / yy),
		1008 / xx, 1 - (284 / yy),

		1019 / xx, 1 - (273 / yy),
		1008 / xx, 1 - (284 / yy),
		1023 / xx, 1 - (287 / yy),

		1018 / xx, 1 - (271 / yy),
		1019 / xx, 1 - (280 / yy),
		1049 / xx, 1 - (269 / yy),

		1018 / xx, 1 - (271 / yy),
		1049 / xx, 1 - (269 / yy),
		1067 / xx, 1 - (248 / yy),

		1067 / xx, 1 - (248 / yy),
		1049 / xx, 1 - (269 / yy),
		1085 / xx, 1 - (263 / yy),

		1085 / xx, 1 - (263 / yy),
		1069 / xx, 1 - (248 / yy),
		1098 / xx, 1 - (250 / yy),

		1085 / xx, 1 - (263 / yy),
		1098 / xx, 1 - (250 / yy),
		1100 / xx, 1 - (274 / yy),

		1051 / xx, 1 - (270 / yy),
		1070 / xx, 1 - (269 / yy),
		1065 / xx, 1 - (369 / yy),

		1051 / xx, 1 - (270 / yy),
		1065 / xx, 1 - (369 / yy),
		1052 / xx, 1 - (337 / yy),

		1052 / xx, 1 - (337 / yy),
		1065 / xx, 1 - (369 / yy),
		1035 / xx, 1 - (414 / yy),

		1052 / xx, 1 - (337 / yy),
		1035 / xx, 1 - (414 / yy),
		1019 / xx, 1 - (393 / yy),

		1035 / xx, 1 - (414 / yy),
		1019 / xx, 1 - (393 / yy),
		991 / xx, 1 - (419 / yy),

		991 / xx, 1 - (419 / yy),
		1035 / xx, 1 - (414 / yy),
		990 / xx, 1 - (439 / yy),

		991 / xx, 1 - (419 / yy),
		990 / xx, 1 - (439 / yy),
		956 / xx, 1 - (413 / yy),
		//學

		1248 / xx, 1 - (0 / yy),
		1286 / xx, 1 - (18 / yy),
		1256 / xx, 1 - (44 / yy),

		1286 / xx, 1 - (18 / yy),
		1256 / xx, 1 - (44 / yy),
		1332 / xx, 1 - (31 / yy),

		1256 / xx, 1 - (44 / yy),
		1332 / xx, 1 - (31 / yy),
		1260 / xx, 1 - (78 / yy),

		1332 / xx, 1 - (31 / yy),
		1260 / xx, 1 - (78 / yy),
		1384 / xx, 1 - (32 / yy),

		1260 / xx, 1 - (78 / yy),
		1384 / xx, 1 - (32 / yy),
		1266 / xx, 1 - (145 / yy),

		1384 / xx, 1 - (32 / yy),
		1266 / xx, 1 - (145 / yy),
		1426 / xx, 1 - (23 / yy),

		1266 / xx, 1 - (145 / yy),
		1426 / xx, 1 - (23 / yy),
		1262 / xx, 1 - (235 / yy),

		1426 / xx, 1 - (23 / yy),
		1262 / xx, 1 - (235 / yy),
		1469 / xx, 1 - (3 / yy),

		1262 / xx, 1 - (235 / yy),
		1469 / xx, 1 - (3 / yy),
		1296 / xx, 1 - (346 / yy),

		1469 / xx, 1 - (3 / yy),
		1296 / xx, 1 - (346 / yy),
		1455 / xx, 1 - (54 / yy),

		1296 / xx, 1 - (346 / yy),
		1455 / xx, 1 - (54 / yy),
		1332 / xx, 1 - (338 / yy),

		1455 / xx, 1 - (54 / yy),
		1332 / xx, 1 - (338 / yy),
		1449 / xx, 1 - (102 / yy),

		1332 / xx, 1 - (338 / yy),
		1449 / xx, 1 - (102 / yy),
		1389 / xx, 1 - (339 / yy),

		1449 / xx, 1 - (102 / yy),
		1389 / xx, 1 - (339 / yy),
		1445 / xx, 1 - (172 / yy),

		1389 / xx, 1 - (339 / yy),
		1445 / xx, 1 - (172 / yy),
		1437 / xx, 1 - (362 / yy),

		1445 / xx, 1 - (172 / yy),
		1437 / xx, 1 - (362 / yy),
		1453 / xx, 1 - (258 / yy),

		1437 / xx, 1 - (362 / yy),
		1453 / xx, 1 - (258 / yy),
		1465 / xx, 1 - (329 / yy),

		1437 / xx, 1 - (362 / yy),
		1465 / xx, 1 - (329 / yy),
		1484 / xx, 1 - (395 / yy),

		1262 / xx, 1 - (235 / yy),
		1297 / xx, 1 - (346 / yy),
		1261 / xx, 1 - (365 / yy),

		1262 / xx, 1 - (235 / yy),
		1261 / xx, 1 - (365 / yy),
		1246 / xx, 1 - (326 / yy),

		1261 / xx, 1 - (365 / yy),
		1246 / xx, 1 - (326 / yy),
		1232 / xx, 1 - (388 / yy),
		//log藍

		1357 / xx, 1 - (175 / yy),
		1339 / xx, 1 - (105 / yy),
		1362 / xx, 1 - (98 / yy),

		1357 / xx, 1 - (175 / yy),
		1339 / xx, 1 - (105 / yy),
		1323 / xx, 1 - (122 / yy),

		1357 / xx, 1 - (175 / yy),
		1323 / xx, 1 - (122 / yy),
		1315 / xx, 1 - (139 / yy),

		1357 / xx, 1 - (175 / yy),
		1315 / xx, 1 - (139 / yy),
		1309 / xx, 1 - (158 / yy),

		1357 / xx, 1 - (175 / yy),
		1309 / xx, 1 - (158 / yy),
		1306 / xx, 1 - (178 / yy),

		1357 / xx, 1 - (175 / yy),
		1306 / xx, 1 - (178 / yy),
		1308 / xx, 1 - (200 / yy),

		1357 / xx, 1 - (175 / yy),
		1308 / xx, 1 - (200 / yy),
		1312 / xx, 1 - (224 / yy),

		1357 / xx, 1 - (175 / yy),
		1312 / xx, 1 - (224 / yy),
		1324 / xx, 1 - (249 / yy),

		1357 / xx, 1 - (175 / yy),
		1324 / xx, 1 - (249 / yy),
		1337 / xx, 1 - (264 / yy),

		1357 / xx, 1 - (175 / yy),
		1337 / xx, 1 - (264 / yy),
		1359 / xx, 1 - (271 / yy),

		1357 / xx, 1 - (175 / yy),
		1359 / xx, 1 - (271 / yy),
		1381 / xx, 1 - (262 / yy),

		1357 / xx, 1 - (175 / yy),
		1381 / xx, 1 - (262 / yy),
		1397 / xx, 1 - (243 / yy),

		1357 / xx, 1 - (175 / yy),
		1397 / xx, 1 - (243 / yy),
		1406 / xx, 1 - (216 / yy),

		1357 / xx, 1 - (175 / yy),
		1406 / xx, 1 - (216 / yy),
		1412 / xx, 1 - (191 / yy),

		1357 / xx, 1 - (175 / yy),
		1412 / xx, 1 - (191 / yy),
		1409 / xx, 1 - (165 / yy),

		1357 / xx, 1 - (175 / yy),
		1409 / xx, 1 - (165 / yy),
		1401 / xx, 1 - (142 / yy),

		1357 / xx, 1 - (175 / yy),
		1401 / xx, 1 - (142 / yy),
		1395 / xx, 1 - (128 / yy),

		1357 / xx, 1 - (175 / yy),
		1395 / xx, 1 - (128 / yy),
		1384 / xx, 1 - (110 / yy),

		1357 / xx, 1 - (175 / yy),
		1384 / xx, 1 - (110 / yy),
		1362 / xx, 1 - (98 / yy),
		//log紅

		1254 / xx, 1 - (26 / yy),
		1258 / xx, 1 - (48 / yy),
		1281 / xx, 1 - (42 / yy),

		1258 / xx, 1 - (48 / yy),
		1281 / xx, 1 - (42 / yy),
		1282 / xx, 1 - (62 / yy),

		1281 / xx, 1 - (42 / yy),
		1282 / xx, 1 - (62 / yy),
		1304 / xx, 1 - (62 / yy),

		1282 / xx, 1 - (62 / yy),
		1304 / xx, 1 - (62 / yy),
		1295 / xx, 1 - (77 / yy),

		1304 / xx, 1 - (62 / yy),
		1295 / xx, 1 - (77 / yy),
		1319 / xx, 1 - (78 / yy),

		1295 / xx, 1 - (77 / yy),
		1319 / xx, 1 - (78 / yy),
		1319 / xx, 1 - (99 / yy),

		1319 / xx, 1 - (78 / yy),
		1319 / xx, 1 - (99 / yy),
		1340 / xx, 1 - (102 / yy),

		1340 / xx, 1 - (102 / yy),
		1319 / xx, 1 - (99 / yy),
		1338 / xx, 1 - (122 / yy),

		1340 / xx, 1 - (102 / yy),
		1338 / xx, 1 - (122 / yy),
		1353 / xx, 1 - (126 / yy),

		1338 / xx, 1 - (122 / yy),
		1353 / xx, 1 - (126 / yy),
		1354 / xx, 1 - (152 / yy),

		1353 / xx, 1 - (126 / yy),
		1354 / xx, 1 - (152 / yy),
		1372 / xx, 1 - (159 / yy),

		1354 / xx, 1 - (152 / yy),
		1372 / xx, 1 - (159 / yy),
		1370 / xx, 1 - (183 / yy),

		1372 / xx, 1 - (159 / yy),
		1370 / xx, 1 - (183 / yy),
		1389 / xx, 1 - (196 / yy),

		1370 / xx, 1 - (183 / yy),
		1389 / xx, 1 - (196 / yy),
		1394 / xx, 1 - (237 / yy),

		1389 / xx, 1 - (196 / yy),
		1394 / xx, 1 - (237 / yy),
		1408 / xx, 1 - (252 / yy),

		1394 / xx, 1 - (237 / yy),
		1408 / xx, 1 - (252 / yy),
		1408 / xx, 1 - (291 / yy),

		1408 / xx, 1 - (252 / yy),
		1408 / xx, 1 - (291 / yy),
		1418 / xx, 1 - (321 / yy)
		//log白

	};
	static GLfloat colors[] = { 0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		0.0, 0.0, 1.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 0.0, 0.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0,
		1.0, 1.0, 1.0
	};
	glEnableClientState(GL_VERTEX_ARRAY);
	glEnableClientState(GL_COLOR_ARRAY);

	glVertexPointer(2, GL_FLOAT, 0, vertices);
	glColorPointer(3, GL_FLOAT, 0, colors);

}
void drawLogo(){
	glPushMatrix();
	if (spinMode == 'x'){
		glRotatef(spin, 0.0, 1.0, 0.0);
	}
	else if (spinMode == 'y'){
		glRotatef(spin, 1.0, 0.0, 0.0);
	}
	else if (spinMode == 'z'){
		glRotatef(spin, 0.0, 0.0, 1.0);
	}

	glPushMatrix();
	glTranslatef(0.0, 0.0, -10.0);
	glTranslatef(-0.5, -0.5, 0.0);


	glPushMatrix();
	glColor3f(0.0, 0.0, 1.0);


	float xx, yy;
	xx = 1500;
	yy = 750 / 221 * 750 / 3;

	glBegin(GL_TRIANGLES);




	glVertex3f(13 / xx, 1 - (716 / yy), 0.0);
	glVertex3f(13 / xx, 1 - (604 / yy), 0.0);
	glVertex3f(23 / xx, 1 - (716 / yy), 0.0);

	glVertex3f(13 / xx, 1 - (604 / yy), 0.0);
	glVertex3f(23 / xx, 1 - (716 / yy), 0.0);
	glVertex3f(23 / xx, 1 - (604 / yy), 0.0);

	glVertex3f(23 / xx, 1 - (604 / yy), 0.0);
	glVertex3f(60 / xx, 1 - (716 / yy), 0.0);
	glVertex3f(23 / xx, 1 - (629 / yy), 0.0);

	glVertex3f(23 / xx, 1 - (604 / yy), 0.0);
	glVertex3f(60 / xx, 1 - (716 / yy), 0.0);
	glVertex3f(60 / xx, 1 - (691 / yy), 0.0);

	glVertex3f(60 / xx, 1 - (716 / yy), 0.0);
	glVertex3f(60 / xx, 1 - (604 / yy), 0.0);
	glVertex3f(68 / xx, 1 - (604 / yy), 0.0);

	glVertex3f(60 / xx, 1 - (716 / yy), 0.0);
	glVertex3f(68 / xx, 1 - (716 / yy), 0.0);
	glVertex3f(68 / xx, 1 - (604 / yy), 0.0);

	//N


	glVertex3f(86 / xx, 1 - (656 / yy), 0.0);
	glVertex3f(87 / xx, 1 - (646 / yy), 0.0);
	glVertex3f(94 / xx, 1 - (658 / yy), 0.0);

	glVertex3f(87 / xx, 1 - (646 / yy), 0.0);
	glVertex3f(94 / xx, 1 - (658 / yy), 0.0);
	glVertex3f(98 / xx, 1 - (636 / yy), 0.0);

	glVertex3f(94 / xx, 1 - (658 / yy), 0.0);
	glVertex3f(98 / xx, 1 - (636 / yy), 0.0);
	glVertex3f(102 / xx, 1 - (646 / yy), 0.0);

	glVertex3f(98 / xx, 1 - (636 / yy), 0.0);
	glVertex3f(102 / xx, 1 - (646 / yy), 0.0);
	glVertex3f(117 / xx, 1 - (636 / yy), 0.0);

	glVertex3f(102 / xx, 1 - (646 / yy), 0.0);
	glVertex3f(117 / xx, 1 - (636 / yy), 0.0);
	glVertex3f(113 / xx, 1 - (646 / yy), 0.0);

	glVertex3f(117 / xx, 1 - (636 / yy), 0.0);
	glVertex3f(113 / xx, 1 - (646 / yy), 0.0);
	glVertex3f(128 / xx, 1 - (649 / yy), 0.0);

	glVertex3f(113 / xx, 1 - (646 / yy), 0.0);
	glVertex3f(128 / xx, 1 - (649 / yy), 0.0);
	glVertex3f(118 / xx, 1 - (656 / yy), 0.0);

	glVertex3f(128 / xx, 1 - (649 / yy), 0.0);
	glVertex3f(118 / xx, 1 - (656 / yy), 0.0);
	glVertex3f(128 / xx, 1 - (655 / yy), 0.0);

	glVertex3f(118 / xx, 1 - (656 / yy), 0.0);
	glVertex3f(128 / xx, 1 - (655 / yy), 0.0);
	glVertex3f(128 / xx, 1 - (717 / yy), 0.0);

	glVertex3f(118 / xx, 1 - (656 / yy), 0.0);
	glVertex3f(128 / xx, 1 - (717 / yy), 0.0);
	glVertex3f(118 / xx, 1 - (716 / yy), 0.0);

	glVertex3f(118 / xx, 1 - (663 / yy), 0.0);
	glVertex3f(118 / xx, 1 - (677 / yy), 0.0);
	glVertex3f(100 / xx, 1 - (682 / yy), 0.0);

	glVertex3f(118 / xx, 1 - (663 / yy), 0.0);
	glVertex3f(100 / xx, 1 - (682 / yy), 0.0);
	glVertex3f(92 / xx, 1 - (672 / yy), 0.0);

	glVertex3f(100 / xx, 1 - (682 / yy), 0.0);
	glVertex3f(92 / xx, 1 - (672 / yy), 0.0);
	glVertex3f(93 / xx, 1 - (694 / yy), 0.0);

	glVertex3f(92 / xx, 1 - (672 / yy), 0.0);
	glVertex3f(93 / xx, 1 - (694 / yy), 0.0);
	glVertex3f(84 / xx, 1 - (691 / yy), 0.0);

	glVertex3f(93 / xx, 1 - (694 / yy), 0.0);
	glVertex3f(84 / xx, 1 - (691 / yy), 0.0);
	glVertex3f(88 / xx, 1 - (715 / yy), 0.0);

	glVertex3f(93 / xx, 1 - (694 / yy), 0.0);
	glVertex3f(88 / xx, 1 - (715 / yy), 0.0);
	glVertex3f(94 / xx, 1 - (703 / yy), 0.0);

	glVertex3f(88 / xx, 1 - (715 / yy), 0.0);
	glVertex3f(94 / xx, 1 - (703 / yy), 0.0);
	glVertex3f(101 / xx, 1 - (708 / yy), 0.0);

	glVertex3f(88 / xx, 1 - (715 / yy), 0.0);
	glVertex3f(101 / xx, 1 - (708 / yy), 0.0);
	glVertex3f(101 / xx, 1 - (718 / yy), 0.0);

	glVertex3f(101 / xx, 1 - (708 / yy), 0.0);
	glVertex3f(101 / xx, 1 - (718 / yy), 0.0);
	glVertex3f(109 / xx, 1 - (706 / yy), 0.0);

	glVertex3f(101 / xx, 1 - (718 / yy), 0.0);
	glVertex3f(109 / xx, 1 - (706 / yy), 0.0);
	glVertex3f(113 / xx, 1 - (715 / yy), 0.0);

	glVertex3f(109 / xx, 1 - (706 / yy), 0.0);
	glVertex3f(113 / xx, 1 - (715 / yy), 0.0);
	glVertex3f(116 / xx, 1 - (694 / yy), 0.0);

	glVertex3f(113 / xx, 1 - (715 / yy), 0.0);
	glVertex3f(116 / xx, 1 - (694 / yy), 0.0);
	glVertex3f(120 / xx, 1 - (704 / yy), 0.0);

	glVertex3f(118 / xx, 1 - (677 / yy), 0.0);
	glVertex3f(116 / xx, 1 - (649 / yy), 0.0);
	glVertex3f(120 / xx, 1 - (704 / yy), 0.0);

	//a

	glVertex3f(140 / xx, 1 - (636 / yy), 0.0);
	glVertex3f(163 / xx, 1 - (646 / yy), 0.0);
	glVertex3f(140 / xx, 1 - (646 / yy), 0.0);

	glVertex3f(140 / xx, 1 - (636 / yy), 0.0);
	glVertex3f(163 / xx, 1 - (646 / yy), 0.0);
	glVertex3f(163 / xx, 1 - (636 / yy), 0.0);

	glVertex3f(146 / xx, 1 - (615 / yy), 0.0);
	glVertex3f(155 / xx, 1 - (606 / yy), 0.0);
	glVertex3f(155 / xx, 1 - (615 / yy), 0.0);

	glVertex3f(146 / xx, 1 - (615 / yy), 0.0);
	glVertex3f(155 / xx, 1 - (615 / yy), 0.0);
	glVertex3f(155 / xx, 1 - (702 / yy), 0.0);

	glVertex3f(146 / xx, 1 - (615 / yy), 0.0);
	glVertex3f(155 / xx, 1 - (702 / yy), 0.0);
	glVertex3f(146 / xx, 1 - (707 / yy), 0.0);

	glVertex3f(155 / xx, 1 - (702 / yy), 0.0);
	glVertex3f(146 / xx, 1 - (707 / yy), 0.0);
	glVertex3f(149 / xx, 1 - (711 / yy), 0.0);

	glVertex3f(155 / xx, 1 - (702 / yy), 0.0);
	glVertex3f(149 / xx, 1 - (711 / yy), 0.0);
	glVertex3f(160 / xx, 1 - (707 / yy), 0.0);

	glVertex3f(149 / xx, 1 - (711 / yy), 0.0);
	glVertex3f(160 / xx, 1 - (707 / yy), 0.0);
	glVertex3f(156 / xx, 1 - (716 / yy), 0.0);

	glVertex3f(160 / xx, 1 - (707 / yy), 0.0);
	glVertex3f(156 / xx, 1 - (716 / yy), 0.0);
	glVertex3f(165 / xx, 1 - (716 / yy), 0.0);

	glVertex3f(160 / xx, 1 - (707 / yy), 0.0);
	glVertex3f(165 / xx, 1 - (716 / yy), 0.0);
	glVertex3f(165 / xx, 1 - (709 / yy), 0.0);

	//t

	glVertex3f(176 / xx, 1 - (604 / yy), 0.0);
	glVertex3f(187 / xx, 1 - (621 / yy), 0.0);
	glVertex3f(187 / xx, 1 - (604 / yy), 0.0);

	glVertex3f(176 / xx, 1 - (604 / yy), 0.0);
	glVertex3f(187 / xx, 1 - (621 / yy), 0.0);
	glVertex3f(176 / xx, 1 - (621 / yy), 0.0);

	glVertex3f(176 / xx, 1 - (634 / yy), 0.0);
	glVertex3f(187 / xx, 1 - (716 / yy), 0.0);
	glVertex3f(176 / xx, 1 - (716 / yy), 0.0);

	glVertex3f(187 / xx, 1 - (634 / yy), 0.0);
	glVertex3f(176 / xx, 1 - (634 / yy), 0.0);
	glVertex3f(187 / xx, 1 - (716 / yy), 0.0);

	//i

	glVertex3f(201 / xx, 1 - (657 / yy), 0.0);
	glVertex3f(217 / xx, 1 - (648 / yy), 0.0);
	glVertex3f(212 / xx, 1 - (655 / yy), 0.0);

	glVertex3f(217 / xx, 1 - (648 / yy), 0.0);
	glVertex3f(208 / xx, 1 - (642 / yy), 0.0);
	glVertex3f(201 / xx, 1 - (657 / yy), 0.0);

	glVertex3f(217 / xx, 1 - (648 / yy), 0.0);
	glVertex3f(208 / xx, 1 - (642 / yy), 0.0);
	glVertex3f(215 / xx, 1 - (635 / yy), 0.0);

	glVertex3f(217 / xx, 1 - (648 / yy), 0.0);
	glVertex3f(215 / xx, 1 - (635 / yy), 0.0);
	glVertex3f(236 / xx, 1 - (637 / yy), 0.0);

	glVertex3f(217 / xx, 1 - (648 / yy), 0.0);
	glVertex3f(236 / xx, 1 - (637 / yy), 0.0);
	glVertex3f(229 / xx, 1 - (645 / yy), 0.0);

	glVertex3f(215 / xx, 1 - (635 / yy), 0.0);
	glVertex3f(222 / xx, 1 - (633 / yy), 0.0);
	glVertex3f(236 / xx, 1 - (637 / yy), 0.0);

	glVertex3f(236 / xx, 1 - (637 / yy), 0.0);
	glVertex3f(229 / xx, 1 - (645 / yy), 0.0);
	glVertex3f(242 / xx, 1 - (647 / yy), 0.0);

	glVertex3f(229 / xx, 1 - (645 / yy), 0.0);
	glVertex3f(242 / xx, 1 - (647 / yy), 0.0);
	glVertex3f(235 / xx, 1 - (657 / yy), 0.0);

	glVertex3f(242 / xx, 1 - (647 / yy), 0.0);
	glVertex3f(235 / xx, 1 - (657 / yy), 0.0);
	glVertex3f(245 / xx, 1 - (664 / yy), 0.0);

	glVertex3f(235 / xx, 1 - (657 / yy), 0.0);
	glVertex3f(245 / xx, 1 - (664 / yy), 0.0);
	glVertex3f(238 / xx, 1 - (678 / yy), 0.0);

	glVertex3f(245 / xx, 1 - (664 / yy), 0.0);
	glVertex3f(238 / xx, 1 - (678 / yy), 0.0);
	glVertex3f(246 / xx, 1 - (688 / yy), 0.0);

	glVertex3f(238 / xx, 1 - (678 / yy), 0.0);
	glVertex3f(246 / xx, 1 - (688 / yy), 0.0);
	glVertex3f(235 / xx, 1 - (691 / yy), 0.0);

	glVertex3f(246 / xx, 1 - (688 / yy), 0.0);
	glVertex3f(235 / xx, 1 - (691 / yy), 0.0);
	glVertex3f(242 / xx, 1 - (704 / yy), 0.0);

	glVertex3f(235 / xx, 1 - (691 / yy), 0.0);
	glVertex3f(242 / xx, 1 - (704 / yy), 0.0);
	glVertex3f(230 / xx, 1 - (705 / yy), 0.0);

	glVertex3f(242 / xx, 1 - (704 / yy), 0.0);
	glVertex3f(230 / xx, 1 - (705 / yy), 0.0);
	glVertex3f(233 / xx, 1 - (714 / yy), 0.0);

	glVertex3f(230 / xx, 1 - (705 / yy), 0.0);
	glVertex3f(233 / xx, 1 - (714 / yy), 0.0);
	glVertex3f(224 / xx, 1 - (708 / yy), 0.0);

	glVertex3f(233 / xx, 1 - (714 / yy), 0.0);
	glVertex3f(224 / xx, 1 - (708 / yy), 0.0);
	glVertex3f(215 / xx, 1 - (716 / yy), 0.0);

	glVertex3f(224 / xx, 1 - (708 / yy), 0.0);
	glVertex3f(215 / xx, 1 - (716 / yy), 0.0);
	glVertex3f(216 / xx, 1 - (704 / yy), 0.0);

	glVertex3f(215 / xx, 1 - (716 / yy), 0.0);
	glVertex3f(216 / xx, 1 - (704 / yy), 0.0);
	glVertex3f(206 / xx, 1 - (706 / yy), 0.0);

	glVertex3f(216 / xx, 1 - (704 / yy), 0.0);
	glVertex3f(206 / xx, 1 - (706 / yy), 0.0);
	glVertex3f(211 / xx, 1 - (692 / yy), 0.0);

	glVertex3f(206 / xx, 1 - (706 / yy), 0.0);
	glVertex3f(211 / xx, 1 - (692 / yy), 0.0);
	glVertex3f(201 / xx, 1 - (694 / yy), 0.0);

	glVertex3f(211 / xx, 1 - (692 / yy), 0.0);
	glVertex3f(201 / xx, 1 - (694 / yy), 0.0);
	glVertex3f(209 / xx, 1 - (678 / yy), 0.0);

	glVertex3f(201 / xx, 1 - (694 / yy), 0.0);
	glVertex3f(209 / xx, 1 - (678 / yy), 0.0);
	glVertex3f(202 / xx, 1 - (670 / yy), 0.0);

	glVertex3f(209 / xx, 1 - (678 / yy), 0.0);
	glVertex3f(202 / xx, 1 - (670 / yy), 0.0);
	glVertex3f(211 / xx, 1 - (656 / yy), 0.0);

	glVertex3f(202 / xx, 1 - (670 / yy), 0.0);
	glVertex3f(211 / xx, 1 - (656 / yy), 0.0);
	glVertex3f(202 / xx, 1 - (657 / yy), 0.0);

	//o

	glVertex3f(260 / xx, 1 - (636 / yy), 0.0);
	glVertex3f(269 / xx, 1 - (715 / yy), 0.0);
	glVertex3f(260 / xx, 1 - (715 / yy), 0.0);

	glVertex3f(260 / xx, 1 - (636 / yy), 0.0);
	glVertex3f(269 / xx, 1 - (715 / yy), 0.0);
	glVertex3f(269 / xx, 1 - (636 / yy), 0.0);

	glVertex3f(269 / xx, 1 - (645 / yy), 0.0);
	glVertex3f(268 / xx, 1 - (676 / yy), 0.0);
	glVertex3f(271 / xx, 1 - (658 / yy), 0.0);

	glVertex3f(269 / xx, 1 - (645 / yy), 0.0);
	glVertex3f(271 / xx, 1 - (658 / yy), 0.0);
	glVertex3f(277 / xx, 1 - (647 / yy), 0.0);

	glVertex3f(269 / xx, 1 - (645 / yy), 0.0);
	glVertex3f(277 / xx, 1 - (647 / yy), 0.0);
	glVertex3f(277 / xx, 1 - (638 / yy), 0.0);

	glVertex3f(277 / xx, 1 - (647 / yy), 0.0);
	glVertex3f(277 / xx, 1 - (637 / yy), 0.0);
	glVertex3f(284 / xx, 1 - (647 / yy), 0.0);

	glVertex3f(277 / xx, 1 - (636 / yy), 0.0);
	glVertex3f(284 / xx, 1 - (647 / yy), 0.0);
	glVertex3f(291 / xx, 1 - (635 / yy), 0.0);

	glVertex3f(284 / xx, 1 - (647 / yy), 0.0);
	glVertex3f(291 / xx, 1 - (635 / yy), 0.0);
	glVertex3f(299 / xx, 1 - (643 / yy), 0.0);

	glVertex3f(291 / xx, 1 - (635 / yy), 0.0);
	glVertex3f(299 / xx, 1 - (643 / yy), 0.0);
	glVertex3f(292 / xx, 1 - (654 / yy), 0.0);

	glVertex3f(299 / xx, 1 - (643 / yy), 0.0);
	glVertex3f(292 / xx, 1 - (654 / yy), 0.0);
	glVertex3f(302 / xx, 1 - (660 / yy), 0.0);

	glVertex3f(292 / xx, 1 - (654 / yy), 0.0);
	glVertex3f(302 / xx, 1 - (660 / yy), 0.0);
	glVertex3f(292 / xx, 1 - (716 / yy), 0.0);

	glVertex3f(302 / xx, 1 - (660 / yy), 0.0);
	glVertex3f(292 / xx, 1 - (716 / yy), 0.0);
	glVertex3f(302 / xx, 1 - (716 / yy), 0.0);

	//n
	float national2a;
	national2a = (317 - 86);

	glVertex3f((86 + national2a) / xx, 1 - (656 / yy), 0.0);
	glVertex3f((87 + national2a) / xx, 1 - (646 / yy), 0.0);
	glVertex3f((94 + national2a) / xx, 1 - (658 / yy), 0.0);

	glVertex3f((87 + national2a) / xx, 1 - (646 / yy), 0.0);
	glVertex3f((94 + national2a) / xx, 1 - (658 / yy), 0.0);
	glVertex3f((98 + national2a) / xx, 1 - (636 / yy), 0.0);

	glVertex3f((94 + national2a) / xx, 1 - (658 / yy), 0.0);
	glVertex3f((98 + national2a) / xx, 1 - (636 / yy), 0.0);
	glVertex3f((102 + national2a) / xx, 1 - (646 / yy), 0.0);

	glVertex3f((98 + national2a) / xx, 1 - (636 / yy), 0.0);
	glVertex3f((102 + national2a) / xx, 1 - (646 / yy), 0.0);
	glVertex3f((117 + national2a) / xx, 1 - (636 / yy), 0.0);

	glVertex3f((102 + national2a) / xx, 1 - (646 / yy), 0.0);
	glVertex3f((117 + national2a) / xx, 1 - (636 / yy), 0.0);
	glVertex3f((113 + national2a) / xx, 1 - (646 / yy), 0.0);

	glVertex3f((117 + national2a) / xx, 1 - (636 / yy), 0.0);
	glVertex3f((113 + national2a) / xx, 1 - (646 / yy), 0.0);
	glVertex3f((128 + national2a) / xx, 1 - (649 / yy), 0.0);

	glVertex3f((113 + national2a) / xx, 1 - (646 / yy), 0.0);
	glVertex3f((128 + national2a) / xx, 1 - (649 / yy), 0.0);
	glVertex3f((118 + national2a) / xx, 1 - (656 / yy), 0.0);

	glVertex3f((128 + national2a) / xx, 1 - (649 / yy), 0.0);
	glVertex3f((118 + national2a) / xx, 1 - (656 / yy), 0.0);
	glVertex3f((128 + national2a) / xx, 1 - (655 / yy), 0.0);

	glVertex3f((118 + national2a) / xx, 1 - (656 / yy), 0.0);
	glVertex3f((128 + national2a) / xx, 1 - (655 / yy), 0.0);
	glVertex3f((128 + national2a) / xx, 1 - (717 / yy), 0.0);

	glVertex3f((118 + national2a) / xx, 1 - (656 / yy), 0.0);
	glVertex3f((128 + national2a) / xx, 1 - (717 / yy), 0.0);
	glVertex3f((118 + national2a) / xx, 1 - (716 / yy), 0.0);

	glVertex3f((118 + national2a) / xx, 1 - (663 / yy), 0.0);
	glVertex3f((118 + national2a) / xx, 1 - (677 / yy), 0.0);
	glVertex3f((100 + national2a) / xx, 1 - (682 / yy), 0.0);

	glVertex3f((118 + national2a) / xx, 1 - (663 / yy), 0.0);
	glVertex3f((100 + national2a) / xx, 1 - (682 / yy), 0.0);
	glVertex3f((92 + national2a) / xx, 1 - (672 / yy), 0.0);

	glVertex3f((100 + national2a) / xx, 1 - (682 / yy), 0.0);
	glVertex3f((92 + national2a) / xx, 1 - (672 / yy), 0.0);
	glVertex3f((93 + national2a) / xx, 1 - (694 / yy), 0.0);

	glVertex3f((92 + national2a) / xx, 1 - (672 / yy), 0.0);
	glVertex3f((93 + national2a) / xx, 1 - (694 / yy), 0.0);
	glVertex3f((84 + national2a) / xx, 1 - (691 / yy), 0.0);

	glVertex3f((93 + national2a) / xx, 1 - (694 / yy), 0.0);
	glVertex3f((84 + national2a) / xx, 1 - (691 / yy), 0.0);
	glVertex3f((88 + national2a) / xx, 1 - (715 / yy), 0.0);

	glVertex3f((93 + national2a) / xx, 1 - (694 / yy), 0.0);
	glVertex3f((88 + national2a) / xx, 1 - (715 / yy), 0.0);
	glVertex3f((94 + national2a) / xx, 1 - (703 / yy), 0.0);

	glVertex3f((88 + national2a) / xx, 1 - (715 / yy), 0.0);
	glVertex3f((94 + national2a) / xx, 1 - (703 / yy), 0.0);
	glVertex3f((101 + national2a) / xx, 1 - (708 / yy), 0.0);

	glVertex3f((88 + national2a) / xx, 1 - (715 / yy), 0.0);
	glVertex3f((101 + national2a) / xx, 1 - (708 / yy), 0.0);
	glVertex3f((101 + national2a) / xx, 1 - (718 / yy), 0.0);

	glVertex3f((101 + national2a) / xx, 1 - (708 / yy), 0.0);
	glVertex3f((101 + national2a) / xx, 1 - (718 / yy), 0.0);
	glVertex3f((109 + national2a) / xx, 1 - (706 / yy), 0.0);

	glVertex3f((101 + national2a) / xx, 1 - (718 / yy), 0.0);
	glVertex3f((109 + national2a) / xx, 1 - (706 / yy), 0.0);
	glVertex3f((113 + national2a) / xx, 1 - (715 / yy), 0.0);

	glVertex3f((109 + national2a) / xx, 1 - (706 / yy), 0.0);
	glVertex3f((113 + national2a) / xx, 1 - (715 / yy), 0.0);
	glVertex3f((116 + national2a) / xx, 1 - (694 / yy), 0.0);

	glVertex3f((113 + national2a) / xx, 1 - (715 / yy), 0.0);
	glVertex3f((116 + national2a) / xx, 1 - (694 / yy), 0.0);
	glVertex3f((120 + national2a) / xx, 1 - (704 / yy), 0.0);

	glVertex3f((118 + national2a) / xx, 1 - (677 / yy), 0.0);
	glVertex3f((116 + national2a) / xx, 1 - (649 / yy), 0.0);
	glVertex3f((120 + national2a) / xx, 1 - (704 / yy), 0.0);


	//a


	glVertex3f(376 / xx, 1 - (604 / yy), 0.0);
	glVertex3f(376 / xx, 1 - (716 / yy), 0.0);
	glVertex3f(386 / xx, 1 - (716 / yy), 0.0);

	glVertex3f(376 / xx, 1 - (604 / yy), 0.0);
	glVertex3f(386 / xx, 1 - (716 / yy), 0.0);
	glVertex3f(386 / xx, 1 - (604 / yy), 0.0);

	//l

	glVertex3f(483 / xx, 1 - (638 / yy), 0.0);
	glVertex3f(473 / xx, 1 - (638 / yy), 0.0);
	glVertex3f(481 / xx, 1 - (628 / yy), 0.0);

	glVertex3f(473 / xx, 1 - (638 / yy), 0.0);
	glVertex3f(481 / xx, 1 - (628 / yy), 0.0);
	glVertex3f(471 / xx, 1 - (629 / yy), 0.0);

	glVertex3f(481 / xx, 1 - (628 / yy), 0.0);
	glVertex3f(471 / xx, 1 - (629 / yy), 0.0);
	glVertex3f(473 / xx, 1 - (612 / yy), 0.0);

	glVertex3f(471 / xx, 1 - (629 / yy), 0.0);
	glVertex3f(473 / xx, 1 - (612 / yy), 0.0);
	glVertex3f(466 / xx, 1 - (621 / yy), 0.0);

	glVertex3f(473 / xx, 1 - (612 / yy), 0.0);
	glVertex3f(466 / xx, 1 - (621 / yy), 0.0);
	glVertex3f(460 / xx, 1 - (602 / yy), 0.0);

	glVertex3f(466 / xx, 1 - (621 / yy), 0.0);
	glVertex3f(460 / xx, 1 - (602 / yy), 0.0);
	glVertex3f(453 / xx, 1 - (617 / yy), 0.0);

	glVertex3f(460 / xx, 1 - (602 / yy), 0.0);
	glVertex3f(453 / xx, 1 - (617 / yy), 0.0);
	glVertex3f(448 / xx, 1 - (603 / yy), 0.0);

	glVertex3f(453 / xx, 1 - (617 / yy), 0.0);
	glVertex3f(448 / xx, 1 - (603 / yy), 0.0);
	glVertex3f(445 / xx, 1 - (619 / yy), 0.0);

	glVertex3f(448 / xx, 1 - (603 / yy), 0.0);
	glVertex3f(445 / xx, 1 - (619 / yy), 0.0);
	glVertex3f(434 / xx, 1 - (611 / yy), 0.0);

	glVertex3f(455 / xx, 1 - (619 / yy), 0.0);
	glVertex3f(434 / xx, 1 - (611 / yy), 0.0);
	glVertex3f(440 / xx, 1 - (627 / yy), 0.0);

	glVertex3f(434 / xx, 1 - (611 / yy), 0.0);
	glVertex3f(440 / xx, 1 - (627 / yy), 0.0);
	glVertex3f(426 / xx, 1 - (629 / yy), 0.0);

	glVertex3f(440 / xx, 1 - (627 / yy), 0.0);
	glVertex3f(426 / xx, 1 - (629 / yy), 0.0);
	glVertex3f(435 / xx, 1 - (640 / yy), 0.0);

	glVertex3f(426 / xx, 1 - (629 / yy), 0.0);
	glVertex3f(435 / xx, 1 - (640 / yy), 0.0);
	glVertex3f(423 / xx, 1 - (642 / yy), 0.0);

	glVertex3f(435 / xx, 1 - (640 / yy), 0.0);
	glVertex3f(423 / xx, 1 - (642 / yy), 0.0);
	glVertex3f(434 / xx, 1 - (652 / yy), 0.0);

	glVertex3f(423 / xx, 1 - (642 / yy), 0.0);
	glVertex3f(434 / xx, 1 - (652 / yy), 0.0);
	glVertex3f(422 / xx, 1 - (664 / yy), 0.0);

	glVertex3f(434 / xx, 1 - (652 / yy), 0.0);
	glVertex3f(422 / xx, 1 - (664 / yy), 0.0);
	glVertex3f(434 / xx, 1 - (676 / yy), 0.0);

	glVertex3f(422 / xx, 1 - (644 / yy), 0.0);
	glVertex3f(434 / xx, 1 - (676 / yy), 0.0);
	glVertex3f(426 / xx, 1 - (687 / yy), 0.0);

	glVertex3f(434 / xx, 1 - (676 / yy), 0.0);
	glVertex3f(426 / xx, 1 - (687 / yy), 0.0);
	glVertex3f(437 / xx, 1 - (690 / yy), 0.0);

	glVertex3f(426 / xx, 1 - (687 / yy), 0.0);
	glVertex3f(437 / xx, 1 - (690 / yy), 0.0);
	glVertex3f(433 / xx, 1 - (707 / yy), 0.0);

	glVertex3f(437 / xx, 1 - (690 / yy), 0.0);
	glVertex3f(433 / xx, 1 - (707 / yy), 0.0);
	glVertex3f(446 / xx, 1 - (701 / yy), 0.0);

	glVertex3f(433 / xx, 1 - (707 / yy), 0.0);
	glVertex3f(446 / xx, 1 - (701 / yy), 0.0);
	glVertex3f(446 / xx, 1 - (717 / yy), 0.0);

	glVertex3f(446 / xx, 1 - (701 / yy), 0.0);
	glVertex3f(446 / xx, 1 - (717 / yy), 0.0);
	glVertex3f(455 / xx, 1 - (705 / yy), 0.0);

	glVertex3f(446 / xx, 1 - (717 / yy), 0.0);
	glVertex3f(455 / xx, 1 - (705 / yy), 0.0);
	glVertex3f(458 / xx, 1 - (719 / yy), 0.0);

	glVertex3f(455 / xx, 1 - (705 / yy), 0.0);
	glVertex3f(458 / xx, 1 - (719 / yy), 0.0);
	glVertex3f(464 / xx, 1 - (700 / yy), 0.0);

	glVertex3f(458 / xx, 1 - (719 / yy), 0.0);
	glVertex3f(464 / xx, 1 - (700 / yy), 0.0);
	glVertex3f(471 / xx, 1 - (711 / yy), 0.0);

	glVertex3f(464 / xx, 1 - (700 / yy), 0.0);
	glVertex3f(471 / xx, 1 - (711 / yy), 0.0);
	glVertex3f(471 / xx, 1 - (691 / yy), 0.0);

	glVertex3f(471 / xx, 1 - (711 / yy), 0.0);
	glVertex3f(471 / xx, 1 - (691 / yy), 0.0);
	glVertex3f(484 / xx, 1 - (683 / yy), 0.0);

	glVertex3f(471 / xx, 1 - (691 / yy), 0.0);
	glVertex3f(484 / xx, 1 - (683 / yy), 0.0);
	glVertex3f(474 / xx, 1 - (678 / yy), 0.0);

	//C
	float chungh;
	chungh = (499 - 260);
	glVertex3f((260 + chungh) / xx, 1 - (604 / yy), 0.0);
	glVertex3f((269 + chungh) / xx, 1 - (715 / yy), 0.0);
	glVertex3f((260 + chungh) / xx, 1 - (715 / yy), 0.0);

	glVertex3f((260 + chungh) / xx, 1 - (604 / yy), 0.0);
	glVertex3f((269 + chungh) / xx, 1 - (715 / yy), 0.0);
	glVertex3f((269 + chungh) / xx, 1 - (604 / yy), 0.0);

	glVertex3f((269 + chungh) / xx, 1 - (645 / yy), 0.0);
	glVertex3f((268 + chungh) / xx, 1 - (676 / yy), 0.0);
	glVertex3f((271 + chungh) / xx, 1 - (658 / yy), 0.0);

	glVertex3f((269 + chungh) / xx, 1 - (645 / yy), 0.0);
	glVertex3f((271 + chungh) / xx, 1 - (658 / yy), 0.0);
	glVertex3f((277 + chungh) / xx, 1 - (647 / yy), 0.0);

	glVertex3f((269 + chungh) / xx, 1 - (645 / yy), 0.0);
	glVertex3f((277 + chungh) / xx, 1 - (647 / yy), 0.0);
	glVertex3f((277 + chungh) / xx, 1 - (638 / yy), 0.0);

	glVertex3f((277 + chungh) / xx, 1 - (647 / yy), 0.0);
	glVertex3f((277 + chungh) / xx, 1 - (637 / yy), 0.0);
	glVertex3f((284 + chungh) / xx, 1 - (647 / yy), 0.0);

	glVertex3f((277 + chungh) / xx, 1 - (638 / yy), 0.0);
	glVertex3f((284 + chungh) / xx, 1 - (647 / yy), 0.0);
	glVertex3f((291 + chungh) / xx, 1 - (635 / yy), 0.0);

	glVertex3f((284 + chungh) / xx, 1 - (647 / yy), 0.0);
	glVertex3f((291 + chungh) / xx, 1 - (635 / yy), 0.0);
	glVertex3f((299 + chungh) / xx, 1 - (643 / yy), 0.0);

	glVertex3f((291 + chungh) / xx, 1 - (635 / yy), 0.0);
	glVertex3f((299 + chungh) / xx, 1 - (643 / yy), 0.0);
	glVertex3f((292 + chungh) / xx, 1 - (654 / yy), 0.0);

	glVertex3f((299 + chungh) / xx, 1 - (643 / yy), 0.0);
	glVertex3f((292 + chungh) / xx, 1 - (654 / yy), 0.0);
	glVertex3f((302 + chungh) / xx, 1 - (660 / yy), 0.0);

	glVertex3f((292 + chungh) / xx, 1 - (654 / yy), 0.0);
	glVertex3f((302 + chungh) / xx, 1 - (660 / yy), 0.0);
	glVertex3f((292 + chungh) / xx, 1 - (716 / yy), 0.0);

	glVertex3f((302 + chungh) / xx, 1 - (660 / yy), 0.0);
	glVertex3f((292 + chungh) / xx, 1 - (716 / yy), 0.0);
	glVertex3f((302 + chungh) / xx, 1 - (716 / yy), 0.0);

	//h

	glVertex3f(555 / xx, 1 - (636 / yy), 0.0);
	glVertex3f(565 / xx, 1 - (636 / yy), 0.0);
	glVertex3f(565 / xx, 1 - (699 / yy), 0.0);

	glVertex3f(555 / xx, 1 - (636 / yy), 0.0);
	glVertex3f(557 / xx, 1 - (703 / yy), 0.0);
	glVertex3f(565 / xx, 1 - (699 / yy), 0.0);

	glVertex3f(557 / xx, 1 - (703 / yy), 0.0);
	glVertex3f(565 / xx, 1 - (699 / yy), 0.0);
	glVertex3f(566 / xx, 1 - (715 / yy), 0.0);

	glVertex3f(565 / xx, 1 - (699 / yy), 0.0);
	glVertex3f(566 / xx, 1 - (715 / yy), 0.0);
	glVertex3f(571 / xx, 1 - (707 / yy), 0.0);

	glVertex3f(566 / xx, 1 - (715 / yy), 0.0);
	glVertex3f(571 / xx, 1 - (707 / yy), 0.0);
	glVertex3f(575 / xx, 1 - (717 / yy), 0.0);

	glVertex3f(571 / xx, 1 - (707 / yy), 0.0);
	glVertex3f(575 / xx, 1 - (717 / yy), 0.0);
	glVertex3f(578 / xx, 1 - (708 / yy), 0.0);

	glVertex3f(575 / xx, 1 - (717 / yy), 0.0);
	glVertex3f(578 / xx, 1 - (708 / yy), 0.0);
	glVertex3f(583 / xx, 1 - (715 / yy), 0.0);

	glVertex3f(578 / xx, 1 - (708 / yy), 0.0);
	glVertex3f(583 / xx, 1 - (715 / yy), 0.0);
	glVertex3f(584 / xx, 1 - (701 / yy), 0.0);

	glVertex3f(583 / xx, 1 - (715 / yy), 0.0);
	glVertex3f(584 / xx, 1 - (701 / yy), 0.0);
	glVertex3f(588 / xx, 1 - (706 / yy), 0.0);

	glVertex3f(584 / xx, 1 - (701 / yy), 0.0);
	glVertex3f(588 / xx, 1 - (706 / yy), 0.0);
	glVertex3f(588 / xx, 1 - (684 / yy), 0.0);

	glVertex3f(588 / xx, 1 - (636 / yy), 0.0);
	glVertex3f(588 / xx, 1 - (716 / yy), 0.0);
	glVertex3f(598 / xx, 1 - (716 / yy), 0.0);

	glVertex3f(588 / xx, 1 - (636 / yy), 0.0);
	glVertex3f(598 / xx, 1 - (716 / yy), 0.0);
	glVertex3f(598 / xx, 1 - (636 / yy), 0.0);

	//u
	float chungn;
	chungn = (615 - 260);
	glVertex3f((260 + chungn) / xx, 1 - (636 / yy), 0.0);
	glVertex3f((269 + chungn) / xx, 1 - (715 / yy), 0.0);
	glVertex3f((260 + chungn) / xx, 1 - (715 / yy), 0.0);

	glVertex3f((260 + chungn) / xx, 1 - (636 / yy), 0.0);
	glVertex3f((269 + chungn) / xx, 1 - (715 / yy), 0.0);
	glVertex3f((269 + chungn) / xx, 1 - (636 / yy), 0.0);

	glVertex3f((269 + chungn) / xx, 1 - (645 / yy), 0.0);
	glVertex3f((268 + chungn) / xx, 1 - (676 / yy), 0.0);
	glVertex3f((271 + chungn) / xx, 1 - (658 / yy), 0.0);

	glVertex3f((269 + chungn) / xx, 1 - (645 / yy), 0.0);
	glVertex3f((271 + chungn) / xx, 1 - (658 / yy), 0.0);
	glVertex3f((277 + chungn) / xx, 1 - (647 / yy), 0.0);

	glVertex3f((269 + chungn) / xx, 1 - (645 / yy), 0.0);
	glVertex3f((277 + chungn) / xx, 1 - (647 / yy), 0.0);
	glVertex3f((277 + chungn) / xx, 1 - (638 / yy), 0.0);

	glVertex3f((277 + chungn) / xx, 1 - (647 / yy), 0.0);
	glVertex3f((277 + chungn) / xx, 1 - (637 / yy), 0.0);
	glVertex3f((284 + chungn) / xx, 1 - (647 / yy), 0.0);

	glVertex3f((277 + chungn) / xx, 1 - (636 / yy), 0.0);
	glVertex3f((284 + chungn) / xx, 1 - (647 / yy), 0.0);
	glVertex3f((291 + chungn) / xx, 1 - (635 / yy), 0.0);

	glVertex3f((284 + chungn) / xx, 1 - (647 / yy), 0.0);
	glVertex3f((291 + chungn) / xx, 1 - (635 / yy), 0.0);
	glVertex3f((299 + chungn) / xx, 1 - (643 / yy), 0.0);

	glVertex3f((291 + chungn) / xx, 1 - (635 / yy), 0.0);
	glVertex3f((299 + chungn) / xx, 1 - (643 / yy), 0.0);
	glVertex3f((292 + chungn) / xx, 1 - (654 / yy), 0.0);

	glVertex3f((299 + chungn) / xx, 1 - (643 / yy), 0.0);
	glVertex3f((292 + chungn) / xx, 1 - (654 / yy), 0.0);
	glVertex3f((302 + chungn) / xx, 1 - (660 / yy), 0.0);

	glVertex3f((292 + chungn) / xx, 1 - (654 / yy), 0.0);
	glVertex3f((302 + chungn) / xx, 1 - (660 / yy), 0.0);
	glVertex3f((292 + chungn) / xx, 1 - (716 / yy), 0.0);

	glVertex3f((302 + chungn) / xx, 1 - (660 / yy), 0.0);
	glVertex3f((292 + chungn) / xx, 1 - (716 / yy), 0.0);
	glVertex3f((302 + chungn) / xx, 1 - (716 / yy), 0.0);

	//n
	float chungg;
	chungg = (670 - 201);
	glVertex3f((201 + chungg) / xx, 1 - (657 / yy), 0.0);
	glVertex3f((217 + chungg) / xx, 1 - (648 / yy), 0.0);
	glVertex3f((212 + chungg) / xx, 1 - (655 / yy), 0.0);

	glVertex3f((217 + chungg) / xx, 1 - (648 / yy), 0.0);
	glVertex3f((208 + chungg) / xx, 1 - (642 / yy), 0.0);
	glVertex3f((201 + chungg) / xx, 1 - (657 / yy), 0.0);

	glVertex3f((217 + chungg) / xx, 1 - (648 / yy), 0.0);
	glVertex3f((208 + chungg) / xx, 1 - (642 / yy), 0.0);
	glVertex3f((215 + chungg) / xx, 1 - (635 / yy), 0.0);

	glVertex3f((217 + chungg) / xx, 1 - (648 / yy), 0.0);
	glVertex3f((215 + chungg) / xx, 1 - (635 / yy), 0.0);
	glVertex3f((236 + chungg) / xx, 1 - (637 / yy), 0.0);

	glVertex3f((217 + chungg) / xx, 1 - (648 / yy), 0.0);
	glVertex3f((236 + chungg) / xx, 1 - (637 / yy), 0.0);
	glVertex3f((229 + chungg) / xx, 1 - (645 / yy), 0.0);

	glVertex3f((215 + chungg) / xx, 1 - (635 / yy), 0.0);
	glVertex3f((222 + chungg) / xx, 1 - (633 / yy), 0.0);
	glVertex3f((236 + chungg) / xx, 1 - (637 / yy), 0.0);

	glVertex3f((236 + chungg) / xx, 1 - (637 / yy), 0.0);
	glVertex3f((229 + chungg) / xx, 1 - (645 / yy), 0.0);
	glVertex3f((242 + chungg) / xx, 1 - (647 / yy), 0.0);

	glVertex3f((229 + chungg) / xx, 1 - (645 / yy), 0.0);
	glVertex3f((242 + chungg) / xx, 1 - (647 / yy), 0.0);
	glVertex3f((235 + chungg) / xx, 1 - (657 / yy), 0.0);

	glVertex3f((242 + chungg) / xx, 1 - (647 / yy), 0.0);
	glVertex3f((235 + chungg) / xx, 1 - (657 / yy), 0.0);
	glVertex3f((245 + chungg) / xx, 1 - (664 / yy), 0.0);

	glVertex3f((235 + chungg) / xx, 1 - (657 / yy), 0.0);
	glVertex3f((245 + chungg) / xx, 1 - (664 / yy), 0.0);
	glVertex3f((238 + chungg) / xx, 1 - (678 / yy), 0.0);

	glVertex3f((245 + chungg) / xx, 1 - (664 / yy), 0.0);
	glVertex3f((238 + chungg) / xx, 1 - (678 / yy), 0.0);
	glVertex3f((246 + chungg) / xx, 1 - (688 / yy), 0.0);

	glVertex3f((238 + chungg) / xx, 1 - (678 / yy), 0.0);
	glVertex3f((246 + chungg) / xx, 1 - (688 / yy), 0.0);
	glVertex3f((235 + chungg) / xx, 1 - (691 / yy), 0.0);

	glVertex3f((246 + chungg) / xx, 1 - (688 / yy), 0.0);
	glVertex3f((235 + chungg) / xx, 1 - (691 / yy), 0.0);
	glVertex3f((242 + chungg) / xx, 1 - (704 / yy), 0.0);

	glVertex3f((235 + chungg) / xx, 1 - (691 / yy), 0.0);
	glVertex3f((242 + chungg) / xx, 1 - (704 / yy), 0.0);
	glVertex3f((230 + chungg) / xx, 1 - (705 / yy), 0.0);

	glVertex3f((242 + chungg) / xx, 1 - (704 / yy), 0.0);
	glVertex3f((230 + chungg) / xx, 1 - (705 / yy), 0.0);
	glVertex3f((233 + chungg) / xx, 1 - (714 / yy), 0.0);

	glVertex3f((230 + chungg) / xx, 1 - (705 / yy), 0.0);
	glVertex3f((233 + chungg) / xx, 1 - (714 / yy), 0.0);
	glVertex3f((224 + chungg) / xx, 1 - (708 / yy), 0.0);

	glVertex3f((233 + chungg) / xx, 1 - (714 / yy), 0.0);
	glVertex3f((224 + chungg) / xx, 1 - (708 / yy), 0.0);
	glVertex3f((215 + chungg) / xx, 1 - (716 / yy), 0.0);

	glVertex3f((224 + chungg) / xx, 1 - (708 / yy), 0.0);
	glVertex3f((215 + chungg) / xx, 1 - (716 / yy), 0.0);
	glVertex3f((216 + chungg) / xx, 1 - (704 / yy), 0.0);

	glVertex3f((215 + chungg) / xx, 1 - (716 / yy), 0.0);
	glVertex3f((216 + chungg) / xx, 1 - (704 / yy), 0.0);
	glVertex3f((206 + chungg) / xx, 1 - (706 / yy), 0.0);

	glVertex3f((216 + chungg) / xx, 1 - (704 / yy), 0.0);
	glVertex3f((206 + chungg) / xx, 1 - (706 / yy), 0.0);
	glVertex3f((211 + chungg) / xx, 1 - (692 / yy), 0.0);

	glVertex3f((206 + chungg) / xx, 1 - (706 / yy), 0.0);
	glVertex3f((211 + chungg) / xx, 1 - (692 / yy), 0.0);
	glVertex3f((201 + chungg) / xx, 1 - (694 / yy), 0.0);

	glVertex3f((211 + chungg) / xx, 1 - (692 / yy), 0.0);
	glVertex3f((201 + chungg) / xx, 1 - (694 / yy), 0.0);
	glVertex3f((209 + chungg) / xx, 1 - (678 / yy), 0.0);

	glVertex3f((201 + chungg) / xx, 1 - (694 / yy), 0.0);
	glVertex3f((209 + chungg) / xx, 1 - (678 / yy), 0.0);
	glVertex3f((202 + chungg) / xx, 1 - (670 / yy), 0.0);

	glVertex3f((209 + chungg) / xx, 1 - (678 / yy), 0.0);
	glVertex3f((202 + chungg) / xx, 1 - (670 / yy), 0.0);
	glVertex3f((211 + chungg) / xx, 1 - (656 / yy), 0.0);

	glVertex3f((202 + chungg) / xx, 1 - (670 / yy), 0.0);
	glVertex3f((211 + chungg) / xx, 1 - (656 / yy), 0.0);
	glVertex3f((202 + chungg) / xx, 1 - (657 / yy), 0.0);

	glVertex3f(705 / xx, 1 - (636 / yy), 0.0);
	glVertex3f(713 / xx, 1 - (635 / yy), 0.0);
	glVertex3f(714 / xx, 1 - (726 / yy), 0.0);

	glVertex3f(705 / xx, 1 - (636 / yy), 0.0);
	glVertex3f(714 / xx, 1 - (726 / yy), 0.0);
	glVertex3f(705 / xx, 1 - (724 / yy), 0.0);

	glVertex3f(714 / xx, 1 - (726 / yy), 0.0);
	glVertex3f(705 / xx, 1 - (724 / yy), 0.0);
	glVertex3f(708 / xx, 1 - (738 / yy), 0.0);

	glVertex3f(705 / xx, 1 - (724 / yy), 0.0);
	glVertex3f(708 / xx, 1 - (738 / yy), 0.0);
	glVertex3f(698 / xx, 1 - (735 / yy), 0.0);

	glVertex3f(708 / xx, 1 - (738 / yy), 0.0);
	glVertex3f(698 / xx, 1 - (735 / yy), 0.0);
	glVertex3f(701 / xx, 1 - (746 / yy), 0.0);

	glVertex3f(698 / xx, 1 - (735 / yy), 0.0);
	glVertex3f(701 / xx, 1 - (746 / yy), 0.0);
	glVertex3f(693 / xx, 1 - (739 / yy), 0.0);

	glVertex3f(701 / xx, 1 - (746 / yy), 0.0);
	glVertex3f(693 / xx, 1 - (739 / yy), 0.0);
	glVertex3f(692 / xx, 1 - (750 / yy), 0.0);

	glVertex3f(693 / xx, 1 - (739 / yy), 0.0);
	glVertex3f(692 / xx, 1 - (750 / yy), 0.0);
	glVertex3f(683 / xx, 1 - (736 / yy), 0.0);

	glVertex3f(692 / xx, 1 - (750 / yy), 0.0);
	glVertex3f(683 / xx, 1 - (736 / yy), 0.0);
	glVertex3f(682 / xx, 1 - (747 / yy), 0.0);

	glVertex3f(683 / xx, 1 - (736 / yy), 0.0);
	glVertex3f(682 / xx, 1 - (747 / yy), 0.0);
	glVertex3f(676 / xx, 1 - (723 / yy), 0.0);

	glVertex3f(682 / xx, 1 - (747 / yy), 0.0);
	glVertex3f(676 / xx, 1 - (723 / yy), 0.0);
	glVertex3f(676 / xx, 1 - (744 / yy), 0.0);

	glVertex3f(676 / xx, 1 - (723 / yy), 0.0);
	glVertex3f(676 / xx, 1 - (744 / yy), 0.0);
	glVertex3f(671 / xx, 1 - (723 / yy), 0.0);

	//g

	glVertex3f(753 / xx, 1 - (603 / yy), 0.0);
	glVertex3f(763 / xx, 1 - (603 / yy), 0.0);
	glVertex3f(763 / xx, 1 - (716 / yy), 0.0);

	glVertex3f(753 / xx, 1 - (603 / yy), 0.0);
	glVertex3f(763 / xx, 1 - (716 / yy), 0.0);
	glVertex3f(753 / xx, 1 - (716 / yy), 0.0);

	glVertex3f(763 / xx, 1 - (652 / yy), 0.0);
	glVertex3f(763 / xx, 1 - (663 / yy), 0.0);
	glVertex3f(798 / xx, 1 - (652 / yy), 0.0);

	glVertex3f(763 / xx, 1 - (663 / yy), 0.0);
	glVertex3f(798 / xx, 1 - (652 / yy), 0.0);
	glVertex3f(798 / xx, 1 - (663 / yy), 0.0);

	glVertex3f(798 / xx, 1 - (603 / yy), 0.0);
	glVertex3f(798 / xx, 1 - (716 / yy), 0.0);
	glVertex3f(808 / xx, 1 - (716 / yy), 0.0);

	glVertex3f(798 / xx, 1 - (603 / yy), 0.0);
	glVertex3f(808 / xx, 1 - (716 / yy), 0.0);
	glVertex3f(808 / xx, 1 - (603 / yy), 0.0);

	//H


	glVertex3f(863 / xx, 1 - (657 / yy), 0.0);
	glVertex3f(853 / xx, 1 - (658 / yy), 0.0);
	glVertex3f(859 / xx, 1 - (642 / yy), 0.0);

	glVertex3f(853 / xx, 1 - (658 / yy), 0.0);
	glVertex3f(859 / xx, 1 - (642 / yy), 0.0);
	glVertex3f(848 / xx, 1 - (646 / yy), 0.0);

	glVertex3f(859 / xx, 1 - (642 / yy), 0.0);
	glVertex3f(848 / xx, 1 - (646 / yy), 0.0);
	glVertex3f(849 / xx, 1 - (634 / yy), 0.0);

	glVertex3f(848 / xx, 1 - (646 / yy), 0.0);
	glVertex3f(849 / xx, 1 - (634 / yy), 0.0);
	glVertex3f(838 / xx, 1 - (647 / yy), 0.0);

	glVertex3f(849 / xx, 1 - (634 / yy), 0.0);
	glVertex3f(838 / xx, 1 - (647 / yy), 0.0);
	glVertex3f(839 / xx, 1 - (633 / yy), 0.0);

	glVertex3f(838 / xx, 1 - (647 / yy), 0.0);
	glVertex3f(839 / xx, 1 - (633 / yy), 0.0);
	glVertex3f(831 / xx, 1 - (656 / yy), 0.0);

	glVertex3f(839 / xx, 1 - (633 / yy), 0.0);
	glVertex3f(831 / xx, 1 - (656 / yy), 0.0);
	glVertex3f(828 / xx, 1 - (638 / yy), 0.0);

	glVertex3f(831 / xx, 1 - (656 / yy), 0.0);
	glVertex3f(828 / xx, 1 - (638 / yy), 0.0);
	glVertex3f(824 / xx, 1 - (648 / yy), 0.0);

	glVertex3f(831 / xx, 1 - (656 / yy), 0.0);
	glVertex3f(824 / xx, 1 - (648 / yy), 0.0);
	glVertex3f(825 / xx, 1 - (662 / yy), 0.0);

	glVertex3f(831 / xx, 1 - (656 / yy), 0.0);
	glVertex3f(825 / xx, 1 - (662 / yy), 0.0);
	glVertex3f(827 / xx, 1 - (671 / yy), 0.0);

	glVertex3f(831 / xx, 1 - (656 / yy), 0.0);
	glVertex3f(827 / xx, 1 - (671 / yy), 0.0);
	glVertex3f(839 / xx, 1 - (664 / yy), 0.0);

	glVertex3f(827 / xx, 1 - (671 / yy), 0.0);
	glVertex3f(839 / xx, 1 - (664 / yy), 0.0);
	glVertex3f(838 / xx, 1 - (677 / yy), 0.0);

	glVertex3f(839 / xx, 1 - (664 / yy), 0.0);
	glVertex3f(838 / xx, 1 - (677 / yy), 0.0);
	glVertex3f(852 / xx, 1 - (670 / yy), 0.0);

	glVertex3f(838 / xx, 1 - (677 / yy), 0.0);
	glVertex3f(852 / xx, 1 - (670 / yy), 0.0);
	glVertex3f(850 / xx, 1 - (685 / yy), 0.0);

	glVertex3f(852 / xx, 1 - (670 / yy), 0.0);
	glVertex3f(850 / xx, 1 - (685 / yy), 0.0);
	glVertex3f(860 / xx, 1 - (674 / yy), 0.0);

	glVertex3f(850 / xx, 1 - (685 / yy), 0.0);
	glVertex3f(860 / xx, 1 - (674 / yy), 0.0);
	glVertex3f(855 / xx, 1 - (688 / yy), 0.0);

	glVertex3f(860 / xx, 1 - (674 / yy), 0.0);
	glVertex3f(855 / xx, 1 - (688 / yy), 0.0);
	glVertex3f(864 / xx, 1 - (683 / yy), 0.0);

	glVertex3f(855 / xx, 1 - (688 / yy), 0.0);
	glVertex3f(864 / xx, 1 - (683 / yy), 0.0);
	glVertex3f(855 / xx, 1 - (699 / yy), 0.0);

	glVertex3f(864 / xx, 1 - (683 / yy), 0.0);
	glVertex3f(855 / xx, 1 - (699 / yy), 0.0);
	glVertex3f(864 / xx, 1 - (697 / yy), 0.0);

	glVertex3f(855 / xx, 1 - (699 / yy), 0.0);
	glVertex3f(864 / xx, 1 - (697 / yy), 0.0);
	glVertex3f(860 / xx, 1 - (709 / yy), 0.0);

	glVertex3f(855 / xx, 1 - (699 / yy), 0.0);
	glVertex3f(860 / xx, 1 - (709 / yy), 0.0);
	glVertex3f(852 / xx, 1 - (714 / yy), 0.0);

	glVertex3f(855 / xx, 1 - (699 / yy), 0.0);
	glVertex3f(852 / xx, 1 - (714 / yy), 0.0);
	glVertex3f(843 / xx, 1 - (706 / yy), 0.0);

	glVertex3f(852 / xx, 1 - (714 / yy), 0.0);
	glVertex3f(843 / xx, 1 - (706 / yy), 0.0);
	glVertex3f(841 / xx, 1 - (716 / yy), 0.0);

	glVertex3f(843 / xx, 1 - (706 / yy), 0.0);
	glVertex3f(841 / xx, 1 - (716 / yy), 0.0);
	glVertex3f(838 / xx, 1 - (704 / yy), 0.0);

	glVertex3f(841 / xx, 1 - (716 / yy), 0.0);
	glVertex3f(838 / xx, 1 - (704 / yy), 0.0);
	glVertex3f(830 / xx, 1 - (711 / yy), 0.0);

	glVertex3f(838 / xx, 1 - (704 / yy), 0.0);
	glVertex3f(830 / xx, 1 - (711 / yy), 0.0);
	glVertex3f(832 / xx, 1 - (698 / yy), 0.0);

	glVertex3f(830 / xx, 1 - (711 / yy), 0.0);
	glVertex3f(832 / xx, 1 - (698 / yy), 0.0);
	glVertex3f(824 / xx, 1 - (703 / yy), 0.0);

	glVertex3f(832 / xx, 1 - (698 / yy), 0.0);
	glVertex3f(824 / xx, 1 - (703 / yy), 0.0);
	glVertex3f(831 / xx, 1 - (689 / yy), 0.0);

	glVertex3f(824 / xx, 1 - (703 / yy), 0.0);
	glVertex3f(831 / xx, 1 - (689 / yy), 0.0);
	glVertex3f(823 / xx, 1 - (691 / yy), 0.0);


	//s
	float hsingi;
	hsingi = (878 - 176);

	glVertex3f((176 + hsingi) / xx, 1 - (604 / yy), 0.0);
	glVertex3f((187 + hsingi) / xx, 1 - (621 / yy), 0.0);
	glVertex3f((187 + hsingi) / xx, 1 - (604 / yy), 0.0);

	glVertex3f((176 + hsingi) / xx, 1 - (604 / yy), 0.0);
	glVertex3f((187 + hsingi) / xx, 1 - (621 / yy), 0.0);
	glVertex3f((176 + hsingi) / xx, 1 - (621 / yy), 0.0);

	glVertex3f((176 + hsingi) / xx, 1 - (634 / yy), 0.0);
	glVertex3f((187 + hsingi) / xx, 1 - (716 / yy), 0.0);
	glVertex3f((176 + hsingi) / xx, 1 - (716 / yy), 0.0);

	glVertex3f((187 + hsingi) / xx, 1 - (634 / yy), 0.0);
	glVertex3f((176 + hsingi) / xx, 1 - (634 / yy), 0.0);
	glVertex3f((187 + hsingi) / xx, 1 - (716 / yy), 0.0);

	//i

	float hsingn;
	hsingn = (906 - 260);

	glVertex3f((260 + hsingn) / xx, 1 - (636 / yy), 0.0);
	glVertex3f((269 + hsingn) / xx, 1 - (715 / yy), 0.0);
	glVertex3f((260 + hsingn) / xx, 1 - (715 / yy), 0.0);

	glVertex3f((260 + hsingn) / xx, 1 - (636 / yy), 0.0);
	glVertex3f((269 + hsingn) / xx, 1 - (715 / yy), 0.0);
	glVertex3f((269 + hsingn) / xx, 1 - (636 / yy), 0.0);

	glVertex3f((269 + hsingn) / xx, 1 - (645 / yy), 0.0);
	glVertex3f((268 + hsingn) / xx, 1 - (676 / yy), 0.0);
	glVertex3f((271 + hsingn) / xx, 1 - (658 / yy), 0.0);

	glVertex3f((269 + hsingn) / xx, 1 - (645 / yy), 0.0);
	glVertex3f((271 + hsingn) / xx, 1 - (658 / yy), 0.0);
	glVertex3f((277 + hsingn) / xx, 1 - (647 / yy), 0.0);

	glVertex3f((269 + hsingn) / xx, 1 - (645 / yy), 0.0);
	glVertex3f((277 + hsingn) / xx, 1 - (647 / yy), 0.0);
	glVertex3f((277 + hsingn) / xx, 1 - (638 / yy), 0.0);

	glVertex3f((277 + hsingn) / xx, 1 - (647 / yy), 0.0);
	glVertex3f((277 + hsingn) / xx, 1 - (637 / yy), 0.0);
	glVertex3f((284 + hsingn) / xx, 1 - (647 / yy), 0.0);

	glVertex3f((277 + hsingn) / xx, 1 - (636 / yy), 0.0);
	glVertex3f((284 + hsingn) / xx, 1 - (647 / yy), 0.0);
	glVertex3f((291 + hsingn) / xx, 1 - (635 / yy), 0.0);

	glVertex3f((284 + hsingn) / xx, 1 - (647 / yy), 0.0);
	glVertex3f((291 + hsingn) / xx, 1 - (635 / yy), 0.0);
	glVertex3f((299 + hsingn) / xx, 1 - (643 / yy), 0.0);

	glVertex3f((291 + hsingn) / xx, 1 - (635 / yy), 0.0);
	glVertex3f((299 + hsingn) / xx, 1 - (643 / yy), 0.0);
	glVertex3f((292 + hsingn) / xx, 1 - (654 / yy), 0.0);

	glVertex3f((299 + hsingn) / xx, 1 - (643 / yy), 0.0);
	glVertex3f((292 + hsingn) / xx, 1 - (654 / yy), 0.0);
	glVertex3f((302 + hsingn) / xx, 1 - (660 / yy), 0.0);

	glVertex3f((292 + hsingn) / xx, 1 - (654 / yy), 0.0);
	glVertex3f((302 + hsingn) / xx, 1 - (660 / yy), 0.0);
	glVertex3f((292 + hsingn) / xx, 1 - (716 / yy), 0.0);

	glVertex3f((302 + hsingn) / xx, 1 - (660 / yy), 0.0);
	glVertex3f((292 + hsingn) / xx, 1 - (716 / yy), 0.0);
	glVertex3f((302 + hsingn) / xx, 1 - (716 / yy), 0.0);

	//n

	float hsingg;
	hsingg = (995 - 705);
	glVertex3f((201 + chungg + hsingg) / xx, 1 - (657 / yy), 0.0);
	glVertex3f((217 + chungg + hsingg) / xx, 1 - (648 / yy), 0.0);
	glVertex3f((212 + chungg + hsingg) / xx, 1 - (655 / yy), 0.0);

	glVertex3f((217 + chungg + hsingg) / xx, 1 - (648 / yy), 0.0);
	glVertex3f((208 + chungg + hsingg) / xx, 1 - (642 / yy), 0.0);
	glVertex3f((201 + chungg + hsingg) / xx, 1 - (657 / yy), 0.0);

	glVertex3f((217 + chungg + hsingg) / xx, 1 - (648 / yy), 0.0);
	glVertex3f((208 + chungg + hsingg) / xx, 1 - (642 / yy), 0.0);
	glVertex3f((215 + chungg + hsingg) / xx, 1 - (635 / yy), 0.0);

	glVertex3f((217 + chungg + hsingg) / xx, 1 - (648 / yy), 0.0);
	glVertex3f((215 + chungg + hsingg) / xx, 1 - (635 / yy), 0.0);
	glVertex3f((236 + chungg + hsingg) / xx, 1 - (637 / yy), 0.0);

	glVertex3f((217 + chungg + hsingg) / xx, 1 - (648 / yy), 0.0);
	glVertex3f((236 + chungg + hsingg) / xx, 1 - (637 / yy), 0.0);
	glVertex3f((229 + chungg + hsingg) / xx, 1 - (645 / yy), 0.0);

	glVertex3f((215 + chungg + hsingg) / xx, 1 - (635 / yy), 0.0);
	glVertex3f((222 + chungg + hsingg) / xx, 1 - (633 / yy), 0.0);
	glVertex3f((236 + chungg + hsingg) / xx, 1 - (637 / yy), 0.0);

	glVertex3f((236 + chungg + hsingg) / xx, 1 - (637 / yy), 0.0);
	glVertex3f((229 + chungg + hsingg) / xx, 1 - (645 / yy), 0.0);
	glVertex3f((242 + chungg + hsingg) / xx, 1 - (647 / yy), 0.0);

	glVertex3f((229 + chungg + hsingg) / xx, 1 - (645 / yy), 0.0);
	glVertex3f((242 + chungg + hsingg) / xx, 1 - (647 / yy), 0.0);
	glVertex3f((235 + chungg + hsingg) / xx, 1 - (657 / yy), 0.0);

	glVertex3f((242 + chungg + hsingg) / xx, 1 - (647 / yy), 0.0);
	glVertex3f((235 + chungg + hsingg) / xx, 1 - (657 / yy), 0.0);
	glVertex3f((245 + chungg + hsingg) / xx, 1 - (664 / yy), 0.0);

	glVertex3f((235 + chungg + hsingg) / xx, 1 - (657 / yy), 0.0);
	glVertex3f((245 + chungg + hsingg) / xx, 1 - (664 / yy), 0.0);
	glVertex3f((238 + chungg + hsingg) / xx, 1 - (678 / yy), 0.0);

	glVertex3f((245 + chungg + hsingg) / xx, 1 - (664 / yy), 0.0);
	glVertex3f((238 + chungg + hsingg) / xx, 1 - (678 / yy), 0.0);
	glVertex3f((246 + chungg + hsingg) / xx, 1 - (688 / yy), 0.0);

	glVertex3f((238 + chungg + hsingg) / xx, 1 - (678 / yy), 0.0);
	glVertex3f((246 + chungg + hsingg) / xx, 1 - (688 / yy), 0.0);
	glVertex3f((235 + chungg + hsingg) / xx, 1 - (691 / yy), 0.0);

	glVertex3f((246 + chungg + hsingg) / xx, 1 - (688 / yy), 0.0);
	glVertex3f((235 + chungg + hsingg) / xx, 1 - (691 / yy), 0.0);
	glVertex3f((242 + chungg + hsingg) / xx, 1 - (704 / yy), 0.0);

	glVertex3f((235 + chungg + hsingg) / xx, 1 - (691 / yy), 0.0);
	glVertex3f((242 + chungg + hsingg) / xx, 1 - (704 / yy), 0.0);
	glVertex3f((230 + chungg + hsingg) / xx, 1 - (705 / yy), 0.0);

	glVertex3f((242 + chungg + hsingg) / xx, 1 - (704 / yy), 0.0);
	glVertex3f((230 + chungg + hsingg) / xx, 1 - (705 / yy), 0.0);
	glVertex3f((233 + chungg + hsingg) / xx, 1 - (714 / yy), 0.0);

	glVertex3f((230 + chungg + hsingg) / xx, 1 - (705 / yy), 0.0);
	glVertex3f((233 + chungg + hsingg) / xx, 1 - (714 / yy), 0.0);
	glVertex3f((224 + chungg + hsingg) / xx, 1 - (708 / yy), 0.0);

	glVertex3f((233 + chungg + hsingg) / xx, 1 - (714 / yy), 0.0);
	glVertex3f((224 + chungg + hsingg) / xx, 1 - (708 / yy), 0.0);
	glVertex3f((215 + chungg + hsingg) / xx, 1 - (716 / yy), 0.0);

	glVertex3f((224 + chungg + hsingg) / xx, 1 - (708 / yy), 0.0);
	glVertex3f((215 + chungg + hsingg) / xx, 1 - (716 / yy), 0.0);
	glVertex3f((216 + chungg + hsingg) / xx, 1 - (704 / yy), 0.0);

	glVertex3f((215 + chungg + hsingg) / xx, 1 - (716 / yy), 0.0);
	glVertex3f((216 + chungg + hsingg) / xx, 1 - (704 / yy), 0.0);
	glVertex3f((206 + chungg + hsingg) / xx, 1 - (706 / yy), 0.0);

	glVertex3f((216 + chungg + hsingg) / xx, 1 - (704 / yy), 0.0);
	glVertex3f((206 + chungg + hsingg) / xx, 1 - (706 / yy), 0.0);
	glVertex3f((211 + chungg + hsingg) / xx, 1 - (692 / yy), 0.0);

	glVertex3f((206 + chungg + hsingg) / xx, 1 - (706 / yy), 0.0);
	glVertex3f((211 + chungg + hsingg) / xx, 1 - (692 / yy), 0.0);
	glVertex3f((201 + chungg + hsingg) / xx, 1 - (694 / yy), 0.0);

	glVertex3f((211 + chungg + hsingg) / xx, 1 - (692 / yy), 0.0);
	glVertex3f((201 + chungg + hsingg) / xx, 1 - (694 / yy), 0.0);
	glVertex3f((209 + chungg + hsingg) / xx, 1 - (678 / yy), 0.0);

	glVertex3f((201 + chungg + hsingg) / xx, 1 - (694 / yy), 0.0);
	glVertex3f((209 + chungg + hsingg) / xx, 1 - (678 / yy), 0.0);
	glVertex3f((202 + chungg + hsingg) / xx, 1 - (670 / yy), 0.0);

	glVertex3f((209 + chungg + hsingg) / xx, 1 - (678 / yy), 0.0);
	glVertex3f((202 + chungg + hsingg) / xx, 1 - (670 / yy), 0.0);
	glVertex3f((211 + chungg + hsingg) / xx, 1 - (656 / yy), 0.0);

	glVertex3f((202 + chungg + hsingg) / xx, 1 - (670 / yy), 0.0);
	glVertex3f((211 + chungg + hsingg) / xx, 1 - (656 / yy), 0.0);
	glVertex3f((202 + chungg + hsingg) / xx, 1 - (657 / yy), 0.0);


	glVertex3f((705 + hsingg) / xx, 1 - (636 / yy), 0.0);
	glVertex3f((713 + hsingg) / xx, 1 - (635 / yy), 0.0);
	glVertex3f((714 + hsingg) / xx, 1 - (726 / yy), 0.0);

	glVertex3f((705 + hsingg) / xx, 1 - (636 / yy), 0.0);
	glVertex3f((714 + hsingg) / xx, 1 - (726 / yy), 0.0);
	glVertex3f((705 + hsingg) / xx, 1 - (724 / yy), 0.0);

	glVertex3f((714 + hsingg) / xx, 1 - (726 / yy), 0.0);
	glVertex3f((705 + hsingg) / xx, 1 - (724 / yy), 0.0);
	glVertex3f((708 + hsingg) / xx, 1 - (738 / yy), 0.0);

	glVertex3f((705 + hsingg) / xx, 1 - (724 / yy), 0.0);
	glVertex3f((708 + hsingg) / xx, 1 - (738 / yy), 0.0);
	glVertex3f((698 + hsingg) / xx, 1 - (735 / yy), 0.0);

	glVertex3f((708 + hsingg) / xx, 1 - (738 / yy), 0.0);
	glVertex3f((698 + hsingg) / xx, 1 - (735 / yy), 0.0);
	glVertex3f((701 + hsingg) / xx, 1 - (746 / yy), 0.0);

	glVertex3f((698 + hsingg) / xx, 1 - (735 / yy), 0.0);
	glVertex3f((701 + hsingg) / xx, 1 - (746 / yy), 0.0);
	glVertex3f((693 + hsingg) / xx, 1 - (739 / yy), 0.0);

	glVertex3f((701 + hsingg) / xx, 1 - (746 / yy), 0.0);
	glVertex3f((693 + hsingg) / xx, 1 - (739 / yy), 0.0);
	glVertex3f((692 + hsingg) / xx, 1 - (750 / yy), 0.0);

	glVertex3f((693 + hsingg) / xx, 1 - (739 / yy), 0.0);
	glVertex3f((692 + hsingg) / xx, 1 - (750 / yy), 0.0);
	glVertex3f((683 + hsingg) / xx, 1 - (736 / yy), 0.0);

	glVertex3f((692 + hsingg) / xx, 1 - (750 / yy), 0.0);
	glVertex3f((683 + hsingg) / xx, 1 - (736 / yy), 0.0);
	glVertex3f((682 + hsingg) / xx, 1 - (747 / yy), 0.0);

	glVertex3f((683 + hsingg) / xx, 1 - (736 / yy), 0.0);
	glVertex3f((682 + hsingg) / xx, 1 - (747 / yy), 0.0);
	glVertex3f((676 + hsingg) / xx, 1 - (723 / yy), 0.0);

	glVertex3f((682 + hsingg) / xx, 1 - (747 / yy), 0.0);
	glVertex3f((676 + hsingg) / xx, 1 - (723 / yy), 0.0);
	glVertex3f((676 + hsingg) / xx, 1 - (744 / yy), 0.0);

	glVertex3f((676 + hsingg) / xx, 1 - (723 / yy), 0.0);
	glVertex3f((676 + hsingg) / xx, 1 - (744 / yy), 0.0);
	glVertex3f((671 + hsingg) / xx, 1 - (723 / yy), 0.0);


	//g


	glVertex3f(1053 / xx, 1 - (604 / yy), 0.0);
	glVertex3f(1043 / xx, 1 - (604 / yy), 0.0);
	glVertex3f(1054 / xx, 1 - (691 / yy), 0.0);

	glVertex3f(1043 / xx, 1 - (604 / yy), 0.0);
	glVertex3f(1054 / xx, 1 - (691 / yy), 0.0);
	glVertex3f(1045 / xx, 1 - (690 / yy), 0.0);

	glVertex3f(1054 / xx, 1 - (691 / yy), 0.0);
	glVertex3f(1045 / xx, 1 - (690 / yy), 0.0);
	glVertex3f(1051 / xx, 1 - (708 / yy), 0.0);

	glVertex3f(1054 / xx, 1 - (691 / yy), 0.0);
	glVertex3f(1051 / xx, 1 - (708 / yy), 0.0);
	glVertex3f(1063 / xx, 1 - (704 / yy), 0.0);

	glVertex3f(1051 / xx, 1 - (708 / yy), 0.0);
	glVertex3f(1063 / xx, 1 - (704 / yy), 0.0);
	glVertex3f(1060 / xx, 1 - (716 / yy), 0.0);

	glVertex3f(1063 / xx, 1 - (704 / yy), 0.0);
	glVertex3f(1060 / xx, 1 - (716 / yy), 0.0);
	glVertex3f(1073 / xx, 1 - (706 / yy), 0.0);

	glVertex3f(1060 / xx, 1 - (716 / yy), 0.0);
	glVertex3f(1073 / xx, 1 - (706 / yy), 0.0);
	glVertex3f(1075 / xx, 1 - (718 / yy), 0.0);

	glVertex3f(1073 / xx, 1 - (706 / yy), 0.0);
	glVertex3f(1075 / xx, 1 - (718 / yy), 0.0);
	glVertex3f(1082 / xx, 1 - (699 / yy), 0.0);

	glVertex3f(1075 / xx, 1 - (718 / yy), 0.0);
	glVertex3f(1082 / xx, 1 - (699 / yy), 0.0);
	glVertex3f(1084 / xx, 1 - (714 / yy), 0.0);

	glVertex3f(1082 / xx, 1 - (699 / yy), 0.0);
	glVertex3f(1084 / xx, 1 - (714 / yy), 0.0);
	glVertex3f(1087 / xx, 1 - (692 / yy), 0.0);

	glVertex3f(1084 / xx, 1 - (714 / yy), 0.0);
	glVertex3f(1087 / xx, 1 - (692 / yy), 0.0);
	glVertex3f(1094 / xx, 1 - (701 / yy), 0.0);

	glVertex3f(1087 / xx, 1 - (692 / yy), 0.0);
	glVertex3f(1094 / xx, 1 - (701 / yy), 0.0);
	glVertex3f(1089 / xx, 1 - (675 / yy), 0.0);

	glVertex3f(1094 / xx, 1 - (701 / yy), 0.0);
	glVertex3f(1089 / xx, 1 - (675 / yy), 0.0);
	glVertex3f(1097 / xx, 1 - (690 / yy), 0.0);

	glVertex3f(1089 / xx, 1 - (675 / yy), 0.0);
	glVertex3f(1097 / xx, 1 - (690 / yy), 0.0);
	glVertex3f(1088 / xx, 1 - (603 / yy), 0.0);

	glVertex3f(1097 / xx, 1 - (690 / yy), 0.0);
	glVertex3f(1088 / xx, 1 - (603 / yy), 0.0);
	glVertex3f(1098 / xx, 1 - (603 / yy), 0.0);



	//U
	float universityn;
	universityn = (1117 - 260);
	glVertex3f((260 + universityn) / xx, 1 - (636 / yy), 0.0);
	glVertex3f((269 + universityn) / xx, 1 - (715 / yy), 0.0);
	glVertex3f((260 + universityn) / xx, 1 - (715 / yy), 0.0);

	glVertex3f((260 + universityn) / xx, 1 - (636 / yy), 0.0);
	glVertex3f((269 + universityn) / xx, 1 - (715 / yy), 0.0);
	glVertex3f((269 + universityn) / xx, 1 - (636 / yy), 0.0);

	glVertex3f((269 + universityn) / xx, 1 - (645 / yy), 0.0);
	glVertex3f((268 + universityn) / xx, 1 - (676 / yy), 0.0);
	glVertex3f((271 + universityn) / xx, 1 - (658 / yy), 0.0);

	glVertex3f((269 + universityn) / xx, 1 - (645 / yy), 0.0);
	glVertex3f((271 + universityn) / xx, 1 - (658 / yy), 0.0);
	glVertex3f((277 + universityn) / xx, 1 - (647 / yy), 0.0);

	glVertex3f((269 + universityn) / xx, 1 - (645 / yy), 0.0);
	glVertex3f((277 + universityn) / xx, 1 - (647 / yy), 0.0);
	glVertex3f((277 + universityn) / xx, 1 - (638 / yy), 0.0);

	glVertex3f((277 + universityn) / xx, 1 - (647 / yy), 0.0);
	glVertex3f((277 + universityn) / xx, 1 - (637 / yy), 0.0);
	glVertex3f((284 + universityn) / xx, 1 - (647 / yy), 0.0);

	glVertex3f((277 + universityn) / xx, 1 - (636 / yy), 0.0);
	glVertex3f((284 + universityn) / xx, 1 - (647 / yy), 0.0);
	glVertex3f((291 + universityn) / xx, 1 - (635 / yy), 0.0);

	glVertex3f((284 + universityn) / xx, 1 - (647 / yy), 0.0);
	glVertex3f((291 + universityn) / xx, 1 - (635 / yy), 0.0);
	glVertex3f((299 + universityn) / xx, 1 - (643 / yy), 0.0);

	glVertex3f((291 + universityn) / xx, 1 - (635 / yy), 0.0);
	glVertex3f((299 + universityn) / xx, 1 - (643 / yy), 0.0);
	glVertex3f((292 + universityn) / xx, 1 - (654 / yy), 0.0);

	glVertex3f((299 + universityn) / xx, 1 - (643 / yy), 0.0);
	glVertex3f((292 + universityn) / xx, 1 - (654 / yy), 0.0);
	glVertex3f((302 + universityn) / xx, 1 - (660 / yy), 0.0);

	glVertex3f((292 + universityn) / xx, 1 - (654 / yy), 0.0);
	glVertex3f((302 + universityn) / xx, 1 - (660 / yy), 0.0);
	glVertex3f((292 + universityn) / xx, 1 - (716 / yy), 0.0);

	glVertex3f((302 + universityn) / xx, 1 - (660 / yy), 0.0);
	glVertex3f((292 + universityn) / xx, 1 - (716 / yy), 0.0);
	glVertex3f((302 + universityn) / xx, 1 - (716 / yy), 0.0);
	//n
	float uni;
	uni = (1173 - 176);
	glVertex3f((176 + uni) / xx, 1 - (604 / yy), 0.0);
	glVertex3f((187 + uni) / xx, 1 - (621 / yy), 0.0);
	glVertex3f((187 + uni) / xx, 1 - (604 / yy), 0.0);

	glVertex3f((176 + uni) / xx, 1 - (604 / yy), 0.0);
	glVertex3f((187 + uni) / xx, 1 - (621 / yy), 0.0);
	glVertex3f((176 + uni) / xx, 1 - (621 / yy), 0.0);

	glVertex3f((176 + uni) / xx, 1 - (634 / yy), 0.0);
	glVertex3f((187 + uni) / xx, 1 - (716 / yy), 0.0);
	glVertex3f((176 + uni) / xx, 1 - (716 / yy), 0.0);

	glVertex3f((187 + uni) / xx, 1 - (634 / yy), 0.0);
	glVertex3f((176 + uni) / xx, 1 - (634 / yy), 0.0);
	glVertex3f((187 + uni) / xx, 1 - (716 / yy), 0.0);

	//i



	glVertex3f(1195 / xx, 1 - (635 / yy), 0.0);
	glVertex3f(1206 / xx, 1 - (635 / yy), 0.0);
	glVertex3f(1214 / xx, 1 - (715 / yy), 0.0);

	glVertex3f(1206 / xx, 1 - (635 / yy), 0.0);
	glVertex3f(1214 / xx, 1 - (715 / yy), 0.0);
	glVertex3f(1224 / xx, 1 - (715 / yy), 0.0);

	glVertex3f(1214 / xx, 1 - (715 / yy), 0.0);
	glVertex3f(1224 / xx, 1 - (715 / yy), 0.0);
	glVertex3f(1233 / xx, 1 - (635 / yy), 0.0);

	glVertex3f(1224 / xx, 1 - (715 / yy), 0.0);
	glVertex3f(1233 / xx, 1 - (635 / yy), 0.0);
	glVertex3f(1243 / xx, 1 - (635 / yy), 0.0);

	//v

	glVertex3f(1261 / xx, 1 - (680 / yy), 0.0);
	glVertex3f(1262 / xx, 1 - (670 / yy), 0.0);
	glVertex3f(1297 / xx, 1 - (680 / yy), 0.0);

	glVertex3f(1262 / xx, 1 - (670 / yy), 0.0);
	glVertex3f(1297 / xx, 1 - (680 / yy), 0.0);
	glVertex3f(1288 / xx, 1 - (669 / yy), 0.0);

	glVertex3f(1288 / xx, 1 - (669 / yy), 0.0);
	glVertex3f(1297 / xx, 1 - (680 / yy), 0.0);
	glVertex3f(1296 / xx, 1 - (659 / yy), 0.0);

	glVertex3f(1288 / xx, 1 - (669 / yy), 0.0);
	glVertex3f(1296 / xx, 1 - (659 / yy), 0.0);
	glVertex3f(1286 / xx, 1 - (662 / yy), 0.0);

	glVertex3f(1296 / xx, 1 - (659 / yy), 0.0);
	glVertex3f(1286 / xx, 1 - (662 / yy), 0.0);
	glVertex3f(1292 / xx, 1 - (647 / yy), 0.0);

	glVertex3f(1286 / xx, 1 - (662 / yy), 0.0);
	glVertex3f(1292 / xx, 1 - (647 / yy), 0.0);
	glVertex3f(1284 / xx, 1 - (652 / yy), 0.0);

	glVertex3f(1292 / xx, 1 - (647 / yy), 0.0);
	glVertex3f(1284 / xx, 1 - (652 / yy), 0.0);
	glVertex3f(1285 / xx, 1 - (636 / yy), 0.0);

	glVertex3f(1284 / xx, 1 - (652 / yy), 0.0);
	glVertex3f(1285 / xx, 1 - (636 / yy), 0.0);
	glVertex3f(1277 / xx, 1 - (646 / yy), 0.0);

	glVertex3f(1285 / xx, 1 - (636 / yy), 0.0);
	glVertex3f(1277 / xx, 1 - (646 / yy), 0.0);
	glVertex3f(1270 / xx, 1 - (635 / yy), 0.0);

	glVertex3f(1277 / xx, 1 - (646 / yy), 0.0);
	glVertex3f(1270 / xx, 1 - (635 / yy), 0.0);
	glVertex3f(1269 / xx, 1 - (647 / yy), 0.0);

	glVertex3f(1270 / xx, 1 - (635 / yy), 0.0);
	glVertex3f(1269 / xx, 1 - (647 / yy), 0.0);
	glVertex3f(1260 / xx, 1 - (639 / yy), 0.0);

	glVertex3f(1269 / xx, 1 - (647 / yy), 0.0);
	glVertex3f(1260 / xx, 1 - (639 / yy), 0.0);
	glVertex3f(1266 / xx, 1 - (651 / yy), 0.0);

	glVertex3f(1260 / xx, 1 - (639 / yy), 0.0);
	glVertex3f(1266 / xx, 1 - (651 / yy), 0.0);
	glVertex3f(1254 / xx, 1 - (652 / yy), 0.0);

	glVertex3f(1266 / xx, 1 - (651 / yy), 0.0);
	glVertex3f(1254 / xx, 1 - (652 / yy), 0.0);
	glVertex3f(1262 / xx, 1 - (659 / yy), 0.0);

	glVertex3f(1254 / xx, 1 - (652 / yy), 0.0);
	glVertex3f(1262 / xx, 1 - (659 / yy), 0.0);
	glVertex3f(1252 / xx, 1 - (667 / yy), 0.0);

	glVertex3f(1262 / xx, 1 - (659 / yy), 0.0);
	glVertex3f(1252 / xx, 1 - (667 / yy), 0.0);
	glVertex3f(1261 / xx, 1 - (670 / yy), 0.0);

	glVertex3f(1252 / xx, 1 - (667 / yy), 0.0);
	glVertex3f(1261 / xx, 1 - (670 / yy), 0.0);
	glVertex3f(1252 / xx, 1 - (684 / yy), 0.0);

	glVertex3f(1261 / xx, 1 - (670 / yy), 0.0);
	glVertex3f(1252 / xx, 1 - (684 / yy), 0.0);
	glVertex3f(1261 / xx, 1 - (680 / yy), 0.0);

	glVertex3f(1252 / xx, 1 - (684 / yy), 0.0);
	glVertex3f(1261 / xx, 1 - (680 / yy), 0.0);
	glVertex3f(1261 / xx, 1 - (687 / yy), 0.0);

	glVertex3f(1261 / xx, 1 - (687 / yy), 0.0);
	glVertex3f(1254 / xx, 1 - (703 / yy), 0.0);
	glVertex3f(1252 / xx, 1 - (683 / yy), 0.0);

	glVertex3f(1261 / xx, 1 - (687 / yy), 0.0);
	glVertex3f(1254 / xx, 1 - (703 / yy), 0.0);
	glVertex3f(1266 / xx, 1 - (701 / yy), 0.0);

	glVertex3f(1254 / xx, 1 - (703 / yy), 0.0);
	glVertex3f(1266 / xx, 1 - (701 / yy), 0.0);
	glVertex3f(1261 / xx, 1 - (712 / yy), 0.0);

	glVertex3f(1266 / xx, 1 - (701 / yy), 0.0);
	glVertex3f(1261 / xx, 1 - (712 / yy), 0.0);
	glVertex3f(1272 / xx, 1 - (706 / yy), 0.0);

	glVertex3f(1261 / xx, 1 - (712 / yy), 0.0);
	glVertex3f(1272 / xx, 1 - (706 / yy), 0.0);
	glVertex3f(1273 / xx, 1 - (717 / yy), 0.0);

	glVertex3f(1272 / xx, 1 - (706 / yy), 0.0);
	glVertex3f(1273 / xx, 1 - (717 / yy), 0.0);
	glVertex3f(1279 / xx, 1 - (706 / yy), 0.0);

	glVertex3f(1273 / xx, 1 - (717 / yy), 0.0);
	glVertex3f(1279 / xx, 1 - (706 / yy), 0.0);
	glVertex3f(1286 / xx, 1 - (715 / yy), 0.0);

	glVertex3f(1279 / xx, 1 - (706 / yy), 0.0);
	glVertex3f(1286 / xx, 1 - (715 / yy), 0.0);
	glVertex3f(1284 / xx, 1 - (700 / yy), 0.0);

	glVertex3f(1286 / xx, 1 - (715 / yy), 0.0);
	glVertex3f(1284 / xx, 1 - (700 / yy), 0.0);
	glVertex3f(1293 / xx, 1 - (703 / yy), 0.0);

	glVertex3f(1284 / xx, 1 - (700 / yy), 0.0);
	glVertex3f(1293 / xx, 1 - (703 / yy), 0.0);
	glVertex3f(1287 / xx, 1 - (691 / yy), 0.0);

	glVertex3f(1293 / xx, 1 - (703 / yy), 0.0);
	glVertex3f(1287 / xx, 1 - (691 / yy), 0.0);
	glVertex3f(1296 / xx, 1 - (692 / yy), 0.0);



	//e

	glVertex3f(1310 / xx, 1 - (635 / yy), 0.0);
	glVertex3f(1310 / xx, 1 - (716 / yy), 0.0);
	glVertex3f(1320 / xx, 1 - (716 / yy), 0.0);

	glVertex3f(1310 / xx, 1 - (635 / yy), 0.0);
	glVertex3f(1320 / xx, 1 - (716 / yy), 0.0);
	glVertex3f(1320 / xx, 1 - (635 / yy), 0.0);

	glVertex3f(1319 / xx, 1 - (647 / yy), 0.0);
	glVertex3f(1321 / xx, 1 - (671 / yy), 0.0);
	glVertex3f(1324 / xx, 1 - (659 / yy), 0.0);

	glVertex3f(1319 / xx, 1 - (647 / yy), 0.0);
	glVertex3f(1324 / xx, 1 - (659 / yy), 0.0);
	glVertex3f(1324 / xx, 1 - (650 / yy), 0.0);

	glVertex3f(1319 / xx, 1 - (647 / yy), 0.0);
	glVertex3f(1324 / xx, 1 - (650 / yy), 0.0);
	glVertex3f(1322 / xx, 1 - (639 / yy), 0.0);

	glVertex3f(1324 / xx, 1 - (650 / yy), 0.0);
	glVertex3f(1322 / xx, 1 - (639 / yy), 0.0);
	glVertex3f(1331 / xx, 1 - (649 / yy), 0.0);

	glVertex3f(1322 / xx, 1 - (639 / yy), 0.0);
	glVertex3f(1331 / xx, 1 - (649 / yy), 0.0);
	glVertex3f(1332 / xx, 1 - (635 / yy), 0.0);

	glVertex3f(1331 / xx, 1 - (649 / yy), 0.0);
	glVertex3f(1329 / xx, 1 - (635 / yy), 0.0);
	glVertex3f(1337 / xx, 1 - (653 / yy), 0.0);

	glVertex3f(1329 / xx, 1 - (635 / yy), 0.0);
	glVertex3f(1337 / xx, 1 - (653 / yy), 0.0);
	glVertex3f(1339 / xx, 1 - (638 / yy), 0.0);


	//r

	float universitys;
	universitys = (1376 - 853);

	glVertex3f((863 + universitys) / xx, 1 - (657 / yy), 0.0);
	glVertex3f((853 + universitys) / xx, 1 - (658 / yy), 0.0);
	glVertex3f((859 + universitys) / xx, 1 - (642 / yy), 0.0);

	glVertex3f((853 + universitys) / xx, 1 - (658 / yy), 0.0);
	glVertex3f((859 + universitys) / xx, 1 - (642 / yy), 0.0);
	glVertex3f((848 + universitys) / xx, 1 - (646 / yy), 0.0);

	glVertex3f((859 + universitys) / xx, 1 - (642 / yy), 0.0);
	glVertex3f((848 + universitys) / xx, 1 - (646 / yy), 0.0);
	glVertex3f((849 + universitys) / xx, 1 - (634 / yy), 0.0);

	glVertex3f((848 + universitys) / xx, 1 - (646 / yy), 0.0);
	glVertex3f((849 + universitys) / xx, 1 - (634 / yy), 0.0);
	glVertex3f((838 + universitys) / xx, 1 - (647 / yy), 0.0);

	glVertex3f((849 + universitys) / xx, 1 - (634 / yy), 0.0);
	glVertex3f((838 + universitys) / xx, 1 - (647 / yy), 0.0);
	glVertex3f((839 + universitys) / xx, 1 - (633 / yy), 0.0);

	glVertex3f((838 + universitys) / xx, 1 - (647 / yy), 0.0);
	glVertex3f((839 + universitys) / xx, 1 - (633 / yy), 0.0);
	glVertex3f((831 + universitys) / xx, 1 - (656 / yy), 0.0);

	glVertex3f((839 + universitys) / xx, 1 - (633 / yy), 0.0);
	glVertex3f((831 + universitys) / xx, 1 - (656 / yy), 0.0);
	glVertex3f((828 + universitys) / xx, 1 - (638 / yy), 0.0);

	glVertex3f((831 + universitys) / xx, 1 - (656 / yy), 0.0);
	glVertex3f((828 + universitys) / xx, 1 - (638 / yy), 0.0);
	glVertex3f((824 + universitys) / xx, 1 - (648 / yy), 0.0);

	glVertex3f((831 + universitys) / xx, 1 - (656 / yy), 0.0);
	glVertex3f((824 + universitys) / xx, 1 - (648 / yy), 0.0);
	glVertex3f((825 + universitys) / xx, 1 - (662 / yy), 0.0);

	glVertex3f((831 + universitys) / xx, 1 - (656 / yy), 0.0);
	glVertex3f((825 + universitys) / xx, 1 - (662 / yy), 0.0);
	glVertex3f((827 + universitys) / xx, 1 - (671 / yy), 0.0);

	glVertex3f((831 + universitys) / xx, 1 - (656 / yy), 0.0);
	glVertex3f((827 + universitys) / xx, 1 - (671 / yy), 0.0);
	glVertex3f((839 + universitys) / xx, 1 - (664 / yy), 0.0);

	glVertex3f((827 + universitys) / xx, 1 - (671 / yy), 0.0);
	glVertex3f((839 + universitys) / xx, 1 - (664 / yy), 0.0);
	glVertex3f((838 + universitys) / xx, 1 - (677 / yy), 0.0);

	glVertex3f((839 + universitys) / xx, 1 - (664 / yy), 0.0);
	glVertex3f((838 + universitys) / xx, 1 - (677 / yy), 0.0);
	glVertex3f((852 + universitys) / xx, 1 - (670 / yy), 0.0);

	glVertex3f((838 + universitys) / xx, 1 - (677 / yy), 0.0);
	glVertex3f((852 + universitys) / xx, 1 - (670 / yy), 0.0);
	glVertex3f((850 + universitys) / xx, 1 - (685 / yy), 0.0);

	glVertex3f((852 + universitys) / xx, 1 - (670 / yy), 0.0);
	glVertex3f((850 + universitys) / xx, 1 - (685 / yy), 0.0);
	glVertex3f((860 + universitys) / xx, 1 - (674 / yy), 0.0);

	glVertex3f((850 + universitys) / xx, 1 - (685 / yy), 0.0);
	glVertex3f((860 + universitys) / xx, 1 - (674 / yy), 0.0);
	glVertex3f((855 + universitys) / xx, 1 - (688 / yy), 0.0);

	glVertex3f((860 + universitys) / xx, 1 - (674 / yy), 0.0);
	glVertex3f((855 + universitys) / xx, 1 - (688 / yy), 0.0);
	glVertex3f((864 + universitys) / xx, 1 - (683 / yy), 0.0);

	glVertex3f((855 + universitys) / xx, 1 - (688 / yy), 0.0);
	glVertex3f((864 + universitys) / xx, 1 - (683 / yy), 0.0);
	glVertex3f((855 + universitys) / xx, 1 - (699 / yy), 0.0);

	glVertex3f((864 + universitys) / xx, 1 - (683 / yy), 0.0);
	glVertex3f((855 + universitys) / xx, 1 - (699 / yy), 0.0);
	glVertex3f((864 + universitys) / xx, 1 - (697 / yy), 0.0);

	glVertex3f((855 + universitys) / xx, 1 - (699 / yy), 0.0);
	glVertex3f((864 + universitys) / xx, 1 - (697 / yy), 0.0);
	glVertex3f((860 + universitys) / xx, 1 - (709 / yy), 0.0);

	glVertex3f((855 + universitys) / xx, 1 - (699 / yy), 0.0);
	glVertex3f((860 + universitys) / xx, 1 - (709 / yy), 0.0);
	glVertex3f((852 + universitys) / xx, 1 - (714 / yy), 0.0);

	glVertex3f((855 + universitys) / xx, 1 - (699 / yy), 0.0);
	glVertex3f((852 + universitys) / xx, 1 - (714 / yy), 0.0);
	glVertex3f((843 + universitys) / xx, 1 - (706 / yy), 0.0);

	glVertex3f((852 + universitys) / xx, 1 - (714 / yy), 0.0);
	glVertex3f((843 + universitys) / xx, 1 - (706 / yy), 0.0);
	glVertex3f((841 + universitys) / xx, 1 - (716 / yy), 0.0);

	glVertex3f((843 + universitys) / xx, 1 - (706 / yy), 0.0);
	glVertex3f((841 + universitys) / xx, 1 - (716 / yy), 0.0);
	glVertex3f((838 + universitys) / xx, 1 - (704 / yy), 0.0);

	glVertex3f((841 + universitys) / xx, 1 - (716 / yy), 0.0);
	glVertex3f((838 + universitys) / xx, 1 - (704 / yy), 0.0);
	glVertex3f((830 + universitys) / xx, 1 - (711 / yy), 0.0);

	glVertex3f((838 + universitys) / xx, 1 - (704 / yy), 0.0);
	glVertex3f((830 + universitys) / xx, 1 - (711 / yy), 0.0);
	glVertex3f((832 + universitys) / xx, 1 - (698 / yy), 0.0);

	glVertex3f((830 + universitys) / xx, 1 - (711 / yy), 0.0);
	glVertex3f((832 + universitys) / xx, 1 - (698 / yy), 0.0);
	glVertex3f((824 + universitys) / xx, 1 - (703 / yy), 0.0);

	glVertex3f((832 + universitys) / xx, 1 - (698 / yy), 0.0);
	glVertex3f((824 + universitys) / xx, 1 - (703 / yy), 0.0);
	glVertex3f((831 + universitys) / xx, 1 - (689 / yy), 0.0);

	glVertex3f((824 + universitys) / xx, 1 - (703 / yy), 0.0);
	glVertex3f((831 + universitys) / xx, 1 - (689 / yy), 0.0);
	glVertex3f((823 + universitys) / xx, 1 - (691 / yy), 0.0);


	//s
	float universi;
	universi = (1400 - 176);
	glVertex3f((176 + universi) / xx, 1 - (604 / yy), 0.0);
	glVertex3f((187 + universi) / xx, 1 - (621 / yy), 0.0);
	glVertex3f((187 + universi) / xx, 1 - (604 / yy), 0.0);

	glVertex3f((176 + universi) / xx, 1 - (604 / yy), 0.0);
	glVertex3f((187 + universi) / xx, 1 - (621 / yy), 0.0);
	glVertex3f((176 + universi) / xx, 1 - (621 / yy), 0.0);

	glVertex3f((176 + universi) / xx, 1 - (634 / yy), 0.0);
	glVertex3f((187 + universi) / xx, 1 - (716 / yy), 0.0);
	glVertex3f((176 + universi) / xx, 1 - (716 / yy), 0.0);

	glVertex3f((187 + universi) / xx, 1 - (634 / yy), 0.0);
	glVertex3f((176 + universi) / xx, 1 - (634 / yy), 0.0);
	glVertex3f((187 + universi) / xx, 1 - (716 / yy), 0.0);

	//i

	float universityt;
	universityt = (1424 - 140);
	glVertex3f((140 + universityt) / xx, 1 - (636 / yy), 0.0);
	glVertex3f((163 + universityt) / xx, 1 - (646 / yy), 0.0);
	glVertex3f((140 + universityt) / xx, 1 - (646 / yy), 0.0);

	glVertex3f((140 + universityt) / xx, 1 - (636 / yy), 0.0);
	glVertex3f((163 + universityt) / xx, 1 - (646 / yy), 0.0);
	glVertex3f((163 + universityt) / xx, 1 - (636 / yy), 0.0);

	glVertex3f((146 + universityt) / xx, 1 - (615 / yy), 0.0);
	glVertex3f((155 + universityt) / xx, 1 - (606 / yy), 0.0);
	glVertex3f((155 + universityt) / xx, 1 - (615 / yy), 0.0);

	glVertex3f((146 + universityt) / xx, 1 - (615 / yy), 0.0);
	glVertex3f((155 + universityt) / xx, 1 - (615 / yy), 0.0);
	glVertex3f((155 + universityt) / xx, 1 - (702 / yy), 0.0);

	glVertex3f((146 + universityt) / xx, 1 - (615 / yy), 0.0);
	glVertex3f((155 + universityt) / xx, 1 - (702 / yy), 0.0);
	glVertex3f((146 + universityt) / xx, 1 - (707 / yy), 0.0);

	glVertex3f((155 + universityt) / xx, 1 - (702 / yy), 0.0);
	glVertex3f((146 + universityt) / xx, 1 - (707 / yy), 0.0);
	glVertex3f((149 + universityt) / xx, 1 - (711 / yy), 0.0);

	glVertex3f((155 + universityt) / xx, 1 - (702 / yy), 0.0);
	glVertex3f((149 + universityt) / xx, 1 - (711 / yy), 0.0);
	glVertex3f((160 + universityt) / xx, 1 - (707 / yy), 0.0);

	glVertex3f((149 + universityt) / xx, 1 - (711 / yy), 0.0);
	glVertex3f((160 + universityt) / xx, 1 - (707 / yy), 0.0);
	glVertex3f((156 + universityt) / xx, 1 - (716 / yy), 0.0);

	glVertex3f((160 + universityt) / xx, 1 - (707 / yy), 0.0);
	glVertex3f((156 + universityt) / xx, 1 - (716 / yy), 0.0);
	glVertex3f((165 + universityt) / xx, 1 - (716 / yy), 0.0);

	glVertex3f((160 + universityt) / xx, 1 - (707 / yy), 0.0);
	glVertex3f((165 + universityt) / xx, 1 - (716 / yy), 0.0);
	glVertex3f((165 + universityt) / xx, 1 - (709 / yy), 0.0);


	//t


	glVertex3f(1454 / xx, 1 - (635 / yy), 0.0);
	glVertex3f(1463 / xx, 1 - (635 / yy), 0.0);
	glVertex3f(1477 / xx, 1 - (736 / yy), 0.0);

	glVertex3f(1463 / xx, 1 - (635 / yy), 0.0);
	glVertex3f(1477 / xx, 1 - (736 / yy), 0.0);
	glVertex3f(1481 / xx, 1 - (720 / yy), 0.0);

	glVertex3f(1481 / xx, 1 - (720 / yy), 0.0);
	glVertex3f(1492 / xx, 1 - (634 / yy), 0.0);
	glVertex3f(1477 / xx, 1 - (703 / yy), 0.0);

	glVertex3f(1481 / xx, 1 - (720 / yy), 0.0);
	glVertex3f(1492 / xx, 1 - (634 / yy), 0.0);
	glVertex3f(1499 / xx, 1 - (635 / yy), 0.0);

	glVertex3f(1473 / xx, 1 - (718 / yy), 0.0);
	glVertex3f(1477 / xx, 1 - (736 / yy), 0.0);
	glVertex3f(1468 / xx, 1 - (735 / yy), 0.0);

	glVertex3f(1477 / xx, 1 - (736 / yy), 0.0);
	glVertex3f(1468 / xx, 1 - (735 / yy), 0.0);
	glVertex3f(1471 / xx, 1 - (746 / yy), 0.0);

	glVertex3f(1468 / xx, 1 - (735 / yy), 0.0);
	glVertex3f(1471 / xx, 1 - (746 / yy), 0.0);
	glVertex3f(1458 / xx, 1 - (734 / yy), 0.0);

	glVertex3f(1471 / xx, 1 - (746 / yy), 0.0);
	glVertex3f(1458 / xx, 1 - (734 / yy), 0.0);
	glVertex3f(1459 / xx, 1 - (746 / yy), 0.0);

	//y




	glVertex3f(5 / xx, 1 - (100 / yy), 0.0);
	glVertex3f(138 / xx, 1 - (53 / yy), 0.0);
	glVertex3f(7 / xx, 1 - (130 / yy), 0.0);
	glVertex3f(138 / xx, 1 - (53 / yy), 0.0);
	glVertex3f(7 / xx, 1 - (130 / yy), 0.0);
	glVertex3f(147 / xx, 1 - (70 / yy), 0.0);

	glVertex3f(147 / xx, 1 - (70 / yy), 0.0);
	glVertex3f(154 / xx, 1 - (338 / yy), 0.0);
	glVertex3f(137 / xx, 1 - (328 / yy), 0.0);

	glVertex3f(137 / xx, 1 - (328 / yy), 0.0);
	glVertex3f(147 / xx, 1 - (70 / yy), 0.0);
	glVertex3f(135 / xx, 1 - (80 / yy), 0.0);
	glVertex3f(122 / xx, 1 - (318 / yy), 0.0);
	glVertex3f(138 / xx, 1 - (361 / yy), 0.0);
	glVertex3f(153 / xx, 1 - (340 / yy), 0.0);

	glVertex3f(24 / xx, 1 - (122 / yy), 0.0);
	glVertex3f(5 / xx, 1 - (130 / yy), 0.0);
	glVertex3f(5 / xx, 1 - (329 / yy), 0.0);
	glVertex3f(24 / xx, 1 - (122 / yy), 0.0);
	glVertex3f(20 / xx, 1 - (322 / yy), 0.0);
	glVertex3f(5 / xx, 1 - (329 / yy), 0.0);

	glVertex3f(127 / xx, 1 - (283 / yy), 0.0);
	glVertex3f(128 / xx, 1 - (309 / yy), 0.0);
	glVertex3f(11 / xx, 1 - (325 / yy), 0.0);
	glVertex3f(127 / xx, 1 - (283 / yy), 0.0);
	glVertex3f(17 / xx, 1 - (296 / yy), 0.0);
	glVertex3f(11 / xx, 1 - (325 / yy), 0.0);

	glVertex3f(24 / xx, 1 - (122 / yy), 0.0);
	glVertex3f(44 / xx, 1 - (169 / yy), 0.0);
	glVertex3f(20 / xx, 1 - (204 / yy), 0.0);

	glVertex3f(36 / xx, 1 - (148 / yy), 0.0);
	glVertex3f(44 / xx, 1 - (169 / yy), 0.0);
	glVertex3f(121 / xx, 1 - (108 / yy), 0.0);
	glVertex3f(44 / xx, 1 - (169 / yy), 0.0);
	glVertex3f(121 / xx, 1 - (108 / yy), 0.0);
	glVertex3f(127 / xx, 1 - (121 / yy), 0.0);

	glVertex3f(97 / xx, 1 - (90 / yy), 0.0);
	glVertex3f(131 / xx, 1 - (135 / yy), 0.0);
	glVertex3f(109 / xx, 1 - (137 / yy), 0.0);
	glVertex3f(97 / xx, 1 - (90 / yy), 0.0);
	glVertex3f(131 / xx, 1 - (135 / yy), 0.0);
	glVertex3f(113 / xx, 1 - (83 / yy), 0.0);

	glVertex3f(91 / xx, 1 - (93 / yy), 0.0);
	glVertex3f(94 / xx, 1 - (120 / yy), 0.0);
	glVertex3f(74 / xx, 1 - (100 / yy), 0.0);
	glVertex3f(74 / xx, 1 - (100 / yy), 0.0);
	glVertex3f(94 / xx, 1 - (120 / yy), 0.0);
	glVertex3f(78 / xx, 1 - (127 / yy), 0.0);

	glVertex3f(96 / xx, 1 - (138 / yy), 0.0);
	glVertex3f(130 / xx, 1 - (266 / yy), 0.0);
	glVertex3f(83 / xx, 1 - (146 / yy), 0.0);
	glVertex3f(83 / xx, 1 - (146 / yy), 0.0);
	glVertex3f(130 / xx, 1 - (266 / yy), 0.0);
	glVertex3f(120 / xx, 1 - (277 / yy), 0.0);

	glVertex3f(132 / xx, 1 - (245 / yy), 0.0);
	glVertex3f(130 / xx, 1 - (266 / yy), 0.0);
	glVertex3f(118 / xx, 1 - (225 / yy), 0.0);

	glVertex3f(130 / xx, 1 - (266 / yy), 0.0);
	glVertex3f(120 / xx, 1 - (277 / yy), 0.0);
	glVertex3f(130 / xx, 1 - (276 / yy), 0.0);

	glVertex3f(21 / xx, 1 - (225 / yy), 0.0);
	glVertex3f(20 / xx, 1 - (235 / yy), 0.0);
	glVertex3f(56 / xx, 1 - (162 / yy), 0.0);
	glVertex3f(56 / xx, 1 - (162 / yy), 0.0);
	glVertex3f(20 / xx, 1 - (235 / yy), 0.0);
	glVertex3f(72 / xx, 1 - (152 / yy), 0.0);

	glVertex3f(48 / xx, 1 - (192 / yy), 0.0);
	glVertex3f(86 / xx, 1 - (155 / yy), 0.0);
	glVertex3f(20 / xx, 1 - (235 / yy), 0.0);
	glVertex3f(86 / xx, 1 - (155 / yy), 0.0);
	glVertex3f(20 / xx, 1 - (235 / yy), 0.0);
	glVertex3f(90 / xx, 1 - (171 / yy), 0.0);

	glVertex3f(90 / xx, 1 - (171 / yy), 0.0);
	glVertex3f(43 / xx, 1 - (216 / yy), 0.0);
	glVertex3f(24 / xx, 1 - (252 / yy), 0.0);
	glVertex3f(90 / xx, 1 - (171 / yy), 0.0);
	glVertex3f(24 / xx, 1 - (252 / yy), 0.0);
	glVertex3f(28 / xx, 1 - (278 / yy), 0.0);

	glVertex3f(70 / xx, 1 - (215 / yy), 0.0);
	glVertex3f(96 / xx, 1 - (202 / yy), 0.0);
	glVertex3f(28 / xx, 1 - (278 / yy), 0.0);
	glVertex3f(96 / xx, 1 - (202 / yy), 0.0);
	glVertex3f(28 / xx, 1 - (278 / yy), 0.0);
	glVertex3f(96 / xx, 1 - (227 / yy), 0.0);

	glVertex3f(110 / xx, 1 - (243 / yy), 0.0);
	glVertex3f(126 / xx, 1 - (171 / yy), 0.0);
	glVertex3f(114 / xx, 1 - (146 / yy), 0.0);
	glVertex3f(114 / xx, 1 - (146 / yy), 0.0);
	glVertex3f(110 / xx, 1 - (243 / yy), 0.0);
	glVertex3f(86 / xx, 1 - (290 / yy), 0.0);

	glVertex3f(86 / xx, 1 - (290 / yy), 0.0);
	glVertex3f(98 / xx, 1 - (229 / yy), 0.0);
	glVertex3f(56 / xx, 1 - (291 / yy), 0.0);
	//國

	glVertex3f(261 / xx, 1 - (74 / yy), 0.0);
	glVertex3f(261 / xx, 1 - (104 / yy), 0.0);
	glVertex3f(306 / xx, 1 - (109 / yy), 0.0);
	glVertex3f(306 / xx, 1 - (109 / yy), 0.0);
	glVertex3f(261 / xx, 1 - (104 / yy), 0.0);
	glVertex3f(279 / xx, 1 - (132 / yy), 0.0);

	glVertex3f(219 / xx, 1 - (150 / yy), 0.0);
	glVertex3f(328 / xx, 1 - (121 / yy), 0.0);
	glVertex3f(330 / xx, 1 - (151 / yy), 0.0);
	glVertex3f(219 / xx, 1 - (150 / yy), 0.0);
	glVertex3f(330 / xx, 1 - (151 / yy), 0.0);
	glVertex3f(221 / xx, 1 - (193 / yy), 0.0);

	glVertex3f(279 / xx, 1 - (134 / yy), 0.0);
	glVertex3f(306 / xx, 1 - (108 / yy), 0.0);
	glVertex3f(304 / xx, 1 - (129 / yy), 0.0);

	glVertex3f(278 / xx, 1 - (170 / yy), 0.0);
	glVertex3f(247 / xx, 1 - (247 / yy), 0.0);
	glVertex3f(243 / xx, 1 - (216 / yy), 0.0);
	glVertex3f(278 / xx, 1 - (170 / yy), 0.0);
	glVertex3f(247 / xx, 1 - (247 / yy), 0.0);
	glVertex3f(292 / xx, 1 - (167 / yy), 0.0);

	glVertex3f(279 / xx, 1 - (190 / yy), 0.0);
	glVertex3f(320 / xx, 1 - (179 / yy), 0.0);
	glVertex3f(247 / xx, 1 - (247 / yy), 0.0);

	glVertex3f(315 / xx, 1 - (184 / yy), 0.0);
	glVertex3f(324 / xx, 1 - (172 / yy), 0.0);
	glVertex3f(332 / xx, 1 - (192 / yy), 0.0);

	glVertex3f(318 / xx, 1 - (186 / yy), 0.0);
	glVertex3f(289 / xx, 1 - (281 / yy), 0.0);
	glVertex3f(335 / xx, 1 - (197 / yy), 0.0);
	glVertex3f(318 / xx, 1 - (186 / yy), 0.0);
	glVertex3f(289 / xx, 1 - (281 / yy), 0.0);
	glVertex3f(266 / xx, 1 - (287 / yy), 0.0);

	glVertex3f(216 / xx, 1 - (291 / yy), 0.0);
	glVertex3f(361 / xx, 1 - (300 / yy), 0.0);
	glVertex3f(356 / xx, 1 - (280 / yy), 0.0);
	glVertex3f(216 / xx, 1 - (291 / yy), 0.0);
	glVertex3f(361 / xx, 1 - (300 / yy), 0.0);
	glVertex3f(234 / xx, 1 - (324 / yy), 0.0);

	//立

	glVertex3f(402 / xx, 1 - (124 / yy), 0.0);
	glVertex3f(419 / xx, 1 - (223 / yy), 0.0);
	glVertex3f(387 / xx, 1 - (128 / yy), 0.0);
	glVertex3f(387 / xx, 1 - (128 / yy), 0.0);
	glVertex3f(419 / xx, 1 - (223 / yy), 0.0);
	glVertex3f(405 / xx, 1 - (228 / yy), 0.0);

	glVertex3f(405 / xx, 1 - (128 / yy), 0.0);
	glVertex3f(489 / xx, 1 - (98 / yy), 0.0);
	glVertex3f(473 / xx, 1 - (96 / yy), 0.0);
	glVertex3f(405 / xx, 1 - (128 / yy), 0.0);
	glVertex3f(489 / xx, 1 - (98 / yy), 0.0);
	glVertex3f(431 / xx, 1 - (145 / yy), 0.0);

	glVertex3f(473 / xx, 1 - (60 / yy), 0.0);
	glVertex3f(471 / xx, 1 - (443 / yy), 0.0);
	glVertex3f(487 / xx, 1 - (53 / yy), 0.0);
	glVertex3f(487 / xx, 1 - (53 / yy), 0.0);
	glVertex3f(471 / xx, 1 - (443 / yy), 0.0);
	glVertex3f(493 / xx, 1 - (430 / yy), 0.0);


	glVertex3f(486 / xx, 1 - (98 / yy), 0.0);
	glVertex3f(530 / xx, 1 - (94 / yy), 0.0);
	glVertex3f(514 / xx, 1 - (116 / yy), 0.0);
	glVertex3f(486 / xx, 1 - (98 / yy), 0.0);
	glVertex3f(514 / xx, 1 - (116 / yy), 0.0);
	glVertex3f(487 / xx, 1 - (115 / yy), 0.0);

	glVertex3f(531 / xx, 1 - (101 / yy), 0.0);
	glVertex3f(539 / xx, 1 - (115 / yy), 0.0);
	glVertex3f(440 / xx, 1 - (223 / yy), 0.0);
	glVertex3f(531 / xx, 1 - (101 / yy), 0.0);
	glVertex3f(440 / xx, 1 - (223 / yy), 0.0);
	glVertex3f(441 / xx, 1 - (196 / yy), 0.0);

	glVertex3f(443 / xx, 1 - (223 / yy), 0.0);
	glVertex3f(471 / xx, 1 - (191 / yy), 0.0);
	glVertex3f(506 / xx, 1 - (203 / yy), 0.0);
	glVertex3f(471 / xx, 1 - (191 / yy), 0.0);
	glVertex3f(506 / xx, 1 - (203 / yy), 0.0);
	glVertex3f(510 / xx, 1 - (181 / yy), 0.0);


	//中
	glVertex3f(598 / xx, 1 - (91 / yy), 0.0);
	glVertex3f(612 / xx, 1 - (84 / yy), 0.0);
	glVertex3f(616 / xx, 1 - (234 / yy), 0.0);
	glVertex3f(598 / xx, 1 - (91 / yy), 0.0);
	glVertex3f(616 / xx, 1 - (234 / yy), 0.0);
	glVertex3f(603 / xx, 1 - (236 / yy), 0.0);

	glVertex3f(614 / xx, 1 - (83 / yy), 0.0);
	glVertex3f(623 / xx, 1 - (98 / yy), 0.0);
	glVertex3f(632 / xx, 1 - (86 / yy), 0.0);

	glVertex3f(623 / xx, 1 - (98 / yy), 0.0);
	glVertex3f(632 / xx, 1 - (86 / yy), 0.0);
	glVertex3f(633 / xx, 1 - (216 / yy), 0.0);
	glVertex3f(623 / xx, 1 - (96 / yy), 0.0);
	glVertex3f(633 / xx, 1 - (216 / yy), 0.0);
	glVertex3f(622 / xx, 1 - (221 / yy), 0.0);

	glVertex3f(700 / xx, 1 - (194 / yy), 0.0);
	glVertex3f(697 / xx, 1 - (214 / yy), 0.0);
	glVertex3f(541 / xx, 1 - (241 / yy), 0.0);
	glVertex3f(541 / xx, 1 - (241 / yy), 0.0);
	glVertex3f(697 / xx, 1 - (214 / yy), 0.0);
	glVertex3f(539 / xx, 1 - (277 / yy), 0.0);

	glVertex3f(539 / xx, 1 - (277 / yy), 0.0);
	glVertex3f(594 / xx, 1 - (251 / yy), 0.0);
	glVertex3f(549 / xx, 1 - (293 / yy), 0.0);

	glVertex3f(700 / xx, 1 - (191 / yy), 0.0);
	glVertex3f(745 / xx, 1 - (214 / yy), 0.0);
	glVertex3f(696 / xx, 1 - (212 / yy), 0.0);
	glVertex3f(700 / xx, 1 - (191 / yy), 0.0);
	glVertex3f(745 / xx, 1 - (214 / yy), 0.0);
	glVertex3f(732 / xx, 1 - (188 / yy), 0.0);

	glVertex3f(732 / xx, 1 - (188 / yy), 0.0);
	glVertex3f(745 / xx, 1 - (214 / yy), 0.0);
	glVertex3f(755 / xx, 1 - (193 / yy), 0.0);
	glVertex3f(732 / xx, 1 - (188 / yy), 0.0);
	glVertex3f(755 / xx, 1 - (193 / yy), 0.0);
	glVertex3f(747 / xx, 1 - (176 / yy), 0.0);

	glVertex3f(575 / xx, 1 - (274 / yy), 0.0);
	glVertex3f(600 / xx, 1 - (291 / yy), 0.0);
	glVertex3f(601 / xx, 1 - (331 / yy), 0.0);
	glVertex3f(600 / xx, 1 - (291 / yy), 0.0);
	glVertex3f(601 / xx, 1 - (331 / yy), 0.0);
	glVertex3f(621 / xx, 1 - (309 / yy), 0.0);

	glVertex3f(600 / xx, 1 - (291 / yy), 0.0);
	glVertex3f(621 / xx, 1 - (309 / yy), 0.0);
	glVertex3f(638 / xx, 1 - (291 / yy), 0.0);
	glVertex3f(600 / xx, 1 - (291 / yy), 0.0);
	glVertex3f(638 / xx, 1 - (291 / yy), 0.0);
	glVertex3f(636 / xx, 1 - (271 / yy), 0.0);

	glVertex3f(643 / xx, 1 - (271 / yy), 0.0);
	glVertex3f(666 / xx, 1 - (259 / yy), 0.0);
	glVertex3f(646 / xx, 1 - (281 / yy), 0.0);
	glVertex3f(701 / xx, 1 - (251 / yy), 0.0);
	glVertex3f(746 / xx, 1 - (293 / yy), 0.0);
	glVertex3f(741 / xx, 1 - (344 / yy), 0.0);

	glVertex3f(642 / xx, 1 - (77 / yy), 0.0);
	glVertex3f(682 / xx, 1 - (49 / yy), 0.0);
	glVertex3f(688 / xx, 1 - (58 / yy), 0.0);
	glVertex3f(688 / xx, 1 - (58 / yy), 0.0);
	glVertex3f(642 / xx, 1 - (77 / yy), 0.0);
	glVertex3f(685 / xx, 1 - (85 / yy), 0.0);


	glVertex3f(653 / xx, 1 - (80 / yy), 0.0);
	glVertex3f(650 / xx, 1 - (211 / yy), 0.0);
	glVertex3f(642 / xx, 1 - (77 / yy), 0.0);
	glVertex3f(642 / xx, 1 - (77 / yy), 0.0);
	glVertex3f(650 / xx, 1 - (211 / yy), 0.0);
	glVertex3f(643 / xx, 1 - (213 / yy), 0.0);

	glVertex3f(685 / xx, 1 - (87 / yy), 0.0);
	glVertex3f(675 / xx, 1 - (200 / yy), 0.0);
	glVertex3f(666 / xx, 1 - (84 / yy), 0.0);
	glVertex3f(666 / xx, 1 - (84 / yy), 0.0);
	glVertex3f(675 / xx, 1 - (200 / yy), 0.0);
	glVertex3f(666 / xx, 1 - (206 / yy), 0.0);

	glVertex3f(653 / xx, 1 - (113 / yy), 0.0);
	glVertex3f(666 / xx, 1 - (102 / yy), 0.0);
	glVertex3f(667 / xx, 1 - (152 / yy), 0.0);

	glVertex3f(653 / xx, 1 - (113 / yy), 0.0);
	glVertex3f(658 / xx, 1 - (140 / yy), 0.0);
	glVertex3f(662 / xx, 1 - (129 / yy), 0.0);

	glVertex3f(653 / xx, 1 - (113 / yy), 0.0);
	glVertex3f(658 / xx, 1 - (140 / yy), 0.0);
	glVertex3f(653 / xx, 1 - (129 / yy), 0.0);
	glVertex3f(662 / xx, 1 - (129 / yy), 0.0);
	glVertex3f(652 / xx, 1 - (160 / yy), 0.0);
	glVertex3f(660 / xx, 1 - (164 / yy), 0.0);

	glVertex3f(662 / xx, 1 - (163 / yy), 0.0);
	glVertex3f(652 / xx, 1 - (160 / yy), 0.0);
	glVertex3f(651 / xx, 1 - (176 / yy), 0.0);
	glVertex3f(651 / xx, 1 - (176 / yy), 0.0);
	glVertex3f(669 / xx, 1 - (155 / yy), 0.0);
	glVertex3f(657 / xx, 1 - (190 / yy), 0.0);


	glVertex3f(660 / xx, 1 - (195 / yy), 0.0);
	glVertex3f(649 / xx, 1 - (209 / yy), 0.0);
	glVertex3f(668 / xx, 1 - (202 / yy), 0.0);

	glVertex3f(687 / xx, 1 - (76 / yy), 0.0);
	glVertex3f(685 / xx, 1 - (94 / yy), 0.0);
	glVertex3f(722 / xx, 1 - (52 / yy), 0.0);
	glVertex3f(685 / xx, 1 - (94 / yy), 0.0);
	glVertex3f(722 / xx, 1 - (52 / yy), 0.0);
	glVertex3f(700 / xx, 1 - (92 / yy), 0.0);

	glVertex3f(700 / xx, 1 - (92 / yy), 0.0);
	glVertex3f(722 / xx, 1 - (52 / yy), 0.0);
	glVertex3f(693 / xx, 1 - (199 / yy), 0.0);
	glVertex3f(693 / xx, 1 - (199 / yy), 0.0);
	glVertex3f(722 / xx, 1 - (52 / yy), 0.0);
	glVertex3f(702 / xx, 1 - (192 / yy), 0.0);

	glVertex3f(682 / xx, 1 - (114 / yy), 0.0);
	glVertex3f(681 / xx, 1 - (129 / yy), 0.0);
	glVertex3f(698 / xx, 1 - (135 / yy), 0.0);
	glVertex3f(681 / xx, 1 - (129 / yy), 0.0);
	glVertex3f(698 / xx, 1 - (135 / yy), 0.0);
	glVertex3f(694 / xx, 1 - (164 / yy), 0.0);

	glVertex3f(694 / xx, 1 - (164 / yy), 0.0);
	glVertex3f(690 / xx, 1 - (150 / yy), 0.0);
	glVertex3f(683 / xx, 1 - (149 / yy), 0.0);
	glVertex3f(683 / xx, 1 - (149 / yy), 0.0);
	glVertex3f(676 / xx, 1 - (150 / yy), 0.0);
	glVertex3f(693 / xx, 1 - (195 / yy), 0.0);
	glVertex3f(693 / xx, 1 - (195 / yy), 0.0);
	glVertex3f(676 / xx, 1 - (150 / yy), 0.0);
	glVertex3f(686 / xx, 1 - (186 / yy), 0.0);

	//興

	glVertex3f(803 / xx, 1 - (172 / yy), 0.0);
	glVertex3f(796 / xx, 1 - (184 / yy), 0.0);
	glVertex3f(820 / xx, 1 - (180 / yy), 0.0);

	glVertex3f(796 / xx, 1 - (184 / yy), 0.0);
	glVertex3f(801 / xx, 1 - (219 / yy), 0.0);
	glVertex3f(820 / xx, 1 - (180 / yy), 0.0);

	glVertex3f(801 / xx, 1 - (219 / yy), 0.0);
	glVertex3f(820 / xx, 1 - (180 / yy), 0.0);
	glVertex3f(810 / xx, 1 - (226 / yy), 0.0);

	glVertex3f(810 / xx, 1 - (226 / yy), 0.0);
	glVertex3f(820 / xx, 1 - (180 / yy), 0.0);
	glVertex3f(836 / xx, 1 - (198 / yy), 0.0);

	glVertex3f(836 / xx, 1 - (198 / yy), 0.0);
	glVertex3f(820 / xx, 1 - (180 / yy), 0.0);
	glVertex3f(888 / xx, 1 - (162 / yy), 0.0);

	glVertex3f(888 / xx, 1 - (162 / yy), 0.0);
	glVertex3f(820 / xx, 1 - (180 / yy), 0.0);
	glVertex3f(892 / xx, 1 - (133 / yy), 0.0);

	glVertex3f(892 / xx, 1 - (133 / yy), 0.0);
	glVertex3f(888 / xx, 1 - (162 / yy), 0.0);
	glVertex3f(913 / xx, 1 - (137 / yy), 0.0);

	glVertex3f(913 / xx, 1 - (137 / yy), 0.0);
	glVertex3f(888 / xx, 1 - (162 / yy), 0.0);
	glVertex3f(908 / xx, 1 - (162 / yy), 0.0);

	glVertex3f(870 / xx, 1 - (148 / yy), 0.0);
	glVertex3f(880 / xx, 1 - (144 / yy), 0.0);
	glVertex3f(879 / xx, 1 - (113 / yy), 0.0);

	glVertex3f(879 / xx, 1 - (113 / yy), 0.0);
	glVertex3f(888 / xx, 1 - (57 / yy), 0.0);
	glVertex3f(888 / xx, 1 - (114 / yy), 0.0);

	glVertex3f(888 / xx, 1 - (114 / yy), 0.0);
	glVertex3f(883 / xx, 1 - (142 / yy), 0.0);
	glVertex3f(891 / xx, 1 - (137 / yy), 0.0);

	glVertex3f(862 / xx, 1 - (179 / yy), 0.0);
	glVertex3f(874 / xx, 1 - (171 / yy), 0.0);
	glVertex3f(865 / xx, 1 - (247 / yy), 0.0);
	glVertex3f(862 / xx, 1 - (179 / yy), 0.0);
	glVertex3f(865 / xx, 1 - (247 / yy), 0.0);
	glVertex3f(846 / xx, 1 - (237 / yy), 0.0);

	glVertex3f(846 / xx, 1 - (237 / yy), 0.0);
	glVertex3f(865 / xx, 1 - (247 / yy), 0.0);
	glVertex3f(850 / xx, 1 - (282 / yy), 0.0);
	glVertex3f(850 / xx, 1 - (282 / yy), 0.0);
	glVertex3f(846 / xx, 1 - (237 / yy), 0.0);
	glVertex3f(810 / xx, 1 - (286 / yy), 0.0);

	glVertex3f(882 / xx, 1 - (221 / yy), 0.0);
	glVertex3f(911 / xx, 1 - (257 / yy), 0.0);
	glVertex3f(939 / xx, 1 - (259 / yy), 0.0);

	glVertex3f(911 / xx, 1 - (257 / yy), 0.0);
	glVertex3f(939 / xx, 1 - (259 / yy), 0.0);
	glVertex3f(915 / xx, 1 - (284 / yy), 0.0);

	glVertex3f(915 / xx, 1 - (284 / yy), 0.0);
	glVertex3f(911 / xx, 1 - (257 / yy), 0.0);
	glVertex3f(890 / xx, 1 - (281 / yy), 0.0);

	glVertex3f(915 / xx, 1 - (284 / yy), 0.0);
	glVertex3f(939 / xx, 1 - (259 / yy), 0.0);
	glVertex3f(938 / xx, 1 - (276 / yy), 0.0);

	glVertex3f(938 / xx, 1 - (276 / yy), 0.0);
	glVertex3f(915 / xx, 1 - (284 / yy), 0.0);
	glVertex3f(931 / xx, 1 - (301 / yy), 0.0);

	//大


	glVertex3f(1013 / xx, 1 - (43 / yy), 0.0);
	glVertex3f(1020 / xx, 1 - (69 / yy), 0.0);
	glVertex3f(1015 / xx, 1 - (65 / yy), 0.0);
	glVertex3f(1013 / xx, 1 - (43 / yy), 0.0);
	glVertex3f(1015 / xx, 1 - (65 / yy), 0.0);
	glVertex3f(1006 / xx, 1 - (85 / yy), 0.0);
	glVertex3f(1013 / xx, 1 - (43 / yy), 0.0);
	glVertex3f(1006 / xx, 1 - (85 / yy), 0.0);
	glVertex3f(1000 / xx, 1 - (78 / yy), 0.0);
	glVertex3f(990 / xx, 1 - (62 / yy), 0.0);
	glVertex3f(1018 / xx, 1 - (110 / yy), 0.0);
	glVertex3f(990 / xx, 1 - (170 / yy), 0.0);
	glVertex3f(1006 / xx, 1 - (85 / yy), 0.0);
	glVertex3f(1017 / xx, 1 - (87 / yy), 0.0);
	glVertex3f(1018 / xx, 1 - (110 / yy), 0.0);
	glVertex3f(1006 / xx, 1 - (135 / yy), 0.0);
	glVertex3f(1026 / xx, 1 - (122 / yy), 0.0);
	glVertex3f(1005 / xx, 1 - (170 / yy), 0.0);
	glVertex3f(1006 / xx, 1 - (135 / yy), 0.0);
	glVertex3f(990 / xx, 1 - (168 / yy), 0.0);
	glVertex3f(1006 / xx, 1 - (201 / yy), 0.0);
	glVertex3f(990 / xx, 1 - (168 / yy), 0.0);
	glVertex3f(1006 / xx, 1 - (201 / yy), 0.0);
	glVertex3f(990 / xx, 1 - (204 / yy), 0.0);

	glVertex3f(967 / xx, 1 - (294 / yy), 0.0);
	glVertex3f(958 / xx, 1 - (275 / yy), 0.0);
	glVertex3f(984 / xx, 1 - (230 / yy), 0.0);

	glVertex3f(958 / xx, 1 - (275 / yy), 0.0);
	glVertex3f(984 / xx, 1 - (230 / yy), 0.0);
	glVertex3f(961 / xx, 1 - (246 / yy), 0.0);

	glVertex3f(984 / xx, 1 - (230 / yy), 0.0);
	glVertex3f(961 / xx, 1 - (246 / yy), 0.0);
	glVertex3f(980 / xx, 1 - (208 / yy), 0.0);

	glVertex3f(984 / xx, 1 - (230 / yy), 0.0);
	glVertex3f(980 / xx, 1 - (208 / yy), 0.0);
	glVertex3f(1002 / xx, 1 - (217 / yy), 0.0);

	glVertex3f(980 / xx, 1 - (208 / yy), 0.0);
	glVertex3f(1002 / xx, 1 - (217 / yy), 0.0);
	glVertex3f(1103 / xx, 1 - (151 / yy), 0.0);

	glVertex3f(1002 / xx, 1 - (217 / yy), 0.0);
	glVertex3f(1103 / xx, 1 - (151 / yy), 0.0);
	glVertex3f(1096 / xx, 1 - (174 / yy), 0.0);

	glVertex3f(1103 / xx, 1 - (151 / yy), 0.0);
	glVertex3f(1096 / xx, 1 - (174 / yy), 0.0);
	glVertex3f(1116 / xx, 1 - (163 / yy), 0.0);

	glVertex3f(1096 / xx, 1 - (174 / yy), 0.0);
	glVertex3f(1116 / xx, 1 - (163 / yy), 0.0);
	glVertex3f(1124 / xx, 1 - (184 / yy), 0.0);

	glVertex3f(1124 / xx, 1 - (184 / yy), 0.0);
	glVertex3f(1096 / xx, 1 - (174 / yy), 0.0);
	glVertex3f(1116 / xx, 1 - (198 / yy), 0.0);

	glVertex3f(1116 / xx, 1 - (198 / yy), 0.0);
	glVertex3f(1096 / xx, 1 - (174 / yy), 0.0);
	glVertex3f(1101 / xx, 1 - (197 / yy), 0.0);

	glVertex3f(1101 / xx, 1 - (197 / yy), 0.0);
	glVertex3f(1096 / xx, 1 - (174 / yy), 0.0);
	glVertex3f(1082 / xx, 1 - (208 / yy), 0.0);

	glVertex3f(1047 / xx, 1 - (50 / yy), 0.0);
	glVertex3f(1056 / xx, 1 - (64 / yy), 0.0);
	glVertex3f(1036 / xx, 1 - (90 / yy), 0.0);
	glVertex3f(1056 / xx, 1 - (64 / yy), 0.0);
	glVertex3f(1036 / xx, 1 - (90 / yy), 0.0);
	glVertex3f(1050 / xx, 1 - (82 / yy), 0.0);

	glVertex3f(1036 / xx, 1 - (90 / yy), 0.0);
	glVertex3f(1022 / xx, 1 - (87 / yy), 0.0);
	glVertex3f(1020 / xx, 1 - (97 / yy), 0.0);

	glVertex3f(1036 / xx, 1 - (90 / yy), 0.0);
	glVertex3f(1049 / xx, 1 - (82 / yy), 0.0);
	glVertex3f(1050 / xx, 1 - (92 / yy), 0.0);

	glVertex3f(1036 / xx, 1 - (90 / yy), 0.0);
	glVertex3f(1050 / xx, 1 - (92 / yy), 0.0);
	glVertex3f(1020 / xx, 1 - (97 / yy), 0.0);

	glVertex3f(1027 / xx, 1 - (110 / yy), 0.0);
	glVertex3f(1050 / xx, 1 - (92 / yy), 0.0);
	glVertex3f(1020 / xx, 1 - (100 / yy), 0.0);

	glVertex3f(1027 / xx, 1 - (108 / yy), 0.0);
	glVertex3f(1050 / xx, 1 - (89 / yy), 0.0);
	glVertex3f(1040 / xx, 1 - (109 / yy), 0.0);

	glVertex3f(1040 / xx, 1 - (109 / yy), 0.0);
	glVertex3f(1030 / xx, 1 - (110 / yy), 0.0);
	glVertex3f(1022 / xx, 1 - (142 / yy), 0.0);

	glVertex3f(1040 / xx, 1 - (109 / yy), 0.0);
	glVertex3f(1050 / xx, 1 - (90 / yy), 0.0);
	glVertex3f(1037 / xx, 1 - (140 / yy), 0.0);

	glVertex3f(1037 / xx, 1 - (140 / yy), 0.0);
	glVertex3f(1029 / xx, 1 - (133 / yy), 0.0);
	glVertex3f(1023 / xx, 1 - (145 / yy), 0.0);

	glVertex3f(1037 / xx, 1 - (141 / yy), 0.0);
	glVertex3f(1023 / xx, 1 - (145 / yy), 0.0);
	glVertex3f(1030 / xx, 1 - (163 / yy), 0.0);

	glVertex3f(1025 / xx, 1 - (161 / yy), 0.0);
	glVertex3f(1022 / xx, 1 - (183 / yy), 0.0);
	glVertex3f(1047 / xx, 1 - (170 / yy), 0.0);


	glVertex3f(1047 / xx, 1 - (115 / yy), 0.0);
	glVertex3f(1050 / xx, 1 - (118 / yy), 0.0);
	glVertex3f(1038 / xx, 1 - (141 / yy), 0.0);

	glVertex3f(1038 / xx, 1 - (141 / yy), 0.0);
	glVertex3f(1050 / xx, 1 - (118 / yy), 0.0);
	glVertex3f(1046 / xx, 1 - (149 / yy), 0.0);

	glVertex3f(1039 / xx, 1 - (141 / yy), 0.0);
	glVertex3f(1031 / xx, 1 - (166 / yy), 0.0);
	glVertex3f(1050 / xx, 1 - (155 / yy), 0.0);

	glVertex3f(1031 / xx, 1 - (166 / yy), 0.0);
	glVertex3f(1050 / xx, 1 - (155 / yy), 0.0);
	glVertex3f(1048 / xx, 1 - (171 / yy), 0.0);

	glVertex3f(1091 / xx, 1 - (48 / yy), 0.0);
	glVertex3f(1066 / xx, 1 - (77 / yy), 0.0);
	glVertex3f(1085 / xx, 1 - (102 / yy), 0.0);

	glVertex3f(1066 / xx, 1 - (77 / yy), 0.0);
	glVertex3f(1058 / xx, 1 - (72 / yy), 0.0);
	glVertex3f(1057 / xx, 1 - (84 / yy), 0.0);

	glVertex3f(1066 / xx, 1 - (92 / yy), 0.0);
	glVertex3f(1066 / xx, 1 - (77 / yy), 0.0);
	glVertex3f(1057 / xx, 1 - (84 / yy), 0.0);

	glVertex3f(1066 / xx, 1 - (92 / yy), 0.0);
	glVertex3f(1066 / xx, 1 - (77 / yy), 0.0);
	glVertex3f(1078 / xx, 1 - (90 / yy), 0.0);

	glVertex3f(1078 / xx, 1 - (90 / yy), 0.0);
	glVertex3f(1086 / xx, 1 - (103 / yy), 0.0);
	glVertex3f(1080 / xx, 1 - (165 / yy), 0.0);

	glVertex3f(1060 / xx, 1 - (108 / yy), 0.0);
	glVertex3f(1081 / xx, 1 - (98 / yy), 0.0);
	glVertex3f(1053 / xx, 1 - (147 / yy), 0.0);

	glVertex3f(1053 / xx, 1 - (147 / yy), 0.0);
	glVertex3f(1081 / xx, 1 - (98 / yy), 0.0);
	glVertex3f(1078 / xx, 1 - (164 / yy), 0.0);

	glVertex3f(1061 / xx, 1 - (175 / yy), 0.0);
	glVertex3f(1063 / xx, 1 - (157 / yy), 0.0);
	glVertex3f(1078 / xx, 1 - (164 / yy), 0.0);


	glVertex3f(1060 / xx, 1 - (193 / yy), 0.0);
	glVertex3f(1031 / xx, 1 - (226 / yy), 0.0);
	glVertex3f(1065 / xx, 1 - (212 / yy), 0.0);

	glVertex3f(1031 / xx, 1 - (226 / yy), 0.0);
	glVertex3f(1065 / xx, 1 - (212 / yy), 0.0);
	glVertex3f(1063 / xx, 1 - (231 / yy), 0.0);

	glVertex3f(1031 / xx, 1 - (226 / yy), 0.0);
	glVertex3f(1051 / xx, 1 - (232 / yy), 0.0);
	glVertex3f(1040 / xx, 1 - (238 / yy), 0.0);

	glVertex3f(1063 / xx, 1 - (231 / yy), 0.0);
	glVertex3f(1051 / xx, 1 - (232 / yy), 0.0);
	glVertex3f(1041 / xx, 1 - (260 / yy), 0.0);

	glVertex3f(1041 / xx, 1 - (260 / yy), 0.0);
	glVertex3f(1063 / xx, 1 - (231 / yy), 0.0);
	glVertex3f(1068 / xx, 1 - (251 / yy), 0.0);

	glVertex3f(1019 / xx, 1 - (273 / yy), 0.0);
	glVertex3f(1008 / xx, 1 - (265 / yy), 0.0);
	glVertex3f(1008 / xx, 1 - (284 / yy), 0.0);

	glVertex3f(1019 / xx, 1 - (273 / yy), 0.0);
	glVertex3f(1008 / xx, 1 - (284 / yy), 0.0);
	glVertex3f(1023 / xx, 1 - (287 / yy), 0.0);

	glVertex3f(1018 / xx, 1 - (271 / yy), 0.0);
	glVertex3f(1019 / xx, 1 - (280 / yy), 0.0);
	glVertex3f(1049 / xx, 1 - (269 / yy), 0.0);

	glVertex3f(1018 / xx, 1 - (271 / yy), 0.0);
	glVertex3f(1049 / xx, 1 - (269 / yy), 0.0);
	glVertex3f(1067 / xx, 1 - (248 / yy), 0.0);

	glVertex3f(1067 / xx, 1 - (248 / yy), 0.0);
	glVertex3f(1049 / xx, 1 - (269 / yy), 0.0);
	glVertex3f(1085 / xx, 1 - (263 / yy), 0.0);

	glVertex3f(1085 / xx, 1 - (263 / yy), 0.0);
	glVertex3f(1069 / xx, 1 - (248 / yy), 0.0);
	glVertex3f(1098 / xx, 1 - (250 / yy), 0.0);

	glVertex3f(1085 / xx, 1 - (263 / yy), 0.0);
	glVertex3f(1098 / xx, 1 - (250 / yy), 0.0);
	glVertex3f(1100 / xx, 1 - (274 / yy), 0.0);

	glVertex3f(1051 / xx, 1 - (270 / yy), 0.0);
	glVertex3f(1070 / xx, 1 - (269 / yy), 0.0);
	glVertex3f(1065 / xx, 1 - (369 / yy), 0.0);

	glVertex3f(1051 / xx, 1 - (270 / yy), 0.0);
	glVertex3f(1065 / xx, 1 - (369 / yy), 0.0);
	glVertex3f(1052 / xx, 1 - (337 / yy), 0.0);

	glVertex3f(1052 / xx, 1 - (337 / yy), 0.0);
	glVertex3f(1065 / xx, 1 - (369 / yy), 0.0);
	glVertex3f(1035 / xx, 1 - (414 / yy), 0.0);

	glVertex3f(1052 / xx, 1 - (337 / yy), 0.0);
	glVertex3f(1035 / xx, 1 - (414 / yy), 0.0);
	glVertex3f(1019 / xx, 1 - (393 / yy), 0.0);

	glVertex3f(1035 / xx, 1 - (414 / yy), 0.0);
	glVertex3f(1019 / xx, 1 - (393 / yy), 0.0);
	glVertex3f(991 / xx, 1 - (419 / yy), 0.0);

	glVertex3f(991 / xx, 1 - (419 / yy), 0.0);
	glVertex3f(1035 / xx, 1 - (414 / yy), 0.0);
	glVertex3f(990 / xx, 1 - (439 / yy), 0.0);

	glVertex3f(991 / xx, 1 - (419 / yy), 0.0);
	glVertex3f(990 / xx, 1 - (439 / yy), 0.0);
	glVertex3f(956 / xx, 1 - (413 / yy), 0.0);


	//學

	glEnd();

	glBegin(GL_POLYGON);

	glVertex3f(1246 / xx, 1 - (1 / yy), 0.0);
	glVertex3f(1316 / xx, 1 - (24 / yy), 0.0);
	glVertex3f(1363 / xx, 1 - (23 / yy), 0.0);
	glVertex3f(1408 / xx, 1 - (24 / yy), 0.0);
	glVertex3f(1468 / xx, 1 - (3 / yy), 0.0);
	glVertex3f(1457 / xx, 1 - (49 / yy), 0.0);
	glVertex3f(1451 / xx, 1 - (81 / yy), 0.0);
	glVertex3f(1448 / xx, 1 - (133 / yy), 0.0);
	glVertex3f(1448 / xx, 1 - (201 / yy), 0.0);
	glVertex3f(1450 / xx, 1 - (216 / yy), 0.0);
	glVertex3f(1463 / xx, 1 - (319 / yy), 0.0);
	glVertex3f(1484 / xx, 1 - (393 / yy), 0.0);
	glVertex3f(1440 / xx, 1 - (364 / yy), 0.0);
	glVertex3f(1390 / xx, 1 - (336 / yy), 0.0);
	glVertex3f(1318 / xx, 1 - (336 / yy), 0.0);
	glVertex3f(1277 / xx, 1 - (350 / yy), 0.0);
	glVertex3f(1232 / xx, 1 - (385 / yy), 0.0);
	glVertex3f(1255 / xx, 1 - (228 / yy), 0.0);
	glVertex3f(1285 / xx, 1 - (148 / yy), 0.0);
	glVertex3f(1261 / xx, 1 - (53 / yy), 0.0);

	glEnd();
	glBegin(GL_TRIANGLES);

	glVertex3f(1230 / xx, 1 - (0 / yy), 0.0);
	glVertex3f(1314 / xx, 1 - (0 / yy), 0.0);
	glVertex3f(1265 / xx, 1 - (190 / yy), 0.0);


	glEnd();
	glColor3f(1.0, 0.0, 0.0);

	glBegin(GL_POLYGON);

	glVertex3f(1329 / xx, 1 - (114 / yy), 0.0);
	glVertex3f(1356 / xx, 1 - (102 / yy), 0.0);
	glVertex3f(1384 / xx, 1 - (114 / yy), 0.0);
	glVertex3f(1403 / xx, 1 - (138 / yy), 0.0);
	glVertex3f(1410 / xx, 1 - (170 / yy), 0.0);
	glVertex3f(1410 / xx, 1 - (201 / yy), 0.0);
	glVertex3f(1400 / xx, 1 - (232 / yy), 0.0);
	glVertex3f(1390 / xx, 1 - (250 / yy), 0.0);
	glVertex3f(1359 / xx, 1 - (269 / yy), 0.0);
	glVertex3f(1330 / xx, 1 - (257 / yy), 0.0);
	glVertex3f(1312 / xx, 1 - (219 / yy), 0.0);
	glVertex3f(1307 / xx, 1 - (177 / yy), 0.0);
	glVertex3f(1314 / xx, 1 - (144 / yy), 0.0);

	glEnd();

	glColor3f(1.0, 1.0, 1.0);

	glBegin(GL_POLYGON);

	glVertex3f(1235 / xx, 1 - (29 / yy), 0.0);
	glVertex3f(1291 / xx, 1 - (49 / yy), 0.0);
	glVertex3f(1327 / xx, 1 - (83 / yy), 0.0);
	glVertex3f(1357 / xx, 1 - (127 / yy), 0.0);
	glVertex3f(1402 / xx, 1 - (225 / yy), 0.0);
	glVertex3f(1422 / xx, 1 - (307 / yy), 0.0);
	glVertex3f(1422 / xx, 1 - (331 / yy), 0.0);
	glVertex3f(1410 / xx, 1 - (288 / yy), 0.0);
	glVertex3f(1387 / xx, 1 - (220 / yy), 0.0);
	glVertex3f(1345 / xx, 1 - (133 / yy), 0.0);
	glVertex3f(1301 / xx, 1 - (83 / yy), 0.0);
	glVertex3f(1240 / xx, 1 - (47 / yy), 0.0);

	glEnd();
	
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	
	

}
void drawRobotRight(){

	if (rightAttack == 1){
		rightSwing = (rightSwing + 10) % 360;
		if (rightSwing == 350){
			rightSwing = 0;
			rightAttack = 0;
		}
		glPushMatrix();
		glRotatef((GLfloat)-rightSwing, 1.0, 0.0, 0.0);
		glPushMatrix();

		glTranslatef(1.6, -1.7, -3.0);
		glPushMatrix();

		//再推
		glTranslatef(0.0, 0.0, -1.0);
		//轉
		glRotatef(45, 1.0, 0.0, 0.0);
		//把手臂推出去
		glTranslatef(0.0, 0.0, -1.0);


		//第四根
		glPushMatrix();
		glTranslatef(-0.2, -0.3, -1.35);

		//指節
		glPushMatrix();
		glTranslatef(0.0, 0.0, -0.4);
		glRotatef(-30, 1.0, 0.0, 0.0);
		glPushMatrix();
		glScalef(0.05, 0.1, 0.25);
		glutWireCube(1.0);
		glPopMatrix();
		glPopMatrix();

		glPushMatrix();
		glScalef(0.05, 0.1, 0.5);
		glutWireCube(1.0);
		glPopMatrix();

		glPopMatrix();
		//第三根
		glPushMatrix();
		glTranslatef(0.1, -0.3, -1.35);

		//指節

		glPushMatrix();
		glTranslatef(0.0, 0.0, -0.4);
		glRotatef(-30, 1.0, 0.0, 0.0);
		glPushMatrix();
		glScalef(0.05, 0.1, 0.25);
		glutWireCube(1.0);
		glPopMatrix();
		glPopMatrix();

		glPushMatrix();
		glScalef(0.05, 0.1, 0.5);
		glutWireCube(1.0);
		glPopMatrix();

		glPopMatrix();
		//第二根
		glPushMatrix();
		glTranslatef(-0.2, 0.0, -1.35);

		//指節
		glPushMatrix();
		glTranslatef(0.0, 0.0, -0.4);
		glRotatef(-30, 1.0, 0.0, 0.0);
		glPushMatrix();
		glScalef(0.05, 0.1, 0.25);
		glutWireCube(1.0);
		glPopMatrix();
		glPopMatrix();

		glPushMatrix();
		glScalef(0.05, 0.1, 0.5);
		glutWireCube(1.0);
		glPopMatrix();

		glPopMatrix();
		//第一根手指
		glPushMatrix();
		glTranslatef(0.1, 0.0, -1.35);

		//指節
		glPushMatrix();
		glTranslatef(0.0, 0.0, -0.4);
		glRotatef(-30, 1.0, 0.0, 0.0);
		glPushMatrix();
		glScalef(0.05, 0.1, 0.25);
		glutWireCube(1.0);
		glPopMatrix();
		glPopMatrix();

		glPushMatrix();
		glScalef(0.05, 0.1, 0.5);
		glutWireCube(1.0);
		glPopMatrix();

		glPopMatrix();



		glPushMatrix();
		//下手臂
		glScalef(0.4, 0.4, 2.0);
		glutWireCube(1.0);
		glPopMatrix();
		glPopMatrix();

		glPushMatrix();

		glPushMatrix();
		//上手臂
		glScalef(0.4, 0.4, 2.0);
		glutWireCube(1.0);
		glPopMatrix();
		glPopMatrix();

		glPopMatrix();
		glPopMatrix();
	}
	else{
		glPushMatrix();

		glTranslatef(1.6, -1.7, -3.0);





		glPushMatrix();


		//再推
		glTranslatef(0.0, 0.0, -1.0);
		//轉
		glRotatef(45, 1.0, 0.0, 0.0);
		//把手臂推出去
		glTranslatef(0.0, 0.0, -1.0);


		//第四根
		glPushMatrix();
		glTranslatef(-0.2, -0.3, -1.35);

		//指節
		glPushMatrix();
		glTranslatef(0.0, 0.0, -0.4);
		glRotatef(-30, 1.0, 0.0, 0.0);
		glPushMatrix();
		glScalef(0.05, 0.1, 0.25);
		glutWireCube(1.0);
		glPopMatrix();
		glPopMatrix();

		glPushMatrix();
		glScalef(0.05, 0.1, 0.5);
		glutWireCube(1.0);
		glPopMatrix();

		glPopMatrix();
		//第三根
		glPushMatrix();
		GLfloat light_position3[] = { 1.0, 1.0, 1.0, 0.0 };
		GLfloat white_light3[] = { 0.0, 0.5, 1.0, 1.0 };
		GLfloat lmodel_ambient3[] = { 0.1, 0.1, 0.1, 1.0 };
		glLightfv(GL_LIGHT0, GL_POSITION, light_position3);
		glLightfv(GL_LIGHT0, GL_DIFFUSE, white_light3);
		glLightfv(GL_LIGHT0, GL_SPECULAR, white_light3);
		glLightModelfv(GL_LIGHT_MODEL_AMBIENT, lmodel_ambient3);
		glEnable(GL_LIGHTING);
		glEnable(GL_LIGHT0);
		glTranslatef(0.1, -0.3, -1.35);

		//指節

		glPushMatrix();
		glTranslatef(0.0, 0.0, -0.4);
		glRotatef(-60, 1.0, 0.0, 0.0);
		glPushMatrix();
		glScalef(0.05, 0.1, 0.25);

		glutWireCube(1.0);

		glDisable(GL_LIGHT0);
		glDisable(GL_LIGHTING);
		glPopMatrix();
		glPopMatrix();

		glPushMatrix();
		glScalef(0.05, 0.1, 0.5);
		glutWireCube(1.0);
		glPopMatrix();

		glPopMatrix();
		//第二根
		glPushMatrix();
		GLfloat light_position2[] = { 1.0, 1.0, 1.0, 0.0 };
		GLfloat white_light2[] = { 0.0, 1.0, 1.0, 1.0 };
		GLfloat lmodel_ambient2[] = { 0.1, 0.1, 0.1, 1.0 };
		glLightfv(GL_LIGHT0, GL_POSITION, light_position2);
		glLightfv(GL_LIGHT0, GL_DIFFUSE, white_light2);
		glLightfv(GL_LIGHT0, GL_SPECULAR, white_light2);
		glLightModelfv(GL_LIGHT_MODEL_AMBIENT, lmodel_ambient2);
		glEnable(GL_LIGHTING);
		glEnable(GL_LIGHT0);
		glTranslatef(-0.2, 0.0, -1.35);

		//指節
		glPushMatrix();
		glTranslatef(0.0, 0.0, -0.4);
		glRotatef(-30, 1.0, 0.0, 0.0);
		glPushMatrix();
		glScalef(0.05, 0.1, 0.25);
		glutWireCube(1.0);
		glPopMatrix();
		glPopMatrix();

		glPushMatrix();
		glScalef(0.05, 0.1, 0.5);
		glutWireCube(1.0);
		glDisable(GL_LIGHT0);
		glDisable(GL_LIGHTING);
		glPopMatrix();

		glPopMatrix();
		//第一根手指
		glPushMatrix();
		GLfloat light_position[] = { 1.0, 1.0, 1.0, 0.0 };
		GLfloat white_light[] = { 1.0, 1.0, 1.0, 1.0 };
		GLfloat lmodel_ambient[] = { 0.1, 0.1, 0.1, 1.0 };
		glLightfv(GL_LIGHT0, GL_POSITION, light_position);
		glLightfv(GL_LIGHT0, GL_DIFFUSE, white_light);
		glLightfv(GL_LIGHT0, GL_SPECULAR, white_light);
		glLightModelfv(GL_LIGHT_MODEL_AMBIENT, lmodel_ambient);
		glEnable(GL_LIGHTING);
		glEnable(GL_LIGHT0);

		glTranslatef(0.1, 0.0, -1.35);

		//指節
		glPushMatrix();
		glTranslatef(0.0, 0.0, -0.4);
		glRotatef(-30, 1.0, 0.0, 0.0);
		glPushMatrix();
		glScalef(0.05, 0.1, 0.25);
		glutWireCube(1.0);
		glPopMatrix();
		glPopMatrix();

		glPushMatrix();
		glScalef(0.05, 0.1, 0.5);
		glutWireCube(1.0);
		glDisable(GL_LIGHT0);
		glDisable(GL_LIGHTING);
		glPopMatrix();

		glPopMatrix();



		glPushMatrix();
		//下手臂
		glScalef(0.4, 0.4, 2.0);
		glutWireCube(1.0);
		glPopMatrix();
		glPopMatrix();

		glPushMatrix();

		glPushMatrix();
		//上手臂
		glScalef(0.4, 0.4, 2.0);
		glutWireCube(1.0);
		glPopMatrix();
		glPopMatrix();

		glPopMatrix();
	}



}
void drawRobotLeft(){
	//畫左手臂
	glPushMatrix();
	glTranslatef(-2.0, 0.7, -5.3);
	if (leftAttack == 1){

		glTranslatef(0.0, 0.0, planetShoot);
		planetShoot -= 0.05;
		if (planetShoot < -15){
			leftAttack = 0;
			glTranslatef(0.0, 0.0, -planetShoot);
			planetShoot = 0;
		}
		//畫星球
		year = (year + 1) % 360;
		day = (day + 2) % 360;
		glPushMatrix();
		glTranslatef(0.0, 0.0, -2.0);
		glPushMatrix();

		glRotatef((GLfloat)day, 0.0, 1.0, 0.0);
		glutWireSphere(0.25, 20, 16);   //draw sun
		glRotatef((GLfloat)year, 0.0, 1.0, 0.0);
		glTranslatef(1.0, 0.0, 0.0);
		glRotatef((GLfloat)day, 0.0, 1.0, 0.0);
		glutWireSphere(0.1, 10, 8);//draw smaller planet 

		glTranslatef(0.5, 0.0, 0.0);
		glRotatef((GLfloat)year, 0.0, 1.0, 0.0);
		glutWireSphere(0.05, 10, 8);//畫衛星

		glPopMatrix();
		glPopMatrix();
	}
	else{
		
		//畫星球
		year = (year + 1) % 360;
		day = (day + 2) % 360;
		glPushMatrix();
		glTranslatef(0.0, 0.0, -2.0);
		glPushMatrix();

		glRotatef((GLfloat)day, 0.0, 1.0, 0.0);
		glutWireSphere(0.25, 20, 16);   //draw sun
		glRotatef((GLfloat)year, 0.0, 1.0, 0.0);
		glTranslatef(1.0, 0.0, 0.0);
		glRotatef((GLfloat)day, 0.0, 1.0, 0.0);
		glutWireSphere(0.1, 10, 8);//draw smaller planet 

		glTranslatef(0.5, 0.0, 0.0);
		glRotatef((GLfloat)year, 0.0, 1.0, 0.0);
		glutWireSphere(0.05, 10, 8);//畫衛星

		glPopMatrix();
		glPopMatrix();
	}
	glPopMatrix();
	glPushMatrix();

	glTranslatef(-1.6, -1.7, -3.0);





	glPushMatrix();


	//再推
	glTranslatef(0.0, 0.0, -1.0);
	//轉
	glRotatef(45, 1.0, 0.0, 0.0);
	//把手臂推出去
	glTranslatef(0.0, 0.0, -1.0);



	//第四根
	glPushMatrix();
	glTranslatef(-0.2, -0.3, -1.35);

	//指節
	glPushMatrix();
	glTranslatef(0.0, 0.0, -0.4);
	glRotatef(30, 1.0, 0.0, 0.0);
	glPushMatrix();
	glScalef(0.05, 0.1, 0.25);
	glutWireCube(1.0);
	glPopMatrix();
	glPopMatrix();

	glPushMatrix();
	glScalef(0.05, 0.1, 0.5);
	glutWireCube(1.0);
	glPopMatrix();

	glPopMatrix();
	//第三根
	glPushMatrix();
	GLfloat light_position3[] = { 1.0, 1.0, 1.0, 0.0 };
	GLfloat white_light3[] = { 0.0, 0.5, 1.0, 1.0 };
	GLfloat lmodel_ambient3[] = { 0.1, 0.1, 0.1, 1.0 };
	glLightfv(GL_LIGHT0, GL_POSITION, light_position3);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, white_light3);
	glLightfv(GL_LIGHT0, GL_SPECULAR, white_light3);
	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, lmodel_ambient3);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glTranslatef(0.1, -0.3, -1.35);

	//指節

	glPushMatrix();
	glTranslatef(0.0, 0.0, -0.4);
	glRotatef(30, 1.0, 0.0, 0.0);
	glPushMatrix();
	glScalef(0.05, 0.1, 0.25);

	glutWireCube(1.0);
	
	glDisable(GL_LIGHT0);
	glDisable(GL_LIGHTING);
	glPopMatrix();
	glPopMatrix();

	glPushMatrix();
	glScalef(0.05, 0.1, 0.5);
	glutWireCube(1.0);
	glPopMatrix();

	glPopMatrix();
	//第二根
	glPushMatrix();
	GLfloat light_position2[] = { 1.0, 1.0, 1.0, 0.0 };
	GLfloat white_light2[] = { 0.0, 1.0, 1.0, 1.0 };
	GLfloat lmodel_ambient2[] = { 0.1, 0.1, 0.1, 1.0 };
	glLightfv(GL_LIGHT0, GL_POSITION, light_position2);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, white_light2);
	glLightfv(GL_LIGHT0, GL_SPECULAR, white_light2);
	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, lmodel_ambient2);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glTranslatef(-0.2, 0.0, -1.35);

	//指節
	glPushMatrix();
	glTranslatef(0.0, 0.0, -0.4);
	glRotatef(30, 1.0, 0.0, 0.0);
	glPushMatrix();
	glScalef(0.05, 0.1, 0.25);
	glutWireCube(1.0);
	glPopMatrix();
	glPopMatrix();

	glPushMatrix();
	glScalef(0.05, 0.1, 0.5);
	glutWireCube(1.0);
	glDisable(GL_LIGHT0);
	glDisable(GL_LIGHTING);
	glPopMatrix();

	glPopMatrix();
	//第一根手指
	glPushMatrix();
	GLfloat light_position[] = { 1.0, 1.0, 1.0, 0.0 };
	GLfloat white_light[] = { 1.0, 1.0, 1.0, 1.0 };
	GLfloat lmodel_ambient[] = { 0.1, 0.1, 0.1, 1.0 };
	glLightfv(GL_LIGHT0, GL_POSITION, light_position);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, white_light);
	glLightfv(GL_LIGHT0, GL_SPECULAR, white_light);
	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, lmodel_ambient);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	
	glTranslatef(0.1, 0.0, -1.35);

	//指節
	glPushMatrix();
	glTranslatef(0.0, 0.0, -0.4);
	glRotatef(30, 1.0, 0.0, 0.0);
	glPushMatrix();
	glScalef(0.05, 0.1, 0.25);
	glutWireCube(1.0);
	glPopMatrix();
	glPopMatrix();

	glPushMatrix();
	glScalef(0.05, 0.1, 0.5);
	glutWireCube(1.0);
	glDisable(GL_LIGHT0);
	glDisable(GL_LIGHTING);
	glPopMatrix();
	
	glPopMatrix();
	


	glPushMatrix();
	//下手臂
	glScalef(0.4, 0.4, 2.0);
	glutWireCube(1.0);
	glPopMatrix();
	glPopMatrix();

	glPushMatrix();

	glPushMatrix();
	//上手臂
	glScalef(0.4, 0.4, 2.0);
	glutWireCube(1.0);
	glPopMatrix();
	glPopMatrix();

	glPopMatrix();

}

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	/*
	glEnable(GL_CULL_FACE);

	if (flag == 1){
	glCullFace(GL_BACK);
	}
	else if(flag ==0){
	glCullFace(GL_FRONT_AND_BACK);
	}
	glDisable(GL_CULL_FACE);
	*/

	
	
	
	//畫Logo
	drawLogo();
	glPushMatrix();
	glLoadIdentity();

	
	//畫左手	
	drawRobotLeft();
	
	//畫右手
	drawRobotRight();
	glPopMatrix();


	glutSwapBuffers();

	glFlush();
}

void timer(int u){

	glutTimerFunc(10, timer, 0);

	if (fjump == 0){
		fjump++;

		jump = 75;
	}
	if (jump < 25){

		glTranslatef(0.0, -0.02, 0.0);

		jump++;
	}
	else if (jump == 25){
		jump = 100;

	}
	else if (jump >75){
		jump--;

		glTranslatef(0.0, 0.02, 0.0);

	}
	else if (jump == 75){
		jump = 50;
		spaceIsClicked = 0;
	}


	glutPostRedisplay();

}

void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glShadeModel(GL_SMOOTH);

	setupinitPointers();
}
void spinDisplay(void)
{
	spin = spin + 2.0;
	if (spin > 360.0)
		spin = spin - 360.0;
	glutPostRedisplay();
}
void reshape(int w, int h){
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(60, 1.0, 0.0, 1000.0);
	glMatrixMode(GL_MODELVIEW);
}

void keyboard(unsigned char key, int x, int y)
{
	switch (key) {

	case 119:
		//w
		glTranslatef(0.0, 0.0, 0.1);
		glutPostRedisplay();
		break;
	case 97:
		//a
		glTranslatef(0.1, 0.0, 0.0);
		glutPostRedisplay();
		break;
	case 115:
		//s
		glTranslatef(0.0, 0.0, -0.1);
		glutPostRedisplay();
		break;
	case 100:
		//d
		glTranslatef(-0.1, 0.0, 0.0);
		glutPostRedisplay();
		break;
	case 32:
		//space
		if (spaceIsClicked == 0){
			jump = 0;
			spaceIsClicked = 1;
			glutPostRedisplay();
		}
		break;
	case 122:
		//z
		if (leftAttack == 0){
			leftAttack = 1;
		}
		glutPostRedisplay();
		break;
	case 120:
		//x
		if (rightAttack == 0){
			rightAttack = 1;
		}
		glutPostRedisplay();
		break;
	case 114:
		//r
		drawLogo();
		spinMode = 'r';
		glutPostRedisplay();
		break;
	}

}

void mouse(int button, int state, int x, int y)
{
	switch (button) {
	case GLUT_RIGHT_BUTTON:
		if (state == GLUT_DOWN) {
			spinMode = 'x';
			glutIdleFunc(spinDisplay);
		}
		break;
	case GLUT_LEFT_BUTTON:
		if (state == GLUT_DOWN) {
			spinMode = 'z';
			glutIdleFunc(spinDisplay);
		}
		break;
	case GLUT_MIDDLE_BUTTON:
		if (state == GLUT_DOWN) {
			spinMode = 'y';
			glutIdleFunc(spinDisplay);
		}

	default:
		break;
	}
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(1500, 750);
	glutInitWindowPosition(200, 0);
	glutCreateWindow("hello");
	init();
	glewInit();

	glutReshapeFunc(reshape);
	glutDisplayFunc(display);
	glutTimerFunc(1, timer, 0);
	glutKeyboardFunc(keyboard);
	glutMouseFunc(mouse);

	glutMainLoop();
	return 0;
}
