//
//  IBandPoll.h
//  Pods
//
//  Created by Yogev Barber on 05/02/2018.
//


@class IBandPoll;
@class IBandSDK;
@class IBandPollQuestion;
@import IBandPlayerSDK;

#define POLL_SDK_VERSION @"0.1.0"
#define POLL_SDK_BUILD_NUMBER @"2"

@protocol IBandPollDelegate <IBandInteractionDelegate>
/*!
 * @discussion Listen when there is a new question on the poll.
 *
 * @param poll The current class
 * @param question The new question
 */
-(void) onPollNewActiveQuestion:(IBandPoll*)poll question:(IBandPollQuestion*)question;
@end

@interface IBandPoll : IBandInteraction <IBandDelegatable>

- (instancetype)initWithSDK:(IBandSDK*)sdk;

/*!
 * @discussion Add the given delegate for this class.
 *
 * @param delegate The given deleate
 * @noexcept This method do NOT throws exception on any case
 */
-(void) addDelegate:(id<IBandPollDelegate>)delegate;

/*!
 * @discussion Remove the given delegate from this class.
 *
 * @param delegate The given delegate
 * @noexcept This method do NOT throws exception on any case
 */
-(void) removeDelegate:(id<IBandPollDelegate>)delegate;

/*!
 * @discussion Get all the active questions on the poll.
 */
-(NSArray<IBandPollQuestion*>*) getActiveQuestions;

/*!
 * @discussion Remove the given active question from the poll.
 * Those nothing if the given question is not active anymore.
 */
-(void) removeActiveQuestion:(IBandPollQuestion*)activeQuestion;

@end


