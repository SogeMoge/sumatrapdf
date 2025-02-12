/* Copyright 2022 the SumatraPDF project authors (see AUTHORS file).
   License: Simplified BSD (see COPYING.BSD) */

HBITMAP BuildIconsBitmap(int dx, int dy);

// must match order in gAllIcons
enum class TbIcon {
    None = -1,
    Open,
    Print,
    PagePrev,
    PageNext,
    LayoutContinuous,
    LayoutSinglePage,
    ZoomOut,
    ZoomIn,
    SearchPrev,
    SearchNext,
    MatchCase,
    MatchCase2,
    Save,
    RotateLeft,
    RotateRight,
    DarkMode,
    ReadMode,
    DefaultMode
};
