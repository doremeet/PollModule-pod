//
//  PollApi.h
//  PollModule-iOS
//
//  Created by Yogev Barber on 25/02/2018.
//

#import <Foundation/Foundation.h>
@class IBandSDK;

@interface PollApi : NSObject
-(instancetype)initWithSDK:(IBandSDK*)sdk;
-(void) postVote:(NSString*)questionId params:(NSDictionary*)params success:(void (^)(id data))success failure:(void (^)(NSError *error))failure;
@end

