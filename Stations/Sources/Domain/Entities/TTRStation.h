//
//  TTRStation.h
//  Stations
//
//  Created by Nikolay Evstigneev on 26.01.16.
//  Copyright © 2016 Nikolay Evstigneev. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TTRPoint.h"

@interface TTRStation : NSObject

@property (copy, nonatomic, readonly) NSString *countryTitle;
@property (assign, nonatomic, readonly) TTRPoint point;
@property (copy, nonatomic, readonly) NSString *districtTitle;
@property (assign, nonatomic, readonly) NSInteger cityId;
@property (copy, nonatomic, readonly) NSString *cityTitle;
@property (copy, nonatomic, readonly) NSString *regionTitle;
@property (assign, nonatomic, readonly) NSInteger stationId;
@property (copy, nonatomic, readonly) NSString *stationTitle;

- (instancetype)initWithCountryTitle:(NSString *)countryTitle point:(TTRPoint)point districtTitle:(NSString *)districtTitle
                              cityId:(NSInteger)cityId cityTitle:(NSString *)cityTitle regionTitle:(NSString *)regionTitle
                           stationId:(NSInteger)stationId stationTitle:(NSString *)stationTitle ;

@end
