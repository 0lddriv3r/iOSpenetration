//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BaseStyle : NSObject
{
    struct CGRect _frame;
    BOOL _bUserInteractionEnabled;
    struct _NSRange _range;
}

@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(nonatomic) BOOL bUserInteractionEnabled; // @synthesize bUserInteractionEnabled=_bUserInteractionEnabled;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)init;

@end
