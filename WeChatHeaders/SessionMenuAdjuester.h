//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface SessionMenuAdjuester : NSObject
{
    float _systemFontSize;
    float _textFontSize;
    NSMutableDictionary *_fontDic;
}

+ (id)sharedSessionMenuAdjuester;
@property(retain, nonatomic) NSMutableDictionary *fontDic; // @synthesize fontDic=_fontDic;
@property(nonatomic) float textFontSize; // @synthesize textFontSize=_textFontSize;
@property(nonatomic) float systemFontSize; // @synthesize systemFontSize=_systemFontSize;
- (void).cxx_destruct;
- (id)GetPathOfSystemMenuFontDic;
- (void)syncSystemMenuFontDicToFile;
- (BOOL)isMenuItemBtn:(id)arg1 MenuItems:(id)arg2;
- (float)getMenuFontSizeWithSystemFontSize:(float)arg1;
- (float)getTotalTitleWidthWithMenus:(id)arg1;
- (void)catchMenuAdjuestInfo;
- (id)adjuestMutiSelMenuWithOriginItems:(id)arg1;

@end
