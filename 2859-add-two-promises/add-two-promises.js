/**
 * @param {Promise} promise1
 * @param {Promise} promise2
 * @return {Promise}
 */
function addTwoPromises(promise1, promise2) {
  return Promise.all([promise1, promise2])
    .then(([val1, val2]) => val1 + val2);
}


