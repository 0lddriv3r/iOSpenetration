//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSData, NSString;

@interface TranslateInfo : MMObject <PBCoding>
{
    unsigned long mesLocalId;
    NSString *originText;
    NSString *originLang;
    NSString *translatedText;
    NSString *translatedLang;
    BOOL showOriginTextNow;
    int translateStatus;
    NSString *brandWording;
    NSString *snsID;
    BOOL bNeedShowAnimation;
    NSString *displayTranslatedText;
    BOOL canReTrans;
    BOOL _bAutoScrollUp;
    NSData *cookie;
    int _autoScrollUpCount;
}

+ (void)initialize;
@property(nonatomic) int autoScrollUpCount; // @synthesize autoScrollUpCount=_autoScrollUpCount;
@property(nonatomic) BOOL bAutoScrollUp; // @synthesize bAutoScrollUp=_bAutoScrollUp;
@property(nonatomic) BOOL canReTrans; // @synthesize canReTrans;
@property(retain, nonatomic) NSData *cookie; // @synthesize cookie;
@property(nonatomic) BOOL bNeedShowAnimation; // @synthesize bNeedShowAnimation;
@property(retain, nonatomic) NSString *snsID; // @synthesize snsID;
@property(retain, nonatomic) NSString *brandWording; // @synthesize brandWording;
@property(nonatomic) int translateStatus; // @synthesize translateStatus;
@property(nonatomic) BOOL showOriginTextNow; // @synthesize showOriginTextNow;
@property(retain, nonatomic) NSString *translatedLang; // @synthesize translatedLang;
@property(retain, nonatomic) NSString *translatedText; // @synthesize translatedText;
@property(retain, nonatomic) NSString *originLang; // @synthesize originLang;
@property(retain, nonatomic) NSString *originText; // @synthesize originText;
@property(nonatomic) unsigned long mesLocalId; // @synthesize mesLocalId;
@property(retain, nonatomic) NSString *displayTranslatedText; // @synthesize displayTranslatedText;
- (void).cxx_destruct;
- (int)GetTranslateStatus;
- (BOOL)isTranslateFailed;
- (BOOL)isTextTooLong;
- (BOOL)isTranslating;
- (id)getDisplayContent;
- (id)init;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

