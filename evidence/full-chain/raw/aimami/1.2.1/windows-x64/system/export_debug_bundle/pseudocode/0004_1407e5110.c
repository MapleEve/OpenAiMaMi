// win 1.2.1 NEW export_debug_bundle 0x1407e5110 d=1
__int64 __fastcall sub_1407E5110(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  _QWORD v9[6]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v10[3]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v11[3]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v12[3]; // [rsp+80h] [rbp+0h] BYREF
  __int64 v13; // [rsp+98h] [rbp+18h] BYREF
  __int64 v14; // [rsp+A0h] [rbp+20h]
  __int64 v15; // [rsp+A8h] [rbp+28h]
  __int64 v16; // [rsp+B0h] [rbp+30h]
  __int64 v17; // [rsp+B8h] [rbp+38h]

  v17 = -2; /*0x1407e5125*/
  sub_14083C520(v12, a1, a2); /*0x1407e513f*/
  sub_14083C520(v11, a3, a4); /*0x1407e5152*/
  sub_14083D0A0(v10, a5, a6, 2000); /*0x1407e5173*/
  v9[0] = v12; /*0x1407e5179*/
  v9[1] = sub_1400012F0; /*0x1407e5184*/
  v9[2] = v11; /*0x1407e5188*/
  v9[3] = sub_1400012F0; /*0x1407e518c*/
  v9[4] = v10; /*0x1407e5190*/
  v9[5] = sub_1400012F0; /*0x1407e5194*/
  sub_1413CAFD0(&v13, &unk_1416A53CF, v9); /*0x1407e51a7*/
  result = (unsigned int)dword_141DBB510; /*0x1407e51ad*/
  if ( !dword_141DBB510 ) /*0x1407e51b5*/
  {
    v16 = v14; /*0x1407e51c6*/
    result = sub_140839890(&unk_141DBB4F0, v14, v15); /*0x1407e51ca*/
  }
  if ( v13 ) /*0x1407e51d7*/
    result = sub_140001360(v14, v13, 1); /*0x1407e51e3*/
  if ( v10[0] ) /*0x1407e51ef*/
    result = sub_140001360(v10[1], v10[0], 1); /*0x1407e51fb*/
  if ( v11[0] ) /*0x1407e5207*/
    result = sub_140001360(v11[1], v11[0], 1); /*0x1407e5213*/
  if ( v12[0] ) /*0x1407e521f*/
    return sub_140001360(v12[1], v12[0], 1); /*0x1407e522b*/
  return result; /*0x1407e5231*/
}