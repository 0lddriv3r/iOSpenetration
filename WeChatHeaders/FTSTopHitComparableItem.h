//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FTSTopHitComparableItem : NSObject
{
    id _topHitItem;
    NSString *_typeKey;
    unsigned long _clickScore;
}

@property(nonatomic) unsigned long clickScore; // @synthesize clickScore=_clickScore;
@property(retain, nonatomic) NSString *typeKey; // @synthesize typeKey=_typeKey;
@property(retain, nonatomic) id topHitItem; // @synthesize topHitItem=_topHitItem;
- (void).cxx_destruct;
- (int)compareUsingClickScore:(id)arg1;

@end

