//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSDate, NSString, SightDraft, WCLocationInfo;

@interface WCTempSaveModel : NSObject <NSCoding, NSCopying>
{
    NSString *_content;
    NSArray *_imageArray;
    SightDraft *_sightDraft;
    NSDate *_lastSaveDate;
    int _lastPrivacy;
    WCLocationInfo *_poiInfo;
    NSArray *_tempSelectContacts;
    NSArray *_remindContactUsernames;
    NSArray *_lastPostVisibleLabelNames;
    NSArray *_lastPostInVisibleLabelNames;
}

@property(retain, nonatomic) NSArray *lastPostInVisibleLabelNames; // @synthesize lastPostInVisibleLabelNames=_lastPostInVisibleLabelNames;
@property(retain, nonatomic) NSArray *lastPostVisibleLabelNames; // @synthesize lastPostVisibleLabelNames=_lastPostVisibleLabelNames;
@property(retain, nonatomic) NSArray *remindContactUsernames; // @synthesize remindContactUsernames=_remindContactUsernames;
@property(retain, nonatomic) NSArray *tempSelectContacts; // @synthesize tempSelectContacts=_tempSelectContacts;
@property(retain, nonatomic) WCLocationInfo *poiInfo; // @synthesize poiInfo=_poiInfo;
@property(nonatomic) int lastPrivacy; // @synthesize lastPrivacy=_lastPrivacy;
@property(retain, nonatomic) NSDate *lastSaveDate; // @synthesize lastSaveDate=_lastSaveDate;
@property(retain, nonatomic) SightDraft *sightDraft; // @synthesize sightDraft=_sightDraft;
@property(retain, nonatomic) NSArray *imageArray; // @synthesize imageArray=_imageArray;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
