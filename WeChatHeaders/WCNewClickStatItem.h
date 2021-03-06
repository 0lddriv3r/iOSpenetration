//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSArray, NSMutableArray, NSString;

@interface WCNewClickStatItem : MMObject
{
    unsigned long dataType;
    unsigned long errType;
    unsigned long enterTime;
    unsigned long scene;
    unsigned long quitTime;
    int interval;
    unsigned long lastQuitTime;
    int backGroundInterval;
    int lastInterval;
    unsigned long seq;
    int sumInterval;
    unsigned long outOfOrderCount;
    unsigned long pageCount;
    NSString *pageFlow;
    NSMutableArray *pageList;
    NSArray *_pageFormatList;
}

@property(retain, nonatomic) NSArray *pageFormatList; // @synthesize pageFormatList=_pageFormatList;
@property(retain, nonatomic) NSMutableArray *pageList; // @synthesize pageList;
@property(retain, nonatomic) NSString *pageFlow; // @synthesize pageFlow;
@property(nonatomic) unsigned long pageCount; // @synthesize pageCount;
@property(nonatomic) unsigned long outOfOrderCount; // @synthesize outOfOrderCount;
@property(nonatomic) int sumInterval; // @synthesize sumInterval;
@property(nonatomic) unsigned long seq; // @synthesize seq;
@property(nonatomic) int lastInterval; // @synthesize lastInterval;
@property(nonatomic) int backGroundInterval; // @synthesize backGroundInterval;
@property(nonatomic) unsigned long lastQuitTime; // @synthesize lastQuitTime;
@property(nonatomic) int interval; // @synthesize interval;
@property(nonatomic) unsigned long quitTime; // @synthesize quitTime;
@property(nonatomic) unsigned long scene; // @synthesize scene;
@property(nonatomic) unsigned long enterTime; // @synthesize enterTime;
@property(nonatomic) unsigned long errType; // @synthesize errType;
@property(nonatomic) unsigned long dataType; // @synthesize dataType;
- (void).cxx_destruct;
- (void)fixPageFlow;
- (void)checkMisMatchUI;
- (void)checkOutOfOrder;
- (void)checkIsOK;
- (void)checkData;
- (id)formatPageList;
- (id)formatPageFlowV2;
- (id)formatOriginalPageFlow;
- (int)calSumInterval;
- (void)calData;
- (id)description;
- (id)toString;
- (void)calAndFixData;

@end

