//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface WCPayOverseaMainWalletDataSource : NSObject
{
    NSMutableArray *_m_dataSource;
}

@property(retain, nonatomic) NSMutableArray *m_dataSource; // @synthesize m_dataSource=_m_dataSource;
- (void).cxx_destruct;
- (int)count;
- (id)dataAtSection:(int)arg1;
- (void)updateWithPayFunctionListRespObject:(id)arg1 ReadList:(id)arg2 rowCount:(unsigned int)arg3 walletRegionDesc:(id)arg4;
- (void)calculateFooterView;
- (id)initWithTpaCountry:(unsigned int)arg1 PayFunctionListRespObject:(id)arg2 IBGGetWalletCgiCache:(id)arg3 ReadList:(id)arg4 rowCount:(unsigned int)arg5;

@end

