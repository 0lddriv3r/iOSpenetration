//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache, NSMutableArray;

@interface EJFont : NSObject
{
    NSMutableArray *textures;
    float txLineX;
    float txLineY;
    float txLineH;
    BOOL useSingleGlyphTextures;
    float pointSize;
    float ascent;
    float descent;
    float leading;
    float contentScale;
    float glyphPadding;
    float xHeight;
    BOOL fill;
    float lineWidth;
    struct __CTFont *ctMainFont;
    unsigned short *glyphsBuffer;
    struct CGPoint *positionsBuffer;
    NSCache *layoutCache;
    struct unordered_map<int, EJFontGlyphInfo, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, EJFontGlyphInfo>>> glyphInfoMap;
}

+ (struct OpaqueJSValue *)loadFontData:(struct OpaqueJSContext *)arg1 fontData:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (CDStruct_de2edefb)measureString:(id)arg1 forContext:(id)arg2;
- (void)drawString:(id)arg1 toContext:(id)arg2 x:(float)arg3 y:(float)arg4;
- (float)getYOffsetForBaseline:(int)arg1;
- (id)getLayoutForString:(id)arg1;
- (unsigned short)createGlyph:(unsigned short)arg1 withFont:(struct __CTFont *)arg2;
- (void)dealloc;
- (id)initWithDescriptor:(id)arg1 fill:(BOOL)arg2 lineWidth:(float)arg3 contentScale:(float)arg4;

@end

