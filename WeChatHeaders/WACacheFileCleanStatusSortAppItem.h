//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WACacheFileCleanStatusAppItem;

@interface WACacheFileCleanStatusSortAppItem : NSObject
{
    NSString *_appID;
    WACacheFileCleanStatusAppItem *_appItem;
}

@property(retain, nonatomic) WACacheFileCleanStatusAppItem *appItem; // @synthesize appItem=_appItem;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (void).cxx_destruct;
- (int)compare:(id)arg1;
- (id)description;

@end

