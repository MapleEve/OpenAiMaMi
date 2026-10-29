// fn load_runtime_display_snapshot_build_envelope (0x140CF4D10, 298B)
// 880B snapshot 拷贝 + envelope: schemaVersion=1(@952) success=true(@956) code="ok"(@880 cap2/ptr/len2) message="Success"(@904 cap7/ptr/len7) warnings=空Vec((cap0,ptr8dangling,len0)@928)
__int64 __fastcall sub_140CF4D10(__int64 a1, __int64 a2)
{
  _WORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  _WORD *v7; // r14
  _DWORD *v8; // rax
  _DWORD *v9; // rdi

  nullsub_1(a1, a2);
  v4 = (_WORD *)sub_140001650(2, 1);
  if ( !v4 )
    sub_14196B2DB(1, 2);
  v7 = v4;
  *v4 = 27503;                    // 0x6B6F = "ok"
  nullsub_1(v6, v5);
  v8 = (_DWORD *)sub_140001650(7, 1);
  if ( !v8 )
    sub_14196B2DB(1, 7);
  v9 = v8;
  *(_DWORD *)((char *)v8 + 3) = 1936942435;  // 0x73736563 = "cess"
  *v8 = 1667462483;                          // 0x63637553 = "succ" (S 大写)
  sub_1419234B0(a1, a2, 880);     // snapshot payload
  *(_DWORD *)(a1 + 952) = 1;      // schemaVersion = 1
  *(_BYTE *)(a1 + 956) = 1;       // success = true
  *(_QWORD *)(a1 + 880) = 2;      // code.cap
  *(_QWORD *)(a1 + 888) = v7;     // code.ptr -> "ok"
  *(_QWORD *)(a1 + 896) = 2;      // code.len
  *(_QWORD *)(a1 + 904) = 7;      // message.cap
  *(_QWORD *)(a1 + 912) = v9;     // message.ptr -> "Success"
  *(_QWORD *)(a1 + 920) = 7;      // message.len
  *(_QWORD *)(a1 + 928) = 0;      // warnings.cap = 0
  *(_QWORD *)(a1 + 936) = 8;      // warnings.ptr = dangling(align 8)
  *(_QWORD *)(a1 + 944) = 0;      // warnings.len = 0
  return a1;
}
