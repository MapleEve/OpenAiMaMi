// aimami 1.1.8 windows-x64 — relay_http_request_cleanup_sys (name carried forward from 1.1.1's
// confirmed identical-role function; PE stripped this build too, cross-confirmed by the literal
// dealloc size match below)
// va: 0x1408AC180 (sub_1408AC180) — size=311B, basic_blocks=21, cyclomatic_complexity=7,
// callees=5 (all resolved: sub_140045C00, sub_140001370[[dealloc]], sub_140C34F70,
// sub_1407A5D80, sub_140141040). decompile: FULL, no truncation.
// callers: 19 distinct functions across the relay-HTTP call surface (sub_140878570, sub_1408786C0,
// sub_140878810, sub_14087A650, sub_14087C760, sub_1409717F0, sub_1409751F0, sub_140976010 [our
// core dispatcher], sub_14097E710, sub_14097EF80, sub_14097F640, sub_1409802F0, sub_140980B30,
// sub_1409847C0, sub_140984940, sub_1409B6840, sub_1409ED070, sub_1409F0660, sub_1409F0D80)
// — matches 1.1.1's evidence.md description verbatim: "Arc deref + free 1424B alloc; called by
// all relay HTTP paths" (the terminal `sub_140001370(v5, 1424, 8)` dealloc call below IS that
// 1424-byte free, byte-identical to the 1.1.1 finding).

void __fastcall sub_1408AC180(__int64 a1, __int64 a2)
{
  __int64 v3, v4, v5;   // rdx
  __int64 v6, v7;       // rax
  __int64 v8, v9;       // stack (rbp-10h, reused)

  if ( a1 )
  {
    if ( a2 )
      sub_140140100(a2);            // Arc-strong-count decrement (deref) path
  }
  else
  {
    if ( *(_BYTE *)(a2 + 1376) >= 0xAu )
    {
      v3 = *(_QWORD *)(a2 + 1392);
      if ( v3 )
        sub_140001370(*(_QWORD *)(a2 + 1384), v3, 1);   // free variable-length trailing buffer
    }
    v4 = *(_QWORD *)(a2 + 1272);
    if ( v4 )
      sub_140001370(*(_QWORD *)(a2 + 1280), v4, 1);      // free second variable-length buffer
    sub_140045C00(a2 + 1176);                             // drop nested sub-object at +1176
    if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a2 + 1400)) )
      sub_140C34F70(a2 + 1400);                           // Arc refcount hit zero -> full teardown
    sub_1407A5D80(a2);                                     // drop remaining nested fields
    v5 = a2;
    v6 = *(_QWORD *)(a2 + 1408);
    if ( v6 )
    {
      v8 = *(_QWORD *)(a2 + 1408);
      sub_140141040(v6);
      sub_140001370(v8, 112, 8);       // free a 112-byte slot (reqwest header-map entry?)
      v5 = a2;
    }
    v7 = *(_QWORD *)(v5 + 1416);
    if ( v7 )
    {
      v9 = *(_QWORD *)(v5 + 1416);
      sub_140141040(v7);
      sub_140001370(v9, 112, 8);       // free a second 112-byte slot
      v5 = a2;
    }
    // *** the 1424-byte top-level struct free — this IS the "relay_http_request_cleanup_sys"
    // signature dealloc call cited in the 1.1.1 baseline evidence, byte-identical size ***
    sub_140001370(v5, 1424, 8);
  }
}
