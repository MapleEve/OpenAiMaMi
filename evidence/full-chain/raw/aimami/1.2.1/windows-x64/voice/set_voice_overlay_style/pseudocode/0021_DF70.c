// win 1.2.1 NEW set_voice_overlay_style 0x14056df70 d=2
__int64 __fastcall sub_14056DF70(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 *v9; // rdx
  int v10; // eax
  __int128 v12; // [rsp+38h] [rbp-30h] BYREF
  __int64 v13; // [rsp+48h] [rbp-20h]

  if ( sub_1405FE300(a2) == 1 ) /*0x14056df8c*/
  {
    *(_QWORD *)(a1 + 8) = v9; /*0x14056df8e*/
    *(_BYTE *)a1 = 1; /*0x14056df92*/
  }
  else
  {
    v10 = *v9; /*0x14056df97*/
    if ( v10 == 3 ) /*0x14056df9d*/
    {
      v12 = *((_OWORD *)v9 + 1); /*0x14056dfd6*/
      v13 = 0; /*0x14056dfdb*/
      sub_14022EA00(a1, &v12); /*0x14056dfec*/
    }
    else if ( v10 == 5 ) /*0x14056dfa2*/
    {
      sub_140311E50(a1, v9 + 8, a3, a4, a5, a6); /*0x14056dfcb*/
    }
    else
    {
      sub_1415ED1C0(&v12, v9); /*0x14056e004*/
      *(_QWORD *)(a1 + 8) = sub_1415ECAA0(&v12, &off_1416C7878, &unk_1416C7888); /*0x14056e01f*/
      *(_BYTE *)a1 = 1; /*0x14056e023*/
    }
  }
  return a1; /*0x14056dff4*/
}