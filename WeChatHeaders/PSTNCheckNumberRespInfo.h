//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PSTNCheckNumberRespInfo : NSObject
{
    NSString *_PureNumber;
    NSString *_CountryCode;
    unsigned int _result;
}

@property(nonatomic) unsigned int result; // @synthesize result=_result;
@property(copy, nonatomic) NSString *CountryCode; // @synthesize CountryCode=_CountryCode;
@property(copy, nonatomic) NSString *PureNumber; // @synthesize PureNumber=_PureNumber;
- (void).cxx_destruct;

@end

