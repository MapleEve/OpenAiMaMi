// win 1.2.7 latest-exe | module src/core/codex_config.rs | ea 0x14094be70 | successor of pre-update 0x140ec7390 | session <审计会话>
// match evidence: {"body_sim": 0.882, "str_ov": 0, "anchor": 0.385, "conf": 1.0, "verdict": "CONFIRMED_POOL_MATCH"}
_QWORD *__fastcall sub_14094BE70(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(unsigned __int64); // rax
  __int64 v9; // rax
  unsigned __int64 v11; // [rsp+28h] [rbp-28h] BYREF
  __int128 v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+40h] [rbp-10h]
  char v14; // [rsp+4Fh] [rbp-1h]
  __int64 v15; // [rsp+50h] [rbp+0h]

  v15 = -2;
  sub_1416CC1A0(&v12, a2, a3);
  if ( (_QWORD)v12 == -1 )
  {
    v6 = *((_QWORD *)&v12 + 1);
    v7 = BYTE8(v12) & 3;
    switch ( BYTE8(v12) & 3 )
    {
      case 0:
        if ( *(_BYTE *)(*((_QWORD *)&v12 + 1) + 16LL) )
          goto LABEL_9;
        goto LABEL_11;
      case 1:
        if ( !*(_BYTE *)(*((_QWORD *)&v12 + 1) + 31LL) )
          goto LABEL_11;
        goto LABEL_9;
      case 2:
        v14 = 1;
        v8 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416E2EE0(v5, v4) + 8);
        v14 = 1;
        LOBYTE(v9) = v8(HIDWORD(v6));
        goto LABEL_8;
      case 3:
        v9 = HIDWORD(*((_QWORD *)&v12 + 1));
LABEL_8:
        if ( (_BYTE)v9 )
        {
LABEL_9:
          *a1 = 2;
          a1[1] = v6;
        }
        else
        {
LABEL_11:
          a1[1] = 0;
          a1[2] = 1;
          a1[3] = 0;
          *a1 = -1;
          if ( (unsigned int)(v7 - 2) >= 2 && v7 )
          {
            v11 = v6 - 1;
            v14 = 0;
            sub_1416EBAD0(&v11);
          }
        }
        break;
    }
  }
  else
  {
    a1[3] = v13;
    *(_OWORD *)(a1 + 1) = v12;
    *a1 = -1;
  }
  return a1;
}
