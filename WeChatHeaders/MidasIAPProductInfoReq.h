//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MidasIAPBaseReq.h"

@class NSMutableSet;

@interface MidasIAPProductInfoReq : MidasIAPBaseReq
{
    BOOL _useCache;
    NSMutableSet *_productIds;
}

@property(readonly, nonatomic) NSMutableSet *productIds; // @synthesize productIds=_productIds;
@property(nonatomic) BOOL useCache; // @synthesize useCache=_useCache;
- (void).cxx_destruct;
- (BOOL)validateParams;
- (id)init;

@end
