// module: codexmate_lib/core/relay/models
// addr: 0x1403240f0
// name: error_hint
// win 1.2.3 | = mac codexmate_lib::core::relay::models::error_hint | 跨平台字符串签名匹配(名↔函数一致)
void __fastcall error_hint(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rsi
  __int64 v3; // r12
  __int64 v5; // r13
  __int64 v6; // rax
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  void *v18; // rax
  __int64 *v19; // [rsp+28h] [rbp-80h]
  __int64 v20; // [rsp+30h] [rbp-78h] BYREF
  __int128 v21; // [rsp+38h] [rbp-70h]
  _QWORD v22[2]; // [rsp+48h] [rbp-60h] BYREF
  _QWORD v23[10]; // [rsp+58h] [rbp-50h] BYREF

  v2 = *a2;
  v3 = a2[1];
  if ( *a2 != v3 )
  {
    v19 = a1;
    while ( 1 )
    {
      v5 = v2;
      v2 += 32;
      *a2 = v2;
      v6 = sub_141433D50(aType_2, 4, v5);
      if ( v6
        && *(_BYTE *)v6 == 3
        && (v7 = *(_QWORD **)(v6 + 16), *(_QWORD *)(v6 + 24) == 11)
        && *v7 ^ 0x745F74757074756FLL | *(_QWORD *)((char *)v7 + 3) ^ 0x747865745F747570LL
        && !(*v7 ^ 0x6D695F7475706E69LL | *(_QWORD *)((char *)v7 + 3) ^ 0x6567616D695F7475LL) )
      {
        v8 = sub_141433D50(aImageUrl_0, 9, v5);
        v9 = 1;
        if ( v8 && *(_BYTE *)v8 == 3 )
        {
          v9 = *(_QWORD *)(v8 + 16);
          v10 = *(_QWORD *)(v8 + 24);
        }
        else
        {
          v10 = 0;
        }
        v15 = sub_14033BC10(v9, v10);
        v22[0] = v15;
        v22[1] = v16;
        if ( v16
          && (v16 < 5 || (v17 = *(_DWORD *)v15 ^ 0x61746164u, (unsigned int)v17 | *(unsigned __int8 *)(v15 + 4) ^ 0x3A)) )
        {
          v23[0] = v22;
          v23[1] = sub_14041F680;
          sub_14149C0F0(&v20, &unk_141746201, v23);
        }
        else
        {
          nullsub_1(v17);
          v18 = (void *)sub_140001650(18, 1);
          if ( !v18 )
            sub_1416C2D4B(1, 18);
          qmemcpy(v18, "> Image attachment", 18);
          v20 = 18;
          *(_QWORD *)&v21 = v18;
          *((_QWORD *)&v21 + 1) = 18;
        }
      }
      else
      {
        v11 = sub_141433D50(&unk_1417461F4, 4, v5);
        if ( !v11 || *(_BYTE *)v11 != 3 )
          goto LABEL_3;
        sub_14074E830(&v20, *(_QWORD *)(v11 + 16), *(_QWORD *)(v11 + 24));
      }
      v12 = v20;
      if ( v20 != -1 )
      {
        v13 = v21;
        sub_14033BC10(v21, *((_QWORD *)&v21 + 1));
        if ( v14 )
        {
          a1 = v19;
          *(_OWORD *)(v19 + 1) = v21;
          goto LABEL_29;
        }
        if ( v12 )
          sub_140001660(v13, v12, 1);
      }
LABEL_3:
      if ( v2 == v3 )
      {
        v12 = -1;
        a1 = v19;
        goto LABEL_29;
      }
    }
  }
  v12 = -1;
LABEL_29:
  *a1 = v12;
}