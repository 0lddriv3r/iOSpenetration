//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface WCAppAuthScopeInfoItem : MMObject
{
    BOOL isUserEnable;
    NSString *scope;
    NSString *scopeDesc;
    unsigned int state;
}

+ (void)initialize;
@property(nonatomic) BOOL isUserEnable; // @synthesize isUserEnable;
@property(nonatomic) unsigned int state; // @synthesize state;
@property(copy, nonatomic) NSString *scopeDesc; // @synthesize scopeDesc;
@property(copy, nonatomic) NSString *scope; // @synthesize scope;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

@end

