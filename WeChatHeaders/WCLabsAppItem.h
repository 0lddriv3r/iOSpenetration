//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface WCLabsAppItem : MMObject <PBCoding>
{
    BOOL bNoReport;
    BOOL bAllVersion;
    BOOL bClearStatus;
    BOOL bCanShowRedPoint;
    NSString *nsExpId;
    unsigned long uiSeq;
    unsigned long uiBeginTime;
    unsigned long uiEndTime;
    unsigned long uiPriorityLevel;
    unsigned long uiMonitorHitId;
    unsigned long uiMonitorHitKey;
    NSString *nsLabsAppId;
    unsigned long uiAppType;
    unsigned long uiBizType;
    unsigned long uiAppSwitch;
    NSString *nsDetailUrl;
    NSString *nsWeAppUser;
    NSString *nsWeAppPath;
    NSString *nsDeepLink;
    unsigned long uiPosition;
    NSString *nsTitleKey;
    NSString *nsTitle_cn;
    NSString *nsTitle_hk;
    NSString *nsTitle_tw;
    NSString *nsTitle_en;
    NSString *nsDescKey;
    NSString *nsDesc_cn;
    NSString *nsDesc_hk;
    NSString *nsDesc_tw;
    NSString *nsDesc_en;
    NSString *nsIntroduceKey;
    NSString *nsIntroduce_cn;
    NSString *nsIntroduce_hk;
    NSString *nsIntroduce_tw;
    NSString *nsIntroduce_en;
    unsigned long uiExpireTime;
    unsigned long weAppDebugMode;
    NSString *nsImgUrl_cn;
    NSString *nsImgUrl_hk;
    NSString *nsImgUrl_tw;
    NSString *nsImgUrl_en;
    NSString *nsThumbUrl_cn;
    NSString *nsThumbUrl_hk;
    NSString *nsThumbUrl_tw;
    NSString *nsThumbUrl_en;
    NSString *nsIconUrl;
    NSString *nsImgUrl_cn2;
    NSString *nsImgUrl_hk2;
    NSString *nsImgUrl_tw2;
    NSString *nsImgUrl_en2;
    NSString *nsImgUrl_cn3;
    NSString *nsImgUrl_hk3;
    NSString *nsImgUrl_tw3;
    NSString *nsImgUrl_en3;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *nsImgUrl_en3; // @synthesize nsImgUrl_en3;
@property(retain, nonatomic) NSString *nsImgUrl_tw3; // @synthesize nsImgUrl_tw3;
@property(retain, nonatomic) NSString *nsImgUrl_hk3; // @synthesize nsImgUrl_hk3;
@property(retain, nonatomic) NSString *nsImgUrl_cn3; // @synthesize nsImgUrl_cn3;
@property(retain, nonatomic) NSString *nsImgUrl_en2; // @synthesize nsImgUrl_en2;
@property(retain, nonatomic) NSString *nsImgUrl_tw2; // @synthesize nsImgUrl_tw2;
@property(retain, nonatomic) NSString *nsImgUrl_hk2; // @synthesize nsImgUrl_hk2;
@property(retain, nonatomic) NSString *nsImgUrl_cn2; // @synthesize nsImgUrl_cn2;
@property(retain, nonatomic) NSString *nsIconUrl; // @synthesize nsIconUrl;
@property(retain, nonatomic) NSString *nsThumbUrl_en; // @synthesize nsThumbUrl_en;
@property(retain, nonatomic) NSString *nsThumbUrl_tw; // @synthesize nsThumbUrl_tw;
@property(retain, nonatomic) NSString *nsThumbUrl_hk; // @synthesize nsThumbUrl_hk;
@property(retain, nonatomic) NSString *nsThumbUrl_cn; // @synthesize nsThumbUrl_cn;
@property(retain, nonatomic) NSString *nsImgUrl_en; // @synthesize nsImgUrl_en;
@property(retain, nonatomic) NSString *nsImgUrl_tw; // @synthesize nsImgUrl_tw;
@property(retain, nonatomic) NSString *nsImgUrl_hk; // @synthesize nsImgUrl_hk;
@property(retain, nonatomic) NSString *nsImgUrl_cn; // @synthesize nsImgUrl_cn;
@property(nonatomic) BOOL bCanShowRedPoint; // @synthesize bCanShowRedPoint;
@property(nonatomic) BOOL bClearStatus; // @synthesize bClearStatus;
@property(nonatomic) unsigned long weAppDebugMode; // @synthesize weAppDebugMode;
@property(nonatomic) unsigned long uiExpireTime; // @synthesize uiExpireTime;
@property(retain, nonatomic) NSString *nsIntroduce_en; // @synthesize nsIntroduce_en;
@property(retain, nonatomic) NSString *nsIntroduce_tw; // @synthesize nsIntroduce_tw;
@property(retain, nonatomic) NSString *nsIntroduce_hk; // @synthesize nsIntroduce_hk;
@property(retain, nonatomic) NSString *nsIntroduce_cn; // @synthesize nsIntroduce_cn;
@property(retain, nonatomic) NSString *nsIntroduceKey; // @synthesize nsIntroduceKey;
@property(retain, nonatomic) NSString *nsDesc_en; // @synthesize nsDesc_en;
@property(retain, nonatomic) NSString *nsDesc_tw; // @synthesize nsDesc_tw;
@property(retain, nonatomic) NSString *nsDesc_hk; // @synthesize nsDesc_hk;
@property(retain, nonatomic) NSString *nsDesc_cn; // @synthesize nsDesc_cn;
@property(retain, nonatomic) NSString *nsDescKey; // @synthesize nsDescKey;
@property(retain, nonatomic) NSString *nsTitle_en; // @synthesize nsTitle_en;
@property(retain, nonatomic) NSString *nsTitle_tw; // @synthesize nsTitle_tw;
@property(retain, nonatomic) NSString *nsTitle_hk; // @synthesize nsTitle_hk;
@property(retain, nonatomic) NSString *nsTitle_cn; // @synthesize nsTitle_cn;
@property(retain, nonatomic) NSString *nsTitleKey; // @synthesize nsTitleKey;
@property(nonatomic) unsigned long uiPosition; // @synthesize uiPosition;
@property(retain, nonatomic) NSString *nsDeepLink; // @synthesize nsDeepLink;
@property(retain, nonatomic) NSString *nsWeAppPath; // @synthesize nsWeAppPath;
@property(retain, nonatomic) NSString *nsWeAppUser; // @synthesize nsWeAppUser;
@property(retain, nonatomic) NSString *nsDetailUrl; // @synthesize nsDetailUrl;
@property(nonatomic) BOOL bAllVersion; // @synthesize bAllVersion;
@property(nonatomic) unsigned long uiAppSwitch; // @synthesize uiAppSwitch;
@property(nonatomic) unsigned long uiBizType; // @synthesize uiBizType;
@property(nonatomic) unsigned long uiAppType; // @synthesize uiAppType;
@property(retain, nonatomic) NSString *nsLabsAppId; // @synthesize nsLabsAppId;
@property(nonatomic) unsigned long uiMonitorHitKey; // @synthesize uiMonitorHitKey;
@property(nonatomic) unsigned long uiMonitorHitId; // @synthesize uiMonitorHitId;
@property(nonatomic) BOOL bNoReport; // @synthesize bNoReport;
@property(nonatomic) unsigned long uiPriorityLevel; // @synthesize uiPriorityLevel;
@property(nonatomic) unsigned long uiEndTime; // @synthesize uiEndTime;
@property(nonatomic) unsigned long uiBeginTime; // @synthesize uiBeginTime;
@property(nonatomic) unsigned long uiSeq; // @synthesize uiSeq;
@property(retain, nonatomic) NSString *nsExpId; // @synthesize nsExpId;
- (void).cxx_destruct;
- (id)getRealIconUrl;
- (id)getStringWithoutConsiderLang:(id)arg1 wordTw:(id)arg2 wordHk:(id)arg3 wordEn:(id)arg4;
- (id)getImgUrl3;
- (id)getImgUrl2;
- (id)getImgUrl;
- (id)getThumbUrl;
- (id)getIntroduce;
- (id)getDesc;
- (id)getBizConfigTitle;
- (id)getTitle;
@property(readonly, copy) NSString *description;
- (int)compare:(id)arg1;
- (BOOL)isExpireAndNotShow;
- (BOOL)isOffLineItem;
- (BOOL)isOnLineItem;
- (BOOL)isNotYetBegin;
- (BOOL)isExpired;
- (BOOL)hasOpenFunc;
- (BOOL)isAssisstantNativeItem;
- (BOOL)isIndependentNativeItem;
- (id)getWeAppSceneNote;
- (BOOL)isWeAppItem;
- (id)getBizTypeWording;
- (BOOL)shouldBeReplaceByOther:(id)arg1;
- (BOOL)isLegalItem;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
