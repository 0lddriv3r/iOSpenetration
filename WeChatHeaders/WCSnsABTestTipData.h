//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, WCSnsABTestTitle;

@interface WCSnsABTestTipData : NSObject
{
    NSMutableArray *arrActionItem;
    NSString *tipIndex;
    int showType;
    WCSnsABTestTitle *abtestTitle;
}

@property(retain, nonatomic) WCSnsABTestTitle *abtestTitle; // @synthesize abtestTitle;
@property(nonatomic) int showType; // @synthesize showType;
@property(retain, nonatomic) NSString *tipIndex; // @synthesize tipIndex;
@property(retain, nonatomic) NSMutableArray *arrActionItem; // @synthesize arrActionItem;
- (void).cxx_destruct;
- (id)description;
- (int)compareTipAscending:(id)arg1;
- (id)init;

@end
