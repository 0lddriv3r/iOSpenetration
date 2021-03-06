//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class CMessageWrap, NSString;

@interface VoiceTranslateInfo : MMObject <PBCoding>
{
    BOOL _bShowAnimation;
    BOOL _bAutoScrollUp;
    BOOL _hadLocalTranslateRet;
    unsigned long mesLocalId;
    NSString *_voiceId;
    NSString *_translatedText;
    NSString *_displayText;
    int _status;
    CMessageWrap *_messageWrap;
    unsigned long long translatedTime;
    unsigned long long _translateStartTime;
    unsigned long long _fristTranslateTime;
}

+ (void)initialize;
@property(retain, nonatomic) CMessageWrap *messageWrap; // @synthesize messageWrap=_messageWrap;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) BOOL hadLocalTranslateRet; // @synthesize hadLocalTranslateRet=_hadLocalTranslateRet;
@property(nonatomic) BOOL bAutoScrollUp; // @synthesize bAutoScrollUp=_bAutoScrollUp;
@property(nonatomic) BOOL bShowAnimation; // @synthesize bShowAnimation=_bShowAnimation;
@property(nonatomic) unsigned long long fristTranslateTime; // @synthesize fristTranslateTime=_fristTranslateTime;
@property(nonatomic) unsigned long long translateStartTime; // @synthesize translateStartTime=_translateStartTime;
@property(retain, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
@property(retain, nonatomic) NSString *translatedText; // @synthesize translatedText=_translatedText;
@property(retain, nonatomic) NSString *voiceId; // @synthesize voiceId=_voiceId;
@property(nonatomic) unsigned long long translatedTime; // @synthesize translatedTime;
@property(nonatomic) unsigned long mesLocalId; // @synthesize mesLocalId;
- (void).cxx_destruct;
- (id)init;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

