// module: codexmate_lib/core/relay/translator
// addr: 0x1409c6750
// name: sub_1409C6750
__int64 __fastcall sub_1409C6750(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, char *a5)
{
  char v9; // r15
  __int128 v10; // xmm1
  char v11; // al
  __int64 v12; // r15
  void *v13; // rax
  __int128 *v15; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v16[48]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v17; // [rsp+60h] [rbp-20h]
  _BYTE v18[48]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v19; // [rsp+98h] [rbp+18h]
  __int128 v20; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v21; // [rsp+B0h] [rbp+30h]
  __int64 v22; // [rsp+C0h] [rbp+40h]

  v22 = -2;
  v9 = *a5;
  switch ( *a5 )
  {
    case 0:
      goto LABEL_9;
    case 1:
    case 2:
      v10 = *((_OWORD *)a5 + 1);
      v20 = *(_OWORD *)a5;
      v21 = v10;
      v11 = v20;
      v12 = *a2 + 1;
      *a2 = v12;
      if ( v11 != 5 )
        break;
      goto LABEL_12;
    case 3:
      sub_14149C500((char *)&v20 + 8, a5 + 8);
      goto LABEL_9;
    case 4:
      sub_1402CE260((char *)&v20 + 8, *((_QWORD *)a5 + 2), *((_QWORD *)a5 + 3));
LABEL_9:
      LOBYTE(v20) = v9;
      ++*a2;
      break;
    case 5:
      if ( *((_QWORD *)a5 + 3) )
      {
        if ( !*((_QWORD *)a5 + 1) )
          sub_1416C3040(&off_141747358);
        sub_1402CCD80((char *)&v20 + 8, *((_QWORD *)a5 + 1), *((_QWORD *)a5 + 2));
      }
      else
      {
        *((_QWORD *)&v20 + 1) = 0;
        *((_QWORD *)&v21 + 1) = 0;
      }
      LOBYTE(v20) = 5;
      v12 = *a2 + 1;
      *a2 = v12;
LABEL_12:
      nullsub_1(a1);
      v13 = (void *)sub_140001650(15, 1);
      if ( !v13 )
        sub_1416C2D4B(1, 15);
      qmemcpy(v13, "sequence_number", 15);
      *(_QWORD *)v16 = 15;
      *(_QWORD *)&v16[8] = v13;
      *(_QWORD *)&v16[16] = 15;
      sub_1403074F0(v18, (char *)&v20 + 8, v16);
      if ( *(_QWORD *)v18 == -1 )
      {
        *(_OWORD *)&v16[24] = *(_OWORD *)&v18[24];
        *(_OWORD *)&v16[8] = *(_OWORD *)&v18[8];
        *(_QWORD *)v16 = -1;
      }
      else
      {
        v17 = v19;
        *(_OWORD *)&v16[32] = *(_OWORD *)&v18[32];
        *(_OWORD *)&v16[16] = *(_OWORD *)&v18[16];
        *(_OWORD *)v16 = *(_OWORD *)v18;
      }
      v18[0] = 2;
      *(_QWORD *)&v18[8] = 0;
      *(_QWORD *)&v18[16] = v12;
      sub_141433B10(v16, v18);
      break;
  }
  *(_QWORD *)v16 = a3;
  *(_QWORD *)&v16[8] = a4;
  v15 = &v20;
  *(_QWORD *)v18 = v16;
  *(_QWORD *)&v18[8] = sub_14041F680;
  *(_QWORD *)&v18[16] = &v15;
  *(_QWORD *)&v18[24] = sub_140B982E0;
  sub_14149C0F0(a1, &unk_1417A94D0, v18);
  return sub_1400104F0(&v20);
}