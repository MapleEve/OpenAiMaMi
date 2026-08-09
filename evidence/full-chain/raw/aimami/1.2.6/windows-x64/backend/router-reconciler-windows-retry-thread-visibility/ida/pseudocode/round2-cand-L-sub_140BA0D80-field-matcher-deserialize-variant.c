/* round2 (2026-08-07) 证据 -- RouterToggleProgress 字段名匹配器变体 (deserialize 侧)
 * 0x140BA0D80 (0x196=406B, 完整反编译体, 无截断)
 * 与 0x140BA0B20 同模式，匹配 target/phase/occurredAtMs/reason 子集，
 * 共用同一字段名字符串块。非 ::serialize 本身。
 */

__int64 __fastcall sub_140BA0D80(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int128 v8; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int128 v9; // [rsp+30h] [rbp-50h]
  __int128 v10; // [rsp+40h] [rbp-40h]
  __int64 v11; // [rsp+50h] [rbp-30h]
  __int64 v12; // [rsp+58h] [rbp-28h]
  __int64 v13; // [rsp+60h] [rbp-20h]
  __int128 v14; // [rsp+70h] [rbp-10h] BYREF
  unsigned __int128 v15; // [rsp+80h] [rbp+0h]
  __int128 v16; // [rsp+90h] [rbp+10h]
  char v17; // [rsp+A7h] [rbp+27h]
  __int64 v18; // [rsp+A8h] [rbp+28h]

  v18 = -2;
  *(_QWORD *)&v14 = -1;
  *((_QWORD *)&v15 + 1) = 0;
  *((_QWORD *)&v16 + 1) = 0;
  v17 = 1;
  v4 = sub_140AB12C0(&v14, "targetphasestartedAtMsupdatedAtMsreasonoccurredAtMs", 6, a2 + 56);   /* target */
  if ( v4
    || (v17 = 1, (v4 = sub_140AB0A40(&v14, "phasestartedAtMsupdatedAtMsreasonoccurredAtMs", 5, a2)) != 0)   /* phase */
    || (v17 = 1, (v4 = sub_140AB3030(&v14, "occurredAtMs", 12, a2 + 48)) != 0)                                /* occurredAtMs */
    || (v17 = 1, (v4 = sub_140AAF5B0(&v14, "reasonoccurredAtMs", 6, a2 + 24)) != 0) )                          /* reason */
  {
    *(_QWORD *)(a1 + 8) = v4;
    *(_BYTE *)a1 = -1;
    if ( (_QWORD)v14 == -2 )
    {
      if ( BYTE8(v14) != 0xFF )
        sub_1401FF690((char *)&v14 + 8);
    }
    else
    {
      if ( *((_QWORD *)&v15 + 1) )
      {
        v5 = *((_QWORD *)&v16 + 1);
        *((_QWORD *)&v8 + 1) = 0;
        v9 = __PAIR128__(v16, *((unsigned __int64 *)&v15 + 1));
        *((_QWORD *)&v10 + 1) = 0;
        v11 = *((_QWORD *)&v15 + 1);
        v12 = v16;
        v6 = 1;
      }
      else
      {
        v6 = 0;
        v5 = 0;
      }
      *(_QWORD *)&v8 = v6;
      *(_QWORD *)&v10 = v6;
      v13 = v5;
      sub_140039B30(&v8);
      if ( (_QWORD)v14 != -1 && (_QWORD)v14 )
        sub_140001660(*((_QWORD *)&v14 + 1), v14, 1);
    }
  }
  else
  {
    v10 = v16;
    v9 = v15;
    v8 = v14;
    v17 = 0;
    sub_1414D8860(a1, &v8);
  }
  return a1;
}
