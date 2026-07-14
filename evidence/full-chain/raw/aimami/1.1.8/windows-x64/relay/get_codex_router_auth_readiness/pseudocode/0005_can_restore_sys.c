// router_unlock_auth_can_restore_sys @ 0x14060c310 size=368 proto=__int64 __fastcall(__int64)
__int64 __fastcall router_unlock_auth_can_restore_sys(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // r13
  unsigned int v3; // r15d
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rdi
  _OWORD v9[5]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v10; // [rsp+78h] [rbp-8h]
  _OWORD v11[5]; // [rsp+80h] [rbp+0h] BYREF
  __int64 v12; // [rsp+D0h] [rbp+50h]
  _QWORD v13[7]; // [rsp+D8h] [rbp+58h] BYREF
  char v14; // [rsp+110h] [rbp+90h]
  __int64 v15; // [rsp+118h] [rbp+98h] BYREF
  __int64 v16; // [rsp+120h] [rbp+A0h]
  __int64 v17; // [rsp+128h] [rbp+A8h]
  __int64 v18; // [rsp+138h] [rbp+B8h]
  __int64 v19; // [rsp+140h] [rbp+C0h]

  v19 = -2; /*0x14060c32b*/
  v1 = *(_QWORD *)(a1 + 776); /*0x14060c336*/
  v2 = *(_QWORD *)(a1 + 784); /*0x14060c33d*/
  sub_1406045F0(v13, v1, v2); /*0x14060c34e*/
  v3 = 0; /*0x14060c353*/
  if ( __OFSUB__(0, v13[0]) ) /*0x14060c35a*/
    return v3; /*0x14060c35a*/
  v4 = v13[0]; /*0x14060c360*/
  v5 = v13[1]; /*0x14060c364*/
  v6 = v13[3]; /*0x14060c368*/
  v7 = v13[4]; /*0x14060c36c*/
  if ( v14 == 1 ) /*0x14060c377*/
  {
    sub_1410675B0((unsigned int)&v15, v1, v2, (unsigned int)aRouterUnlockAu, 30); /*0x14060c396*/
    v18 = v16; /*0x14060c3ae*/
    sub_141079C50(v9, v16, v17); /*0x14060c3b5*/
    if ( LODWORD(v9[0]) == 2 ) /*0x14060c3bf*/
    {
      *((_QWORD *)&v11[0] + 1) = *((_QWORD *)&v9[0] + 1); /*0x14060c3c5*/
      *(_QWORD *)&v11[0] = 2; /*0x14060c3c9*/
    }
    else
    {
      v11[0] = v9[0]; /*0x14060c3e8*/
      v12 = v10; /*0x14060c3f0*/
      v11[4] = v9[4]; /*0x14060c3f8*/
      v11[3] = v9[3]; /*0x14060c3fc*/
      v11[2] = v9[2]; /*0x14060c400*/
      v11[1] = v9[1]; /*0x14060c404*/
      LOBYTE(v3) = 1; /*0x14060c408*/
      if ( *(_QWORD *)&v9[0] != 2 ) /*0x14060c410*/
        goto LABEL_8; /*0x14060c410*/
    }
    sub_1400450F0((char *)v11 + 8); /*0x14060c416*/
    v3 = 0; /*0x14060c41c*/
LABEL_8:
    if ( v15 ) /*0x14060c429*/
      sub_140001370(v18, v15, 1); /*0x14060c438*/
    goto LABEL_10; /*0x14060c438*/
  }
  v3 = 0; /*0x14060c3d3*/
LABEL_10:
  if ( v4 ) /*0x14060c440*/
    sub_140001370(v5, v4, 1); /*0x14060c44e*/
  if ( v6 ) /*0x14060c456*/
    sub_140001370(v7, v6, 1); /*0x14060c464*/
  return v3; /*0x14060c46c*/
}