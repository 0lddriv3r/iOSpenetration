//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseResponse, NSString;

@interface GetLatestPayProductInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) int outerErrCode; // @dynamic outerErrCode;
@property(retain, nonatomic) NSString *outerErrMsg; // @dynamic outerErrMsg;
@property(retain, nonatomic) NSString *outerRemarks; // @dynamic outerRemarks;
@property(retain, nonatomic) NSString *product; // @dynamic product;
@property(retain, nonatomic) NSString *productList; // @dynamic productList;
@property(nonatomic) int wxErrCode; // @dynamic wxErrCode;
@property(retain, nonatomic) NSString *wxErrMsg; // @dynamic wxErrMsg;

@end

