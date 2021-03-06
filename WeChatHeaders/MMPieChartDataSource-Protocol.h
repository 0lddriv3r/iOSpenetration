//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMPieChartView, UIColor;

@protocol MMPieChartDataSource <NSObject>
- (float)pieChart:(MMPieChartView *)arg1 valueForPieAtIndex:(unsigned int)arg2;
- (unsigned int)numberOfPiesInChart:(MMPieChartView *)arg1;

@optional
- (float)pieChart:(MMPieChartView *)arg1 radiuForPieAtIndex:(unsigned int)arg2;
- (UIColor *)pieChart:(MMPieChartView *)arg1 colorForPieAtIndex:(unsigned int)arg2;
@end

