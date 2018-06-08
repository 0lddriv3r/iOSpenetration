//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface WAAppBrandRedDotNotifyActivity : NSObject <PBCoding>
{
    BOOL isClose;
    BOOL markHasClick;
    BOOL hasRedDotExposed;
    NSString *msgId;
    unsigned long activityType;
    unsigned long pushTime;
    unsigned long duration;
    unsigned long frequency;
    unsigned long getPushLocalTime;
    unsigned long lastUploadLocalTime;
    NSString *tips;
    unsigned long reason;
    unsigned long showType;
}

+ (void)initialize;
@property(nonatomic) unsigned long showType; // @synthesize showType;
@property(nonatomic) unsigned long reason; // @synthesize reason;
@property(nonatomic) BOOL hasRedDotExposed; // @synthesize hasRedDotExposed;
@property(copy, nonatomic) NSString *tips; // @synthesize tips;
@property(nonatomic) BOOL markHasClick; // @synthesize markHasClick;
@property(nonatomic) unsigned long lastUploadLocalTime; // @synthesize lastUploadLocalTime;
@property(nonatomic) unsigned long getPushLocalTime; // @synthesize getPushLocalTime;
@property(nonatomic) unsigned long frequency; // @synthesize frequency;
@property(nonatomic) unsigned long duration; // @synthesize duration;
@property(nonatomic) unsigned long pushTime; // @synthesize pushTime;
@property(nonatomic) BOOL isClose; // @synthesize isClose;
@property(nonatomic) unsigned long activityType; // @synthesize activityType;
@property(copy, nonatomic) NSString *msgId; // @synthesize msgId;
- (void).cxx_destruct;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
