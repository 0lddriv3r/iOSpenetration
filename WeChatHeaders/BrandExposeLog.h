//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BrandExposeLog : NSObject
{
    BOOL _isTop;
    BOOL _isRedDot;
    BOOL _isClicked;
    unsigned int _timestamp;
    NSString *_bizUsername;
    NSString *_mid;
    NSString *_idx;
    unsigned int _rank;
}

@property(nonatomic) BOOL isClicked; // @synthesize isClicked=_isClicked;
@property(nonatomic) BOOL isRedDot; // @synthesize isRedDot=_isRedDot;
@property(nonatomic) BOOL isTop; // @synthesize isTop=_isTop;
@property(nonatomic) unsigned int rank; // @synthesize rank=_rank;
@property(retain, nonatomic) NSString *idx; // @synthesize idx=_idx;
@property(retain, nonatomic) NSString *mid; // @synthesize mid=_mid;
@property(retain, nonatomic) NSString *bizUsername; // @synthesize bizUsername=_bizUsername;
@property(nonatomic) unsigned int timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (id)logString;

@end

