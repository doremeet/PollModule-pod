//
//  IBandPollQuestion.h
//  IBandPlayerSDK
//
//  Created by Yogev Barber on 05/02/2018.
//  Copyright © 2018 IBand. All rights reserved.
//

#import <Foundation/Foundation.h>

@import IBandPlayerSDK;

typedef NS_ENUM(NSUInteger, IBandPollQuestionVotingState) {
    IBandPollQuestionVotingStatePreparing,
    IBandPollQuestionVotingStateReady,
    IBandPollQuestionVotingStateEnded,
};

@class IBandPollQuestion;

@protocol IBandPollQuestionDelegate <IBandDelegate>
/*!
 * @discussion Listen for any time the ready state changed.
 *
 * @param question The current class
 * @param state The current ready state
 * @param oldState The previous ready state
 * @noexcept This method do NOT throws exception on any case
 */
-(void) onQuestionVotingStateChanged:(IBandPollQuestion*)question state:(IBandPollQuestionVotingState)state oldState:(IBandPollQuestionVotingState)oldState;

/*!
 * @discussion Listen when the question votes updated.
 *
 * @param question The current class
 * @param votesRatio array of votes ratios
 */

-(void)onQuestionVotesUpdated:(IBandPollQuestion*)question votesRatio:(NSArray<NSNumber*>*)votesRatio;
@end

@interface IBandPollQuestion : NSObject <IBandDelegatable>

/*!
 * @discussion Get current ready state.
 *
 * @noexcept This method do NOT throws exception on any case
 */
-(IBandPollQuestionVotingState) getVotingState;

/*!
 * @discussion Add the given delegate for this class.
 *
 * @param delegate The given delegate
 * @noexcept This method do NOT throws exception on any case
 */
-(void) addDelegate:(id<IBandPollQuestionDelegate>)delegate;

/*!
 * @discussion Remove the given delegate from this class.
 *
 * @param delegate The given delegate
 * @noexcept This method do NOT throws exception on any case
 */
-(void) removeDelegate:(id<IBandPollQuestionDelegate>)delegate;

/*!
 * @discussion Get the question query to display to the user.
 @return NSString*
 */
-(NSString*) getQuery;

/*!
 * @discussion Get the question options which the user should select one of then.
 * @return NSArray<NSString*>*
 */
-(NSArray<NSString*>*) getOptions;

/*!
 * @discussion Select an option and vote for this poll question.
 *
 * @param optionIndex The selected option index (starting from `0`)
 * @throw IBandInvalidArgumentException If given `optionIndex` is out of bounds
 * @throw IBandIllegalStateException If the question already voted or ready state is not equals
 *    to READY.
 */
-(void) vote:(NSInteger)optionIndex;

/*!
 * @discussion Get the voted option for this question.
 * Return -1 if the question not voted yet.
 */
-(NSInteger) getVotedOption;

/*!
 * @discussion Get the vote ratio of each option.
 * Returns NULL if no such information available yet.
 */
-(NSArray<NSNumber*>*) getVotesRatio;
@end

