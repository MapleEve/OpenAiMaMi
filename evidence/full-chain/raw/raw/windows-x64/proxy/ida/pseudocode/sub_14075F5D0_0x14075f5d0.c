// module: codexmate_lib/platform/proxy
// addr: 0x14075f5d0
// name: sub_14075F5D0
// win 1.2.1 | module src/platform/proxy.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_14075F5D0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD v17[4]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v18[2]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v19[2]; // [rsp+58h] [rbp-28h] BYREF
  __int128 v20; // [rsp+68h] [rbp-18h] BYREF
  __int64 v21; // [rsp+78h] [rbp-8h]
  __int64 v22; // [rsp+80h] [rbp+0h]

  v22 = -2;
  v19[0] = a2;
  v19[1] = a3;
  if ( a4 )
  {
    v6 = sub_14033BC10(a4, a5);
    if ( v6 )
    {
      v8 = v7;
      if ( v7 )
      {
        v18[0] = v6;
        v18[1] = v7;
        v9 = v6;
        if ( (unsigned __int8)sub_1407BE9C0(asc_14178B58A, 3, v6, v7) )
        {
          if ( v8 < 0 )
          {
            v11 = 0;
            goto LABEL_7;
          }
          nullsub_1(v10);
          v11 = 1;
          v13 = sub_140001650(v8, 1);
          if ( !v13 )
LABEL_7:
            sub_1416C2D4B(v11, v8);
          v14 = v13;
          sub_141684120(v13, v9, v8);
          *(_QWORD *)&v20 = v8;
          *((_QWORD *)&v20 + 1) = v14;
          v21 = v8;
          v12 = a1[2];
          if ( v12 != *a1 )
            goto LABEL_13;
        }
        else
        {
          v17[0] = v19;
          v17[1] = sub_14041F680;
          v17[2] = v18;
          v17[3] = sub_14041F680;
          sub_14149C0F0(&v20, &unk_14178B58D, v17);
          v12 = a1[2];
          if ( v12 != *a1 )
            goto LABEL_13;
        }
        sub_141689AB0(a1);
LABEL_13:
        v15 = a1[1];
        v16 = 3 * v12;
        *(_QWORD *)(v15 + 8 * v16 + 16) = v21;
        *(_OWORD *)(v15 + 8 * v16) = v20;
        a1[2] = v12 + 1;
      }
    }
  }
}