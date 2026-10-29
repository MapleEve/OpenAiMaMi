// win 1.2.7 latest-exe | module src/core/relay/legacy_virtual_auth.rs | ea 0x140cf39a0 | successor of pre-update 0x140f6d270 | session <审计会话>
// match evidence: {"body_sim": 0.624, "verdict": "CONFIRMED_DIFF_CAND"}
__int64 __fastcall sub_140CF39A0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  int v9; // r15d
  __int64 result; // rax
  __int64 (__fastcall *v11)(unsigned __int64); // rax
  __int64 v12; // rbx
  __int64 v13; // [rsp+30h] [rbp-10h] BYREF
  char v14; // [rsp+3Fh] [rbp-1h]
  __int64 v15; // [rsp+40h] [rbp+0h]

  v15 = -2;
  *(_BYTE *)(a2 + 56) = 0;
  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a2 + 16);
  v5 = sub_1416C42F0(v3, v4);
  v8 = v5;
  if ( v5 )
  {
    v9 = v5 & 3;
    switch ( v5 & 3 )
    {
      case 0uLL:
        result = *(unsigned __int8 *)(v5 + 16);
        if ( (_BYTE)result )
          goto LABEL_8;
        goto LABEL_10;
      case 1uLL:
        result = *(unsigned __int8 *)(v5 + 31);
        if ( !(_BYTE)result )
          goto LABEL_10;
        goto LABEL_8;
      case 2uLL:
        v14 = 1;
        v11 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416E2EE0(v7, v6) + 8);
        v14 = 1;
        result = v11(HIDWORD(v8));
        goto LABEL_7;
      case 3uLL:
        result = HIDWORD(v5);
LABEL_7:
        if ( (_BYTE)result )
        {
LABEL_8:
          v12 = 2;
          goto LABEL_18;
        }
LABEL_10:
        if ( (unsigned int)(v9 - 2) >= 2 && (v8 & 3) != 0 )
        {
          v13 = v8 - 1;
          v14 = 0;
          sub_1416EBAD0(&v13);
        }
        break;
    }
  }
  result = sub_1416B19D0(v3, v4);
  v12 = -1;
  if ( result )
  {
    result = sub_1416C3FE0(result);
    if ( result )
    {
      if ( (unsigned int)(result & 3) - 2 >= 2 && (result & 3) != 0 )
      {
        v13 = result - 1;
        result = sub_1416EBAD0(&v13);
      }
    }
  }
LABEL_18:
  *a1 = v12;
  a1[1] = v8;
  return result;
}
