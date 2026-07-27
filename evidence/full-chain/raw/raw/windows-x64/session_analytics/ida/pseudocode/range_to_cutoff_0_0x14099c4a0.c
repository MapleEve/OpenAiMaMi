// win 1.2.3 | = mac codexmate_lib::core::session_analytics::range_to_cutoff | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall range_to_cutoff_0(__int64 a1, __int64 *a2, int a3, char a4)
{
  __int64 v8; // rax
  __int64 v10; // [rsp+34h] [rbp-3Ch] BYREF
  int v11; // [rsp+3Ch] [rbp-34h]
  __int128 v12; // [rsp+40h] [rbp-30h] BYREF
  __int64 v13; // [rsp+50h] [rbp-20h]
  __int64 v14; // [rsp+58h] [rbp-18h] BYREF
  int v15; // [rsp+60h] [rbp-10h]
  char v16; // [rsp+67h] [rbp-9h] BYREF
  __int64 v17; // [rsp+68h] [rbp-8h]

  v17 = -2; /*0x14099c4af*/
  nullsub_1(a1); /*0x14099c4c3*/
  v8 = sub_140001650(38, 1); /*0x14099c4d2*/
  if ( !v8 ) /*0x14099c4da*/
    sub_1416C2D4B(1, 38); /*0x14099c5b1*/
  *(_QWORD *)&v12 = 38; /*0x14099c4e0*/
  *((_QWORD *)&v12 + 1) = v8; /*0x14099c4e8*/
  v13 = 0; /*0x14099c4ec*/
  v15 = *((_DWORD *)a2 + 2); /*0x14099c4f8*/
  v14 = *a2; /*0x14099c4fe*/
  sub_140FFAD80(&v10, &v14, 0); /*0x14099c50d*/
  if ( !(_DWORD)v10 ) /*0x14099c517*/
    sub_1416C3000(aLocalTimeOutOf, 43, &off_1417A57D8); /*0x14099c574*/
  v15 = v11; /*0x14099c51c*/
  v14 = v10; /*0x14099c523*/
  if ( (unsigned __int8)sub_140988B70((unsigned int)&v12, (unsigned int)&v14, 0, a3, a4) ) /*0x14099c53a*/
    sub_1416C3060( /*0x14099c59f*/
      (unsigned int)aWritingRfc3339,
      52,
      (unsigned int)&v16,
      (unsigned int)&unk_1417A5580,
      (__int64)&off_1417A57F0);
  *(_QWORD *)(a1 + 16) = v13; /*0x14099c548*/
  *(_OWORD *)a1 = v12; /*0x14099c550*/
  return a1; /*0x14099c556*/
}